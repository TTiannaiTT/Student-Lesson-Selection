/********************************************************************************
** Form generated from reading UI file 'lessonrank.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LESSONRANK_H
#define UI_LESSONRANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lessonrank
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *lessonrank)
    {
        if (lessonrank->objectName().isEmpty())
            lessonrank->setObjectName(QString::fromUtf8("lessonrank"));
        lessonrank->resize(603, 400);
        pushButton = new QPushButton(lessonrank);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 350, 91, 31));
        tableWidget = new QTableWidget(lessonrank);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 581, 281));
        radioButton = new QRadioButton(lessonrank);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(90, 30, 91, 18));
        radioButton_2 = new QRadioButton(lessonrank);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 30, 111, 18));
        radioButton_3 = new QRadioButton(lessonrank);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(400, 30, 91, 18));
        pushButton_2 = new QPushButton(lessonrank);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 350, 91, 31));

        retranslateUi(lessonrank);

        QMetaObject::connectSlotsByName(lessonrank);
    } // setupUi

    void retranslateUi(QWidget *lessonrank)
    {
        lessonrank->setWindowTitle(QApplication::translate("lessonrank", "\350\257\276\347\250\213\345\255\246\347\224\237\346\216\222\345\220\215", nullptr));
        pushButton->setText(QApplication::translate("lessonrank", "\350\277\224\345\233\236", nullptr));
        radioButton->setText(QApplication::translate("lessonrank", "C++", nullptr));
        radioButton_2->setText(QApplication::translate("lessonrank", "Calculus", nullptr));
        radioButton_3->setText(QApplication::translate("lessonrank", "English", nullptr));
        pushButton_2->setText(QApplication::translate("lessonrank", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lessonrank: public Ui_lessonrank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LESSONRANK_H
