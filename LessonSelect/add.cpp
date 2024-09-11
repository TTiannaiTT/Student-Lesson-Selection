#include "add.h"
#include "ui_reservation.h"

reservation::reservation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reservation)
{
    ui->setupUi(this);
}

reservation::~reservation()
{
    delete ui;
}

void reservation::on_pushButton_clicked()
{
    emit displayr();
    this->hide();

}

void reservation::on_pushButton_2_clicked()
{

    int snum=ui->lineEdit->text().toInt();
    QString sname=ui->lineEdit_2->text();
    int sclass=ui->lineEdit_3->text().toInt();
    QString tel=ui->lineEdit_4->text();
    QString birth=ui->lineEdit_5->text();
    QString address=ui->lineEdit_7->text();
    QString lesson=ui->lineEdit_8->text();

    if(ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "" || ui->lineEdit_3->text() == "" || ui->lineEdit_4->text() == "" || ui->lineEdit_5->text() == ""|| ui->lineEdit_7->text() == ""|| ui->lineEdit_8->text() == ""){
            //输入非法判断
        QMessageBox::about(NULL, "提示", "存在空项");
        }

    //文件
    QFile file("student.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
        QMessageBox::about(NULL, "提示", "数据文件打开失败");
        return;
    }
    QTextStream out(&file);
    out << snum << " " <<  sname << " " << sclass << " " << tel << " " << birth << " " << address << " " << lesson<<endl;
    file.close();

    QMessageBox::about(NULL, "提示", "插入成功");
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
}
