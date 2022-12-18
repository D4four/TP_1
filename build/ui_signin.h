/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *name;
    QLineEdit *pass;
    QVBoxLayout *verticalLayout_3;
    QPushButton *signin;
    QPushButton *back;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(304, 165);
        verticalLayout_4 = new QVBoxLayout(SignIn);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(SignIn);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(SignIn);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name = new QLineEdit(SignIn);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        pass = new QLineEdit(SignIn);
        pass->setObjectName(QString::fromUtf8("pass"));

        verticalLayout->addWidget(pass);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        signin = new QPushButton(SignIn);
        signin->setObjectName(QString::fromUtf8("signin"));

        verticalLayout_3->addWidget(signin);

        back = new QPushButton(SignIn);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout_3->addWidget(back);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignIn", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("SignIn", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        signin->setText(QCoreApplication::translate("SignIn", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("SignIn", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
