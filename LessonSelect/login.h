#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include<QVector>
#include<QFile>
#include <QMessageBox>
#include <QtDebug>
#include<QFrame>
extern int Grade;
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:

    explicit login(QWidget *parent = nullptr);
    ~login();
    void paintEvent(QPaintEvent *e);
       void paintDots();//画背景点
       void drawChars();//画字符
       QString textCode="初始化验证码";
       QString chrs= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";//字符集
       void getRandchar();//获取随机字符


signals:
    void displaylo();
    void displaylc();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::login *ui;


};

#endif // LOGIN_H
