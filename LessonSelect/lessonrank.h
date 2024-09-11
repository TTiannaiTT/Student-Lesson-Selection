#ifndef LESSONRANK_H
#define LESSONRANK_H

#include <QWidget>
#include<QButtonGroup>
#include<QVector>
#include<QFile>
#include <QMessageBox>
#include <QtDebug>
#include "student.h"

namespace Ui {
class lessonrank;
}

class lessonrank : public QWidget
{
    Q_OBJECT

public:
    explicit lessonrank(QWidget *parent = nullptr);
    ~lessonrank();

signals:
    void displayl();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::lessonrank *ui;
    QButtonGroup *sortBG;
};

#endif // LESSONRANK_H
