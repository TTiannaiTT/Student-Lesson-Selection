#include "lessonchoose.h"
#include "ui_lessonchoose.h"

lessonChoose::lessonChoose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lessonChoose)
{
    ui->setupUi(this);
    ml=new mustLesson;
    ol=new optionalLesson;

    ui->stackedWidget->addWidget(ml);
    ui->stackedWidget->addWidget(ol);

}

lessonChoose::~lessonChoose()
{
    delete ui;
}

void lessonChoose::on_pushButton_2_clicked()
{
    emit displayllc();
    this->close();
}

void lessonChoose::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void lessonChoose::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}
