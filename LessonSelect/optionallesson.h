#ifndef OPTIONALLESSON_H
#define OPTIONALLESSON_H

#include <QWidget>
#include<QButtonGroup>
#include<QVector>
#include<QFile>
#include <QMessageBox>
#include <QtDebug>

namespace Ui {
class optionalLesson;
}

class optionalLesson : public QWidget
{
    Q_OBJECT

public:
    explicit optionalLesson(QWidget *parent = nullptr);
    ~optionalLesson();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::optionalLesson *ui;
};

#endif // OPTIONALLESSON_H
