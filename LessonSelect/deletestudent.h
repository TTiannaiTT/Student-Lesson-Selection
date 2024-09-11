#ifndef DELETESTUDENT_H
#define DELETESTUDENT_H

#include <QWidget>
#include<QVector>
#include<QFile>
#include <QMessageBox>
#include <QtDebug>
#include "student.h"

namespace Ui {
class deletestudent;
}

class deletestudent : public QWidget
{
    Q_OBJECT

public:
    explicit deletestudent(QWidget *parent = nullptr);
    ~deletestudent();
signals:
    void displayd();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::deletestudent *ui;
};

#endif // DELETESTUDENT_H
