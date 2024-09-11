#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"qfiledialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));");
    ui->plainTextEdit->setStyleSheet("font: 35 11pt '微软雅黑 Light';" //字体
                                    "color: rgb(31,31,31);"		//字体颜色
                                    "padding-left:20px;"       //内边距-字体缩进
                                    "background-color: rgb(255, 255, 255);" //背景颜色
                                    "border:2px solid rgb(20,196,188);border-radius:15px;");//边框粗细-颜色-圆角设置
    ui->pushButton->setStyleSheet("QPushButton{font: 25 14pt '微软雅黑 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);"
                                    "border: none;border-radius:15px;}"
                                    "QPushButton:hover{background-color: rgb(22,218,208);}"//hover
                                    "QPushButton:pressed{background-color: rgb(17,171,164);}");//pressed

    re=new reservation;
    se=new search;
    ch=new changelesson;
    de=new deletestudent;
    le=new lessonrank;
    lo= new login;
    lc=new lessonChoose;
    stackLayout= new QStackedLayout;

    stackLayout->addWidget(this);
    stackLayout->addWidget(re);
    stackLayout->addWidget(se);
    stackLayout->addWidget(de);
    stackLayout->addWidget(ch);
    stackLayout->addWidget(le);
    stackLayout->addWidget(lo);
    stackLayout->addWidget(lc);

    setLayout(stackLayout);
    connect(re,SIGNAL(displayr()),this,SLOT(appear()));
    connect(se,SIGNAL(displays()),this,SLOT(appear()));
    connect(de,SIGNAL(displayd()),this,SLOT(appear()));
    connect(ch,SIGNAL(displayc()),this,SLOT(appear()));
    connect(le,SIGNAL(displayl()),this,SLOT(appear()));
    connect(lo,SIGNAL(displaylo()),this,SLOT(appear()));
    connect(lo,SIGNAL(displaylc()),this,SLOT(change()));
    connect(lc,SIGNAL(displayllc()),this,SLOT(loappear()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_2_triggered()
{
    emit display(1);
    this->hide();
    re->show();
}

void MainWindow::on_action_4_triggered()
{
    emit display(2);
    this->hide();
    se->show();
}

void MainWindow::appear(){
    this->show();
}
void MainWindow::change(){
    this->hide();
    lc->show();
}
void MainWindow::loappear(){
    lo->show();
}


void MainWindow::on_action_triggered()
{//打开文件

    QString curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
       //调用打开文件对话框打开一个文件
       QString aFileName=QFileDialog::getOpenFileName(this,"打开一个文件",curPath, "井数据文件(*.txt);;所有文件(*.*)");
       if (aFileName.isEmpty())
           return; //如果未选择文件，退出
       QStringList fFileContent;//文件内容字符串列表
       QFile aFile(aFileName);  //以文件方式读出
       if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读文本方式打开文件
       {
           QTextStream aStream(&aFile); //用文本流读取文件
           ui->plainTextEdit->clear();//清空
           while (!aStream.atEnd())
           {
               QString str=aStream.readLine();//读取文件的一行
               ui->plainTextEdit->appendPlainText(str); //添加到文本框显示
               fFileContent.append(str); //添加到 StringList
           }
           aFile.close();//关闭文件
           //this->LabCurFile->setText("当前文件："+aFileName);//状态栏显示

}
}

void MainWindow::on_action_8_triggered()
{
    emit display(4);
    this->hide();
    de->show();
}

void MainWindow::on_action_6_triggered()
{
    emit display(5);
    this->hide();
    ch->show();
}

void MainWindow::on_action_9_triggered()
{
    emit display(6);
    this->hide();
    le->show();
}
