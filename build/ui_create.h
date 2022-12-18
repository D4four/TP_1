/********************************************************************************
** Form generated from reading UI file 'create.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_H
#define UI_CREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Create
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *choose;
    QPushButton *create;
    QPushButton *back;

    void setupUi(QDialog *Create)
    {
        if (Create->objectName().isEmpty())
            Create->setObjectName(QString::fromUtf8("Create"));
        Create->resize(247, 157);
        verticalLayout = new QVBoxLayout(Create);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        choose = new QComboBox(Create);
        choose->addItem(QString());
        choose->addItem(QString());
        choose->addItem(QString());
        choose->setObjectName(QString::fromUtf8("choose"));

        verticalLayout->addWidget(choose);

        create = new QPushButton(Create);
        create->setObjectName(QString::fromUtf8("create"));

        verticalLayout->addWidget(create);

        back = new QPushButton(Create);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(Create);

        QMetaObject::connectSlotsByName(Create);
    } // setupUi

    void retranslateUi(QDialog *Create)
    {
        Create->setWindowTitle(QCoreApplication::translate("Create", "Dialog", nullptr));
        choose->setItemText(0, QCoreApplication::translate("Create", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        choose->setItemText(1, QCoreApplication::translate("Create", "\320\243\321\207\320\265\320\261\320\275\320\270\320\272\320\270", nullptr));
        choose->setItemText(2, QCoreApplication::translate("Create", "\320\232\320\260\320\275\321\206\320\265\320\273\321\217\321\200\320\270\321\217", nullptr));

        create->setText(QCoreApplication::translate("Create", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("Create", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create: public Ui_Create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_H
