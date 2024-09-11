/********************************************************************************
** Form generated from reading UI file 'lessonchoose.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LESSONCHOOSE_H
#define UI_LESSONCHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lessonChoose
{
public:
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *lessonChoose)
    {
        if (lessonChoose->objectName().isEmpty())
            lessonChoose->setObjectName(QString::fromUtf8("lessonChoose"));
        lessonChoose->resize(1200, 800);
        pushButton_2 = new QPushButton(lessonChoose);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1000, 720, 141, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        pushButton_2->setFont(font);
        stackedWidget = new QStackedWidget(lessonChoose);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(239, 9, 920, 700));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        verticalLayoutWidget = new QWidget(lessonChoose);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 250, 160, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        font1.setUnderline(true);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(lessonChoose);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(lessonChoose);
    } // setupUi

    void retranslateUi(QWidget *lessonChoose)
    {
        lessonChoose->setWindowTitle(QApplication::translate("lessonChoose", "\345\255\246\347\224\237\351\200\211\350\257\276", nullptr));
        pushButton_2->setText(QApplication::translate("lessonChoose", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QApplication::translate("lessonChoose", "\345\277\205\344\277\256\350\257\276", nullptr));
        pushButton_3->setText(QApplication::translate("lessonChoose", "\351\200\211\344\277\256\350\257\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lessonChoose: public Ui_lessonChoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LESSONCHOOSE_H
