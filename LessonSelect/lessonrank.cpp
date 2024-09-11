#include "lessonrank.h"
#include "ui_lessonrank.h"

lessonrank::lessonrank(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lessonrank)
{
    ui->setupUi(this);
    sortBG = new QButtonGroup;
    sortBG ->addButton(ui->radioButton,0);
    sortBG ->addButton(ui->radioButton_2,1);
    sortBG ->addButton(ui->radioButton_3,2);
    ui->tableWidget->setColumnCount(6);
    QStringList headerLabels;
    //QStringList headerLabels用来记录表格表头数据
    headerLabels << tr("学号") << tr("姓名") << tr("班级") << tr("地址") << tr("课程") << tr("成绩");
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    // void setHorizontalHeaderLabels(const QStringList &labels);设置水平表头标签
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置根据总宽度调整列宽
    ui->tableWidget->setRowCount(10);
    //初始行数设为一行
}

lessonrank::~lessonrank()
{
    delete ui;
}

void lessonrank::on_pushButton_clicked()
{
    emit displayl();
    this->close();
}
bool cmpC(student a,student b){
    return a.getC().toInt()>b.getC().toInt();
}
bool cmpCal(student a,student b){
    return a.getCal().toInt()>b.getCal().toInt();
}
bool cmpE(student a,student b){
    return a.getE().toInt()>b.getE().toInt();
}
void lessonrank::on_pushButton_2_clicked()
{

    //读出数据
    ui->tableWidget->clearContents();
       //清空除表头外的所有数据
       //若想清除表头可使用clear()
       int sortTag = sortBG->checkedId();
       //取得当前选中的单选框的id
       QVector<student> allstudentInfo;
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

       //排序
       QVector<student> somestudentInfo;
       switch (sortTag) {
           case 0:
           for(QVector<student>::iterator it = allstudentInfo.begin(); it != allstudentInfo.end(); it++){
                  //用迭代器遍历allStudentInfo

               //这里问题出在跑不进if的语句里面，判断那里有点问题
               int a=it->getId();
               if(a%3 == 1){
                   somestudentInfo.push_back(*it);

               }

              }
                  std::sort(somestudentInfo.begin(), somestudentInfo.end(), cmpC);
                   break;
            case 1:
           for(auto i : allstudentInfo){
                  //用迭代器遍历allStudentInfo
                  if(i.getlesson() == "Calculus"){
                      somestudentInfo.push_back(i);

                  }
              }
                  std::sort(somestudentInfo.begin(), somestudentInfo.end(), cmpC);
                   break;
               case 2:
           for(auto i : allstudentInfo){

                  if(i.getlesson() == "English"){
                      somestudentInfo.push_back(i);

                  }
              }
                  std::sort(somestudentInfo.begin(), somestudentInfo.end(), cmpC);
                   break;
           }
           ui->tableWidget->setRowCount(somestudentInfo.size());
           //将表格的行数设为与学生数量相同
           //否则setItem添加单元格不会生效
           for(int i = 0; i < somestudentInfo.size(); i++){

               ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(somestudentInfo[i].getId())));
               ui->tableWidget->setItem(i, 1, new QTableWidgetItem(somestudentInfo[i].getname()));
               ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(somestudentInfo[i].getclass())));
               ui->tableWidget->setItem(i, 3, new QTableWidgetItem((somestudentInfo[i].getaddress())));
               ui->tableWidget->setItem(i, 4, new QTableWidgetItem((somestudentInfo[i].getlessoninfo()->getname())));
               ui->tableWidget->setItem(i, 5, new QTableWidgetItem((somestudentInfo[i].getC())));
               //设置各单元格的数据，非QString类型的数据需要转换为QString
           }
}


