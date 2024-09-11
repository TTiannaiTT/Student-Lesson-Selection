#include "changelesson.h"
#include "ui_changelesson.h"

changelesson::changelesson(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changelesson)
{
    ui->setupUi(this);
}

changelesson::~changelesson()
{
    delete ui;
}

void changelesson::on_pushButton_3_clicked()
{
    emit displayc();
    this->hide();
}

void changelesson::on_pushButton_clicked()
{
    //读出当前的文件进入vector中
   QVector<student> allstudentInfo;
       if(ui->lineEdit_63->text() == ""){   //如果id输入栏为空则输出错误提示并返回
           QMessageBox::about(NULL, "反馈", "id不得为空!");
           return;
       }
       QFile file("student.txt");
       file.open(QIODevice::ReadOnly|QIODevice::Text);
       //以只读 的方式打开文本文件
       if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
           QMessageBox::about(NULL, "反馈", "数据文件打开失败");
           return;
       }

       QTextStream inp(&file);
       //以file建立一个QT的文本流
       while(!inp.atEnd()){
           int snum;
           QString sname;
           int sclass;
           QString tel;
           QString birth;
           QString address;
           QString slesson;

           QString lnum;
           QString lname;
           QString credit;
           QString term;
           QString classroom;
           QString score;
           inp >> snum >> sname >> sclass >> tel >> birth >> address >> lnum >> lname >> credit >> term >> classroom >> score;
           slesson=lname;
           lesson tlesson=lesson(lnum,lname,credit,term,classroom,score);
           allstudentInfo.push_back(student(snum ,sname , sclass , tel , birth , address , slesson,tlesson));
       }
       allstudentInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
       file.close();

       //更改对应课程
       QString tnum=ui->lineEdit_57->text();
       QString tname=ui->lineEdit_58->text();
       QString tcredit=ui->lineEdit_59->text();
       QString tterm=ui->lineEdit_60->text();
       QString tclassroom=ui->lineEdit_61->text();
       QString tscore=ui->lineEdit_62->text();
       int id = ui->lineEdit_63->text().toInt();
       bool flag = false;
          //记录是否进行过删除
       for(QVector<student>::iterator it = allstudentInfo.begin(); it != allstudentInfo.end(); it++){
              //用迭代器遍历allStudentInfo
              if(it->getId() == id){
                  lesson alesson=lesson(tnum,tname,tcredit,tterm,tclassroom,tscore);
                  it->addlesson(alesson);
                  flag = true;
              }
          }
          if(flag){   //如果进行过删除，弹出对话框并更新文件
              QMessageBox::about(NULL, "反馈", "修改选课成功");
              file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
              //以只写覆盖的方式打开文本文件
              if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
                  QMessageBox::about(NULL, "反馈", "数据文件打开失败");
                  return;
              }

              //重新写入文件并覆盖
              QTextStream out(&file);
              for(auto i : allstudentInfo){
                  if(i.getId() == id){
                      lesson alesson=lesson(tnum,tname,tcredit,tterm,tclassroom,tscore);
                      out << i.getId() << " " << i.getname() << " " << i.getclass() << " " << i.gettel() << " " << i.getbirth() << " " << i.getaddress()<< " "<< i.getlessoninfo()->getnum()<< " "<< i.getlessoninfo()->getname()<< " "<< i.getlessoninfo()->getcredit()<< " "<< i.getlessoninfo()->getterm()<< " "<< i.getlessoninfo()->getclassroom()<< " "<< i.getlessoninfo()->getscore()<< " "<< (i.getlessoninfo()+1)->getnum()<< " "<< (i.getlessoninfo()+1)->getname()<< " "<< (i.getlessoninfo()+1)->getcredit()<< " "<< (i.getlessoninfo()+1)->getterm()<< " "<< (i.getlessoninfo()+1)->getclassroom()<< " "<< (i.getlessoninfo()+1)->getscore()<< endl;

                  }
                  else{
                      out << i.getId() << " " << i.getname() << " " << i.getclass() << " " << i.gettel() << " " << i.getbirth() << " " << i.getaddress()<< " "<< i.getlessoninfo()->getnum()<< " "<< i.getlessoninfo()->getname()<< " "<< i.getlessoninfo()->getcredit()<< " "<< i.getlessoninfo()->getterm()<< " "<< i.getlessoninfo()->getclassroom()<< " "<< i.getlessoninfo()->getscore()<< endl;
                  }

              }
              file.close();
          }else{
               QMessageBox::about(NULL, "反馈", "id不存在！");
          }
          //关闭文件
          ui->lineEdit_57->clear();
          ui->lineEdit_58->clear();
          ui->lineEdit_59->clear();
          ui->lineEdit_60->clear();
          ui->lineEdit_61->clear();
          ui->lineEdit_62->clear();
          ui->lineEdit_63->clear();
          //清空id输入框
}

