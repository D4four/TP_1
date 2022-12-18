/********************************************************************************
** Form generated from reading UI file 'spisok.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPISOK_H
#define UI_SPISOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Spisok
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *back;

    void setupUi(QDialog *Spisok)
    {
        if (Spisok->objectName().isEmpty())
            Spisok->setObjectName(QString::fromUtf8("Spisok"));
        Spisok->resize(400, 315);
        verticalLayout = new QVBoxLayout(Spisok);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Spisok);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMouseTracking(false);
        label->setTabletTracking(false);
        label->setScaledContents(false);

        verticalLayout->addWidget(label);

        back = new QPushButton(Spisok);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(Spisok);

        QMetaObject::connectSlotsByName(Spisok);
    } // setupUi

    void retranslateUi(QDialog *Spisok)
    {
        Spisok->setWindowTitle(QCoreApplication::translate("Spisok", "Dialog", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("Spisok", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Spisok: public Ui_Spisok {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPISOK_H
