/********************************************************************************
** Form generated from reading UI file 'editoffice.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOFFICE_H
#define UI_EDITOFFICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditOffice
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *editName;
    QLabel *label;
    QLineEdit *type;
    QLabel *label_2;
    QLineEdit *color;
    QLabel *label_3;
    QLineEdit *use;
    QLabel *label_4;
    QLineEdit *price;
    QPushButton *create;
    QPushButton *del;
    QPushButton *back;

    void setupUi(QDialog *EditOffice)
    {
        if (EditOffice->objectName().isEmpty())
            EditOffice->setObjectName(QString::fromUtf8("EditOffice"));
        EditOffice->resize(246, 330);
        verticalLayout = new QVBoxLayout(EditOffice);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editName = new QComboBox(EditOffice);
        editName->setObjectName(QString::fromUtf8("editName"));

        verticalLayout->addWidget(editName);

        label = new QLabel(EditOffice);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        type = new QLineEdit(EditOffice);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout->addWidget(type);

        label_2 = new QLabel(EditOffice);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        color = new QLineEdit(EditOffice);
        color->setObjectName(QString::fromUtf8("color"));

        verticalLayout->addWidget(color);

        label_3 = new QLabel(EditOffice);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        use = new QLineEdit(EditOffice);
        use->setObjectName(QString::fromUtf8("use"));

        verticalLayout->addWidget(use);

        label_4 = new QLabel(EditOffice);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        price = new QLineEdit(EditOffice);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);

        create = new QPushButton(EditOffice);
        create->setObjectName(QString::fromUtf8("create"));

        verticalLayout->addWidget(create);

        del = new QPushButton(EditOffice);
        del->setObjectName(QString::fromUtf8("del"));

        verticalLayout->addWidget(del);

        back = new QPushButton(EditOffice);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(EditOffice);

        QMetaObject::connectSlotsByName(EditOffice);
    } // setupUi

    void retranslateUi(QDialog *EditOffice)
    {
        EditOffice->setWindowTitle(QCoreApplication::translate("EditOffice", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditOffice", "\320\242\320\270\320\277 \320\272\320\260\320\275\321\206\320\265\320\273\321\217\321\200\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("EditOffice", "\320\246\320\262\320\265\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("EditOffice", "\320\235\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("EditOffice", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        create->setText(QCoreApplication::translate("EditOffice", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        del->setText(QCoreApplication::translate("EditOffice", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("EditOffice", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditOffice: public Ui_EditOffice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOFFICE_H
