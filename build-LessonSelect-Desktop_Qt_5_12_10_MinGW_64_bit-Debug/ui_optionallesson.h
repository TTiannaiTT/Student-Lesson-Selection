/********************************************************************************
** Form generated from reading UI file 'optionallesson.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONALLESSON_H
#define UI_OPTIONALLESSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_optionalLesson
{
public:
    QTableWidget *tableWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;

    void setupUi(QWidget *optionalLesson)
    {
        if (optionalLesson->objectName().isEmpty())
            optionalLesson->setObjectName(QString::fromUtf8("optionalLesson"));
        optionalLesson->resize(920, 700);
        tableWidget = new QTableWidget(optionalLesson);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(35, 11, 861, 581));
        horizontalLayoutWidget = new QWidget(optionalLesson);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(310, 600, 431, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        pushButton_3->setFont(font);

        horizontalLayout_2->addWidget(pushButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_2);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        horizontalLayout_2->addWidget(pushButton_4);


        retranslateUi(optionalLesson);

        QMetaObject::connectSlotsByName(optionalLesson);
    } // setupUi

    void retranslateUi(QWidget *optionalLesson)
    {
        optionalLesson->setWindowTitle(QApplication::translate("optionalLesson", "Form", nullptr));
        pushButton_3->setText(QApplication::translate("optionalLesson", "\351\200\211\350\257\276", nullptr));
        pushButton_4->setText(QApplication::translate("optionalLesson", "\351\200\200\351\200\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class optionalLesson: public Ui_optionalLesson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONALLESSON_H
