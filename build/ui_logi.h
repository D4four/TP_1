/********************************************************************************
** Form generated from reading UI file 'logi.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGI_H
#define UI_LOGI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Logi
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *back;

    void setupUi(QDialog *Logi)
    {
        if (Logi->objectName().isEmpty())
            Logi->setObjectName(QString::fromUtf8("Logi"));
        Logi->resize(400, 315);
        verticalLayout = new QVBoxLayout(Logi);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Logi);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        back = new QPushButton(Logi);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(Logi);

        QMetaObject::connectSlotsByName(Logi);
    } // setupUi

    void retranslateUi(QDialog *Logi)
    {
        Logi->setWindowTitle(QCoreApplication::translate("Logi", "Dialog", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("Logi", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logi: public Ui_Logi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGI_H
