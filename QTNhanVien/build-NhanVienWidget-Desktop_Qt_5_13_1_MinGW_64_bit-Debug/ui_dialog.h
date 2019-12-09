/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *txtName;
    QLineEdit *txtBirthday;
    QLineEdit *txtGender;
    QLineEdit *txtCoefficient;
    QLineEdit *txtBasicSalary;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOke;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        Dialog->setFont(font);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 0, 261, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txtName = new QLineEdit(layoutWidget);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        verticalLayout->addWidget(txtName);

        txtBirthday = new QLineEdit(layoutWidget);
        txtBirthday->setObjectName(QString::fromUtf8("txtBirthday"));

        verticalLayout->addWidget(txtBirthday);

        txtGender = new QLineEdit(layoutWidget);
        txtGender->setObjectName(QString::fromUtf8("txtGender"));

        verticalLayout->addWidget(txtGender);

        txtCoefficient = new QLineEdit(layoutWidget);
        txtCoefficient->setObjectName(QString::fromUtf8("txtCoefficient"));

        verticalLayout->addWidget(txtCoefficient);

        txtBasicSalary = new QLineEdit(layoutWidget);
        txtBasicSalary->setObjectName(QString::fromUtf8("txtBasicSalary"));

        verticalLayout->addWidget(txtBasicSalary);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 73, 221));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 240, 158, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOke = new QPushButton(widget);
        btnOke->setObjectName(QString::fromUtf8("btnOke"));

        horizontalLayout->addWidget(btnOke);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Birth Day", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Gender", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Coefficient", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Base Salary", nullptr));
        btnOke->setText(QCoreApplication::translate("Dialog", "Oke", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
