#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStandardItemModel>
#include <QMainWindow>
#include<QStackedLayout>
#include<QFile>
#include<QMessageBox>
#include <QtDebug>
#include <QVector>
#include<QButtonGroup>
#include"add.h"
#include"search.h"
#include"student.h"
#include"changelesson.h"
#include"deletestudent.h"
#include"lessonrank.h"
#include"login.h"
#include"lessonchoose.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QVector<student> studentinfo;

private slots:
    void on_action_2_triggered();
    void on_action_4_triggered();
    void appear();
    void change();
    void loappear();


    void on_action_triggered();

    void on_action_8_triggered();

    void on_action_6_triggered();

    void on_action_9_triggered();

signals:
    void display(int number);

private:
    Ui::MainWindow *ui;
    reservation *re;
    search *se;
    deletestudent *de;
    changelesson *ch;
    lessonrank *le;
    lessonChoose *lc;
public:
    login *lo;
    QStackedLayout *stackLayout;
};
#endif // MAINWINDOW_H
