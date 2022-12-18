/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *editEl;
    QPushButton *editB;
    QPushButton *back;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName(QString::fromUtf8("Edit"));
        Edit->resize(400, 107);
        verticalLayout = new QVBoxLayout(Edit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editEl = new QComboBox(Edit);
        editEl->addItem(QString());
        editEl->addItem(QString());
        editEl->addItem(QString());
        editEl->addItem(QString());
        editEl->setObjectName(QString::fromUtf8("editEl"));

        horizontalLayout->addWidget(editEl);

        editB = new QPushButton(Edit);
        editB->setObjectName(QString::fromUtf8("editB"));

        horizontalLayout->addWidget(editB);


        verticalLayout->addLayout(horizontalLayout);

        back = new QPushButton(Edit);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Dialog", nullptr));
        editEl->setItemText(0, QCoreApplication::translate("Edit", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        editEl->setItemText(1, QCoreApplication::translate("Edit", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        editEl->setItemText(2, QCoreApplication::translate("Edit", "\320\243\321\207\320\265\320\261\320\275\320\270\320\272\320\270", nullptr));
        editEl->setItemText(3, QCoreApplication::translate("Edit", "\320\232\320\260\320\275\321\206\320\265\320\273\321\217\321\200\320\270\321\217", nullptr));

        editB->setText(QCoreApplication::translate("Edit", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("Edit", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
