#ifndef MUSTLESSON_H
#define MUSTLESSON_H

#include <QWidget>
#include<QButtonGroup>
#include<QVector>
#include<QFile>
#include <QMessageBox>
#include <QtDebug>

namespace Ui {
class mustLesson;
}

class mustLesson : public QWidget
{
    Q_OBJECT

public:
    explicit mustLesson(QWidget *parent = nullptr);
    ~mustLesson();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::mustLesson *ui;
};

#endif // MUSTLESSON_H
