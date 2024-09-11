#ifndef DOCTOR_H
#define DOCTOR_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>


class doctor
{
public:
    doctor();
    doctor(int tmznum, QString tmzname, int tworknum, int ttime, int tcapacity,QString taddress,QString ttel){
            mzname = tmzname;
            mznum = tmznum;
            worknum = tworknum;
            time = ttime;
            address = taddress;
            capacity=tcapacity;
            tel = ttel;
        }
    ~doctor();

private:
    int mznum;
    QString mzname;
    int worknum;
    int time;//0早上 1下午 2晚上
    int capacity;
    QString address;
    QString tel;
};

#endif // DOCTOR_H
