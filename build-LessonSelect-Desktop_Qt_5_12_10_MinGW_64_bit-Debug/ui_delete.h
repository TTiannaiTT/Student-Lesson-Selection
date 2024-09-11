/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *delete)
    {
        if (delete->objectName().isEmpty())
            delete->setObjectName(QString::fromUtf8("delete"));
        delete->resize(400, 300);
        horizontalLayoutWidget = new QWidget(delete);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 110, 171, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(delete);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 210, 91, 21));
        pushButton_2 = new QPushButton(delete);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 250, 81, 21));

        retranslateUi(delete);

        QMetaObject::connectSlotsByName(delete);
    } // setupUi

    void retranslateUi(QWidget *delete)
    {
        delete->setWindowTitle(QApplication::translate("delete", "Form", nullptr));
        label->setText(QApplication::translate("delete", "\345\255\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("delete", "\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QApplication::translate("delete", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete: public Ui_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
