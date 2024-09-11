#ifndef RESERVATION_H
#define RESERVATION_H

#include <QWidget>
#include<QFile>
#include<QMessageBox>
#include<QDebug>

namespace Ui {
class reservation;
}

class reservation : public QWidget
{
    Q_OBJECT

public:
    explicit reservation(QWidget *parent = nullptr);
    ~reservation();
signals:
    void displayr();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::reservation *ui;
};

#endif // RESERVATION_H
