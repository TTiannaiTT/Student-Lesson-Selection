#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include<QVector>
#include"lesson.h"
class student
{
public:
    student();
    student(int tsnum, QString tsname, int tsclass, QString ttel, QString tbirth,QString taddress,QString tslesson,lesson tlesson){
            snum = tsnum;
            sname = tsname;
            sclass = tsclass;
            tel = ttel;
            birth = tbirth;
            address=taddress;
            slesson = tslesson;
            alllessonInfo[0]=tlesson;
        }
    int getId(){
        return snum;
    }
    QString getname(){
        return sname;
    }
    int getclass(){
        return sclass;
    }
    QString gettel(){
        return tel;
    }
    QString getbirth(){
        return birth;
    }
    QString getaddress(){
        return address;

    }
    QString getlesson(){
        return slesson;
    }
    lesson*getlessoninfo(){
        return alllessonInfo;
    }
    void addlesson(lesson tlesson){
        alllessonInfo[1]=tlesson;
    }
    void delelesson(int num){
        for(int i=0;i<10;i++){
            if(alllessonInfo[i].getnum()==num){
                alllessonInfo[i]=lesson();
            }
        }

    }
    QString getC(){
        return alllessonInfo[0].getscore();
    }
    QString getCal(){
        return alllessonInfo[0].getscore();
    }
    QString getE(){
        return alllessonInfo[0].getscore();
    }


private:
    int snum;
    QString sname;
    int sclass;
    QString tel;
    QString birth;
    QString address;
    QString slesson;
    lesson alllessonInfo[10];


};

#endif // STUDENT_H
