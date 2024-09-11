#include "mustlesson.h"
#include "ui_mustlesson.h"
#include"slesson.h"
#include"login.h"
#include"mainwindow.h"
mustLesson::mustLesson(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mustLesson)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(7);
    QStringList headerLabels;
    //QStringList headerLabels用来记录表格表头数据
    headerLabels << tr("课程号") << tr("课程名称") << tr("学分") << tr("教师") << tr("学期") << tr("教室")<<tr("选课状态");
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    // void setHorizontalHeaderLabels(const QStringList &labels);设置水平表头标签
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置根据总宽度调整列宽
    ui->tableWidget->setRowCount(10);
    //初始行数设为一行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->clearContents();
    //extern int grade;
//    QString filename;
//       QVector<slesson> alllessonInfo;

//       if(Grade==23){
//           filename="mustLesson.txt";
//       }
//       if(Grade==22){
//           filename="mustLesson1.txt";
//       }
//       else{
//           filename="mustLesson.txt";
//       }
//       QFile file(filename);
//       file.open(QIODevice::ReadOnly|QIODevice::Text);
//       //以只读 的方式打开文本文件
//       if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
//           QMessageBox::about(NULL, "反馈", "数据文件打开失败");
//           return;
//       }

//       QTextStream inp(&file);
//       //以file建立一个QT的文本流
//       while(!inp.atEnd()){
//           QString lnum;
//           QString lname;
//           QString credit;
//           QString teacher;
//           QString term;
//           QString classroom;
//           QString state;
//           inp >> lnum >> lname >> credit >> teacher >> term >> classroom >> state;
//           slesson tlesson=slesson(lnum,lname,credit,teacher,term,classroom,state);
//           alllessonInfo.push_back(tlesson);
//       }
//       //alllessonInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
//       file.close();


//           ui->tableWidget->setRowCount(alllessonInfo.size());
//           //将表格的行数设为与学生数量相同
//           //否则setItem添加单元格不会生效
//           for(int i = 0; i < alllessonInfo.size(); i++){

//               ui->tableWidget->setItem(i, 0, new QTableWidgetItem((alllessonInfo[i].getnum())));
//               ui->tableWidget->setItem(i, 1, new QTableWidgetItem(alllessonInfo[i].getname()));
//               ui->tableWidget->setItem(i, 2, new QTableWidgetItem((alllessonInfo[i].getcredit())));
//               ui->tableWidget->setItem(i, 3, new QTableWidgetItem(alllessonInfo[i].getteacher()));
//               ui->tableWidget->setItem(i, 4, new QTableWidgetItem((alllessonInfo[i].getterm())));
//               ui->tableWidget->setItem(i, 5, new QTableWidgetItem((alllessonInfo[i].getclassroom())));
//               ui->tableWidget->setItem(i, 6, new QTableWidgetItem((alllessonInfo[i].getstate())));
//               //设置各单元格的数据，非QString类型的数据需要转换为QString
//           }
}

mustLesson::~mustLesson()
{
    delete ui;
}
//写到这里，还差一点修改就写完了
void mustLesson::on_pushButton_clicked()
{
    QVector<slesson> alllessonInfo;
    QString filename;
    if(Grade==23){
        filename="mustLesson.txt";
    }
    if(Grade==22){
        filename="mustLesson1.txt";
    }
    else{
        filename="mustLesson.txt";
    }
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //以只读 的方式打开文本文件
    if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return;
    }

    QTextStream inp(&file);
    //以file建立一个QT的文本流
    while(!inp.atEnd()){
        QString lnum;
        QString lname;
        QString credit;
        QString teacher;
        QString term;
        QString classroom;
        QString state;
        inp >> lnum >> lname >> credit >> teacher >> term >> classroom >> state;
        slesson tlesson=slesson(lnum,lname,credit,teacher,term,classroom,state);
        alllessonInfo.push_back(tlesson);
    }
    //alllessonInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
    file.close();
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        //以只写覆盖的方式打开文本文件
        if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
            QMessageBox::about(NULL, "反馈", "数据文件打开失败");
            return;
        }

        //重新写入文件并覆盖
        QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
        int count = items.count();
        int row;
        for(int i = 0; i < count; i++)
        {
            row = ui->tableWidget->row(items.at(i));//从0开始！
            QTableWidgetItem *item = items.at(i);
            QString text = item->text(); //获取内容

        }

        QTextStream out(&file);
        for(auto i : alllessonInfo){
            int check=i.getnum().toInt();
            if( check == row+1){
                i.change1();
            }
            out << i.getnum() << " " << i.getname() << " " << i.getcredit() << " " << i.getteacher() << " " << i.getterm() << " " << i.getclassroom()<< " "<< i.getstate()<<endl;

        }
        file.close();
        for(int i = 0; i < alllessonInfo.size(); i++){

            ui->tableWidget->setItem(i, 0, new QTableWidgetItem((alllessonInfo[i].getnum())));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(alllessonInfo[i].getname()));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem((alllessonInfo[i].getcredit())));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(alllessonInfo[i].getteacher()));
            ui->tableWidget->setItem(i, 4, new QTableWidgetItem((alllessonInfo[i].getterm())));
            ui->tableWidget->setItem(i, 5, new QTableWidgetItem((alllessonInfo[i].getclassroom())));
            ui->tableWidget->setItem(i, 6, new QTableWidgetItem((alllessonInfo[i].getstate())));
            //设置各单元格的数据，非QString类型的数据需要转换为QString
        }

}

