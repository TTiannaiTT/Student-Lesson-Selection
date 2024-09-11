#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_clicked()
{
    emit displays();
    this->close();
}

void search::on_pushButton_2_clicked()
{
    //读出当前的文件进入vector中
   QVector<student> allstudentInfo;
       if(ui->lineEdit->text() == ""){   //如果id输入栏为空则输出错误提示并返回
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

       //查询操作
       int id = ui->lineEdit->text().toInt();
       bool flag = false;
          //记录是否进行过删除
       for(auto i : allstudentInfo){
              //用迭代器遍历allStudentInfo
              if(i.getId() == id){
                 ui->label_13->setText(i.getlesson());
                 ui->label_8->setText(i.getname());
                 ui->label_9->setText(QString::number(i.getclass()));
                 ui->label_10->setText(i.gettel());
                 ui->label_11->setText(i.getbirth());
                 ui->label_12->setText(i.getaddress());
                 flag = true;
                 break;
              }
          }
          if(flag){
              QMessageBox::about(NULL, "反馈", "查询成功");
              file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
              //以只写覆盖的方式打开文本文件
              if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
                  QMessageBox::about(NULL, "反馈", "数据文件打开失败");
                  return;
              }
              QTextStream out(&file);
              for(auto i : allstudentInfo){
                  out << i.getId() << " " << i.getname() << " " << i.getclass() << " " << i.gettel() << " " << i.getbirth() << " " << i.getaddress()<< " "<< i.getlessoninfo()->getnum()<< " "<< i.getlessoninfo()->getname()<< " "<< i.getlessoninfo()->getcredit()<< " "<< i.getlessoninfo()->getterm()<< " "<< i.getlessoninfo()->getclassroom()<< " "<< i.getlessoninfo()->getscore()<< endl;
              }
              file.close();
          }else{
              //如果没有进行删除，弹出不存在对话框
               QMessageBox::about(NULL, "反馈", "id不存在！");
          }
          //关闭文件


          //ui->lineEdit->clear();
          //清空id输入框，考虑时机
}
