#ifndef PATIENT_H
#define PATIENT_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>

class patientData;

class patient
{
public:
    patient();
    patient(const patient &);
    patient &operator=(const patient &);
    ~patient();

private:
    QSharedDataPointer<patientData> data;
    //信息
    QString name;
    int sex; //0女 1男
    QString tel;
    int age;
    int time;//0早上 1下午 2晚上
};

#endif // PATIENT_H