void mustLesson::on_pushButton_2_clicked()
{
    QVector<slesson> alllessonInfo;
    QString filename;
    if(Grade==23){
        filename="mustLesson.txt";
    }
    if(Grade==22){
        filename="mustLesson1.txt";
    }
    else{
        filename="mustLesson.txt";
    }
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //以只读 的方式打开文本文件
    if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return;
    }

    QTextStream inp(&file);
    //以file建立一个QT的文本流
    while(!inp.atEnd()){
        QString lnum;
        QString lname;
        QString credit;
        QString teacher;
        QString term;
        QString classroom;
        QString state;
        inp >> lnum >> lname >> credit >> teacher >> term >> classroom >> state;
        slesson tlesson=slesson(lnum,lname,credit,teacher,term,classroom,state);
        alllessonInfo.push_back(tlesson);
    }
    //alllessonInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
    file.close();
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        //以只写覆盖的方式打开文本文件
        if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
            QMessageBox::about(NULL, "反馈", "数据文件打开失败");
            return;
        }

        //重新写入文件并覆盖
        QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
        int count = items.count();
        int row;
        for(int i = 0; i < count; i++)
        {
            row = ui->tableWidget->row(items.at(i));//从0开始！
            QTableWidgetItem *item = items.at(i);
            QString text = item->text(); //获取内容

        }

        QTextStream out(&file);
        for(auto i : alllessonInfo){
            int check=i.getnum().toInt();
            if( check == row+1){
                i.change0();
            }
            out << i.getnum() << " " << i.getname() << " " << i.getcredit() << " " << i.getteacher() << " " << i.getterm() << " " << i.getclassroom()<< " "<< i.getstate()<<endl;

        }
        file.close();
        for(int i = 0; i < alllessonInfo.size(); i++){

            ui->tableWidget->setItem(i, 0, new QTableWidgetItem((alllessonInfo[i].getnum())));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(alllessonInfo[i].getname()));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem((alllessonInfo[i].getcredit())));
            ui->tableWidget->setItem(i, 3, new QTableWidgetItem(alllessonInfo[i].getteacher()));
            ui->tableWidget->setItem(i, 4, new QTableWidgetItem((alllessonInfo[i].getterm())));
            ui->tableWidget->setItem(i, 5, new QTableWidgetItem((alllessonInfo[i].getclassroom())));
            ui->tableWidget->setItem(i, 6, new QTableWidgetItem((alllessonInfo[i].getstate())));
            //设置各单元格的数据，非QString类型的数据需要转换为QString
        }
}

void mustLesson::on_pushButton_3_clicked()
{

       QVector<slesson> alllessonInfo;
       QString filename;
       if(Grade==23){
           filename="mustLesson.txt";
       }
       if(Grade==22){
           filename="mustLesson1.txt";
       }
       else{
           filename="mustLesson.txt";
       }
       QFile file(filename);
       file.open(QIODevice::ReadOnly|QIODevice::Text);
       //以只读 的方式打开文本文件
       if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
           QMessageBox::about(NULL, "反馈", "数据文件打开失败");
           return;
       }

       QTextStream inp(&file);
       //以file建立一个QT的文本流
       while(!inp.atEnd()){
           QString lnum;
           QString lname;
           QString credit;
           QString teacher;
           QString term;
           QString classroom;
           QString state;
           inp >> lnum >> lname >> credit >> teacher >> term >> classroom >> state;
           slesson tlesson=slesson(lnum,lname,credit,teacher,term,classroom,state);
           alllessonInfo.push_back(tlesson);
       }
       //alllessonInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
       file.close();


           ui->tableWidget->setRowCount(alllessonInfo.size());
           //将表格的行数设为与学生数量相同
           //否则setItem添加单元格不会生效
           for(int i = 0; i < alllessonInfo.size(); i++){

               ui->tableWidget->setItem(i, 0, new QTableWidgetItem((alllessonInfo[i].getnum())));
               ui->tableWidget->setItem(i, 1, new QTableWidgetItem(alllessonInfo[i].getname()));
               ui->tableWidget->setItem(i, 2, new QTableWidgetItem((alllessonInfo[i].getcredit())));
               ui->tableWidget->setItem(i, 3, new QTableWidgetItem(alllessonInfo[i].getteacher()));
               ui->tableWidget->setItem(i, 4, new QTableWidgetItem((alllessonInfo[i].getterm())));
               ui->tableWidget->setItem(i, 5, new QTableWidgetItem((alllessonInfo[i].getclassroom())));
               ui->tableWidget->setItem(i, 6, new QTableWidgetItem((alllessonInfo[i].getstate())));
               //设置各单元格的数据，非QString类型的数据需要转换为QString
           }
}
