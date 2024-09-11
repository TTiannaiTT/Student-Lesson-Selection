/********************************************************************************
** Form generated from reading UI file 'mustlesson.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSTLESSON_H
#define UI_MUSTLESSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mustLesson
{
public:
    QTableWidget *tableWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *mustLesson)
    {
        if (mustLesson->objectName().isEmpty())
            mustLesson->setObjectName(QString::fromUtf8("mustLesson"));
        mustLesson->resize(920, 700);
        tableWidget = new QTableWidget(mustLesson);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(35, 21, 861, 581));
        horizontalLayoutWidget = new QWidget(mustLesson);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(250, 600, 431, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(mustLesson);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 630, 121, 31));

        retranslateUi(mustLesson);

        QMetaObject::connectSlotsByName(mustLesson);
    } // setupUi

    void retranslateUi(QWidget *mustLesson)
    {
        mustLesson->setWindowTitle(QApplication::translate("mustLesson", "Form", nullptr));
        pushButton->setText(QApplication::translate("mustLesson", "\351\200\211\350\257\276", nullptr));
        pushButton_2->setText(QApplication::translate("mustLesson", "\351\200\200\351\200\211", nullptr));
        pushButton_3->setText(QApplication::translate("mustLesson", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mustLesson: public Ui_mustLesson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSTLESSON_H
