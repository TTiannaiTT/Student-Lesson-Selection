#ifndef LESSONCHOOSE_H
#define LESSONCHOOSE_H

#include <QWidget>
#include<QStackedWidget>

#include"mustlesson.h"
#include"optionallesson.h"

namespace Ui {
class lessonChoose;
}

class lessonChoose : public QWidget
{
    Q_OBJECT

public:
    explicit lessonChoose(QWidget *parent = nullptr);
    ~lessonChoose();
signals:
    void displayllc();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::lessonChoose *ui;
    mustLesson *ml;
    optionalLesson *ol;
};

#endif // LESSONCHOOSE_H
