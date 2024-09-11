#include <QTime>
#include <QChar>
#include <QPainter>
#include <QtGlobal>

#include "login.h"
#include "ui_login.h"
int Grade;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("请输入您的用户名。");
    ui->lineEdit_2->setPlaceholderText("请输入您的密码。");
    ui->lineEdit->setStyleSheet("font: 25 14pt '微软雅黑 Light';" //字体
                                    "color: rgb(31,31,31);"		//字体颜色
                                    "padding-left:20px;"       //内边距-字体缩进
                                    "background-color: rgb(255, 255, 255);" //背景颜色
                                    "border:2px solid rgb(20,196,188);border-radius:15px;");//边框粗细-颜色-圆角设置
    ui->lineEdit_2->setStyleSheet("font: 25 14pt '微软雅黑 Light';" //字体
                                    "color: rgb(31,31,31);"		//字体颜色
                                    "padding-left:20px;"       //内边距-字体缩进
                                    "background-color: rgb(255, 255, 255);" //背景颜色
                                    "border:2px solid rgb(20,196,188);border-radius:15px;");//边框粗细-颜色-圆角设置
    ui->lineEdit_3->setStyleSheet("font: 25 14pt '微软雅黑 Light';" //字体
                                    "color: rgb(31,31,31);"		//字体颜色
                                    "padding-left:20px;"       //内边距-字体缩进
                                    "background-color: rgb(255, 255, 255);" //背景颜色
                                    "border:2px solid rgb(20,196,188);border-radius:15px;");//边框粗细-颜色-圆角设置
    //this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(251,102,102, 200), stop:1 rgba(20,196,188, 210));");
    ui->pushButton->setStyleSheet("QPushButton{font: 25 14pt '微软雅黑 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);"
                                    "border: none;border-radius:15px;}"
                                    "QPushButton:hover{background-color: rgb(22,218,208);}"//hover
                                    "QPushButton:pressed{background-color: rgb(17,171,164);}");//pressed

    ui->pushButton_2->setStyleSheet("QPushButton{font: 25 14pt '微软雅黑 Light';color: rgb(255,255,255);background-color: rgb(20,196,188);"
                                    "border: none;border-radius:15px;}"
                                    "QPushButton:hover{background-color: rgb(22,218,208);}"//hover
                                    "QPushButton:pressed{background-color: rgb(17,171,164);}");//pressed
//    ui->label->setStyleSheet("font: 25 14pt '微软雅黑 Light';" //字体
//                                    "color: rgb(31,31,31);"		//字体颜色
//                                    "padding-left:20px;"       //内边距-字体缩进
//                                    "background-color: rgb(255, 255, 255);" //背景颜色
//                                    "border:2px solid rgb(20,196,188);border-radius:15px;");//边框粗细-颜色-圆角设置
    getRandchar();
    update();
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    int username=ui->lineEdit->text().toInt();
    int password=ui->lineEdit_2->text().toInt();
    Grade=(username-213000000)/10000;
    int num=(username-213000000-Grade*10000);
    QString vtext=ui->lineEdit_3->text();
    if(username==1&&password==1&&vtext==textCode){
        emit displaylo();
        QMessageBox::about(NULL, "反馈", "欢迎您，尊敬的管理员!");
        this->hide();
    }
    else if(username==2&&password==2&&vtext==textCode){
        emit displaylo();
        QMessageBox::about(NULL, "反馈", "欢迎您，尊敬的教师用户!");
        this->hide();
    }
    else if(Grade==23&&password==num&&vtext==textCode){
        emit displaylc();
        QMessageBox::about(NULL, "反馈", "欢迎你，亲爱的23级同学!");
        this->hide();
    }
    else if(Grade==22&&password==num&&vtext==textCode){
        emit displaylc();
        QMessageBox::about(NULL, "反馈", "欢迎你，亲爱的22级同学!");
        this->hide();
    }
    else if(Grade==21&&password==num&&vtext==textCode){
        emit displaylc();
        QMessageBox::about(NULL, "反馈", "欢迎你，亲爱的21级同学!");
        this->hide();
    }
    else if(Grade==20&&password==num&&vtext==textCode){
        emit displaylc();
        QMessageBox::about(NULL, "反馈", "欢迎你，亲爱的20级同学!");
        this->hide();
    }
    else{
        QMessageBox::about(NULL, "反馈", "账户密码错误或并无此用户数据!");
        getRandchar();
        ui->lineEdit_3->clear();
    }

}