void changelesson::on_pushButton_2_clicked()
{
    //读出当前的文件进入vector中
   QVector<student> allstudentInfo;
       if(ui->lineEdit_63->text() == ""){   //如果id输入栏为空则输出错误提示并返回
           QMessageBox::about(NULL, "反馈", "id不得为空!");
           return;
       }
       QFile file("student.txt");
       file.open(QIODevice::ReadOnly|QIODevice::Text);
       //以只读 的方式打开文本文件
       if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
           QMessageBox::about(NULL, "反馈", "数据文件打开失败");
           return;
       }

       QTextStream inp(&file);
       //以file建立一个QT的文本流
       while(!inp.atEnd()){
           int snum;
           QString sname;
           int sclass;
           QString tel;
           QString birth;
           QString address;
           QString slesson;

           QString lnum;
           QString lname;
           QString credit;
           QString term;
           QString classroom;
           QString score;
           inp >> snum >> sname >> sclass >> tel >> birth >> address >> lnum >> lname >> credit >> term >> classroom >> score;
           slesson=lname;
           lesson tlesson=lesson(lnum,lname,credit,term,classroom,score);
           allstudentInfo.push_back(student(snum ,sname , sclass , tel , birth , address , slesson,tlesson));
       }
       allstudentInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
       file.close();

       //更改对应课程
       int tnum=ui->lineEdit_57->text().toInt();
       int id = ui->lineEdit_63->text().toInt();
       bool flag = false;
          //记录是否进行过删除
       for(QVector<student>::iterator it = allstudentInfo.begin(); it != allstudentInfo.end(); it++){
              //用迭代器遍历allStudentInfo
              if(it->getId() == id){
                  it->delelesson(tnum);
                  flag = true;
              }
          }
          if(flag){   //如果进行过删除，弹出对话框并更新文件
              QMessageBox::about(NULL, "反馈", "修改选课成功");
              file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
              //以只写覆盖的方式打开文本文件
              if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
                  QMessageBox::about(NULL, "反馈", "数据文件打开失败");
                  return;
              }

              //重新写入文件并覆盖
              QTextStream out(&file);
              for(auto i : allstudentInfo){


                      out << i.getId() << " " << i.getname() << " " << i.getclass() << " " << i.gettel() << " " << i.getbirth() << " " << i.getaddress()<< " "<< i.getlessoninfo()->getnum()<< " "<< i.getlessoninfo()->getname()<< " "<< i.getlessoninfo()->getcredit()<< " "<< i.getlessoninfo()->getterm()<< " "<< i.getlessoninfo()->getclassroom()<< " "<< i.getlessoninfo()->getscore()<< endl;


              }
              file.close();
          }else{
               QMessageBox::about(NULL, "反馈", "id不存在！");
          }
          //关闭文件
          ui->lineEdit_57->clear();
          ui->lineEdit_58->clear();
          ui->lineEdit_59->clear();
          ui->lineEdit_60->clear();
          ui->lineEdit_61->clear();
          ui->lineEdit_62->clear();
          ui->lineEdit_63->clear();
          //清空id输入框
}
