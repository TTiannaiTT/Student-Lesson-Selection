#ifndef CHANGELESSON_H
#define CHANGELESSON_H

#include <QWidget>
#include<QVector>
#include<QFile>
#include <QMessageBox>
#include <QtDebug>
#include "student.h"

namespace Ui {
class changelesson;
}

class changelesson : public QWidget
{
    Q_OBJECT

public:
    explicit changelesson(QWidget *parent = nullptr);
    ~changelesson();
signals:
    void displayc();
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changelesson *ui;
};

#endif // CHANGELESSON_H
