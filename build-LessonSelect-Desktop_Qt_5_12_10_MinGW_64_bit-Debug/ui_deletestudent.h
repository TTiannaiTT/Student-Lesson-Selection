/********************************************************************************
** Form generated from reading UI file 'deletestudent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESTUDENT_H
#define UI_DELETESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletestudent
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *deletestudent)
    {
        if (deletestudent->objectName().isEmpty())
            deletestudent->setObjectName(QString::fromUtf8("deletestudent"));
        deletestudent->resize(400, 300);
        horizontalLayoutWidget = new QWidget(deletestudent);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 100, 191, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(deletestudent);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 209, 91, 31));
        pushButton_2 = new QPushButton(deletestudent);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(299, 239, 91, 31));

        retranslateUi(deletestudent);

        QMetaObject::connectSlotsByName(deletestudent);
    } // setupUi

    void retranslateUi(QWidget *deletestudent)
    {
        deletestudent->setWindowTitle(QApplication::translate("deletestudent", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        label->setText(QApplication::translate("deletestudent", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("deletestudent", "\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QApplication::translate("deletestudent", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletestudent: public Ui_deletestudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESTUDENT_H