void login::on_pushButton_clicked()
{
    this->close();
}

void login::paintDots()
{

    int maxPosX=ui->label->pos().x()+ui->label->width();
    int minPosX=ui->label->pos().x();
    int maxPosY=ui->label->pos().y()+ui->label->height();
    int minPosY=ui->label->pos().y();
    //画点
    QPainter *painterPoints=new QPainter;
    painterPoints->begin(this);
    QPen pen;
    QBrush brush;
    brush.setColor(Qt::white);
    brush.setStyle(Qt::SolidPattern);
    painterPoints->setBrush(brush);
    painterPoints->drawRect(QRect( ui->label->pos(),QPoint(maxPosX,maxPosY)));
    QColor color;
    pen.setWidth(3);
    pen.setStyle(Qt::DotLine);
    //    qDebug()<<maxPosX<<maxPosY;
    QPoint *points=new QPoint[500];
    for (int i=0;i<300;i++) {
        points[i]=QPoint(qrand()%(maxPosX-minPosX)+minPosX,qrand()%(maxPosY-minPosY)+minPosY);
        int R=qrand()%255;
        int G=qrand()%255;
        int B=qrand()%255;
        color.setRgb(R,G,B);
        pen.setColor(color);
        painterPoints->setPen(pen);
        painterPoints->drawPoint(points[i]);

    }
    painterPoints->end();
}
void login::drawChars()
{//画字符
    qreal labelWidth=ui->label->width();
    qreal labelHeight=ui->label->height();
    qreal labelx=ui->label->pos().x();
    qreal labely=ui->label->pos().y();
    int maxPosX=ui->label->pos().x()+ui->label->width();
    int maxPosY=ui->label->pos().y()+ui->label->height();
    QRect rect( ui->label->pos(),QPoint(maxPosX,maxPosY));
    QPainter *painter=new QPainter;
    painter->begin(this);
    QFont font;
    QPen pen;
    pen.setWidth(3);
    font.setPointSize(20);
    font.setBold(true);
    painter->setFont(font);
    //画随机字符
    for(int i=0;i<4;i++)
    {

        //        qDebug()<<str;
        int R=qrand()%255;
        int G=qrand()%255;
        int B=qrand()%255;
        QColor color;
        color.setRgb(R,G,B);
        pen.setColor(color);
        painter->setPen(pen);
        QPointF pointF;
        pointF.setX(labelx+(labelWidth/7+(labelWidth/4)*(i*2))/2);
        pointF.setY(labely+(labelHeight/1.5));
        //        qDebug()<<pointF;
        //        int randomx=qrand()%(chrs.length()-1);
        painter->drawText(pointF,textCode.at(i));
        //        textCode.append(textCode.at(i));

    }

    painter->end();
}
void login::getRandchar()
{

    textCode.clear();
    qsrand(QTime::currentTime().msec());
    int chrs_size = chrs.length();//字符集数组长度

    for(int i=0;i<4;i++)
    {
        int randomx=qrand()%(chrs_size-1);
        QString str =  chrs.at(randomx);
        textCode.append(str);
    }
    qDebug()<<textCode;
}

void login::paintEvent(QPaintEvent *e)
{
    paintDots();
    drawChars();
    //getRandchar();
}



//void login::on_btnChange_2_clicked()
//{
//    //
//    getRandchar();
//    this->update();
//}

//void login::on_btnVretifiy_clicked()
//{
//    if(textCode==ui->lineEdit->text())
//    {
//        QMessageBox::information(this,"right","验证码正确");
//        qDebug()<<"正确";
//    }else {
//        QMessageBox::information(this,"right","验证码错误");
//        qDebug()<<"错误";
//    }
//}


