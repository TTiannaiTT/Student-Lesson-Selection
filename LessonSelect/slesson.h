#ifndef SLESSON_H
#define SLESSON_H
#include <QMainWindow>
#include <QObject>
#include <QWidget>
class slesson
{
public:
    slesson();
    slesson(QString tlnum, QString tlname, QString tcredit, QString tteacher,QString tterm, QString tclassroom,QString tstate){
            lnum = tlnum;
            lname = tlname;
            teacher = tteacher;
            credit = tcredit;
            term = tterm;
            classroom = tclassroom;
            state=tstate;
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
    QString getteacher(){
        return teacher;
    }
    QString getterm(){
        return term;
    }
    QString getclassroom(){
        return classroom;
    }
    QString getstate(){
        return state;
    }
    void change1(){
        state="Selected";
    }
    void change0(){
        state="Unselected";
    }
private:
    QString lnum;
    QString lname;
    QString credit;
    QString teacher;
    QString term;
    QString classroom;
    QString state;
};

#endif // SLESSON_H
