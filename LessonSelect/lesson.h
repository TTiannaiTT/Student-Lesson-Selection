#ifndef LESSON_H
#define LESSON_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class lesson
{
public:
    lesson();
    lesson(QString tlnum, QString tlname, QString tcredit, QString tterm, QString tclassroom,QString tscore){
            lnum = tlnum;
            lname = tlname;
            credit = tcredit;
            term = tterm;
            classroom = tclassroom;
            score=tscore;
        }
    QString getnum(){
        return lnum;
    }
    QString getname(){
        return lname;
    }
    QString getcredit(){
        return credit;
    }
    QString getterm(){
        return term;
    }
    QString getclassroom(){
        return classroom;
    }
    QString getscore(){
        return score;
    }
private:
    QString lnum;
    QString lname;
    QString credit;
    QString term;
    QString classroom;
    QString score;

};

#endif // LESSON_H
