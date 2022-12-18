/********************************************************************************
** Form generated from reading UI file 'editstudbook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTUDBOOK_H
#define UI_EDITSTUDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditStudBook
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *editName;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *auth;
    QLabel *label_3;
    QLineEdit *yearPubl;
    QLabel *label_4;
    QLineEdit *studHome;
    QLabel *label_5;
    QLineEdit *yearStud;
    QLabel *label_7;
    QLineEdit *pages;
    QLabel *label_6;
    QLineEdit *price;
    QPushButton *save;
    QPushButton *pushButton;
    QPushButton *back;

    void setupUi(QDialog *EditStudBook)
    {
        if (EditStudBook->objectName().isEmpty())
            EditStudBook->setObjectName(QString::fromUtf8("EditStudBook"));
        EditStudBook->resize(325, 463);
        verticalLayout = new QVBoxLayout(EditStudBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editName = new QComboBox(EditStudBook);
        editName->setObjectName(QString::fromUtf8("editName"));

        verticalLayout->addWidget(editName);

        label = new QLabel(EditStudBook);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        name = new QLineEdit(EditStudBook);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        label_2 = new QLabel(EditStudBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        auth = new QLineEdit(EditStudBook);
        auth->setObjectName(QString::fromUtf8("auth"));

        verticalLayout->addWidget(auth);

        label_3 = new QLabel(EditStudBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        yearPubl = new QLineEdit(EditStudBook);
        yearPubl->setObjectName(QString::fromUtf8("yearPubl"));

        verticalLayout->addWidget(yearPubl);

        label_4 = new QLabel(EditStudBook);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        studHome = new QLineEdit(EditStudBook);
        studHome->setObjectName(QString::fromUtf8("studHome"));

        verticalLayout->addWidget(studHome);

        label_5 = new QLabel(EditStudBook);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        yearStud = new QLineEdit(EditStudBook);
        yearStud->setObjectName(QString::fromUtf8("yearStud"));

        verticalLayout->addWidget(yearStud);

        label_7 = new QLabel(EditStudBook);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        pages = new QLineEdit(EditStudBook);
        pages->setObjectName(QString::fromUtf8("pages"));

        verticalLayout->addWidget(pages);

        label_6 = new QLabel(EditStudBook);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        price = new QLineEdit(EditStudBook);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);

        save = new QPushButton(EditStudBook);
        save->setObjectName(QString::fromUtf8("save"));

        verticalLayout->addWidget(save);

        pushButton = new QPushButton(EditStudBook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        back = new QPushButton(EditStudBook);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(EditStudBook);

        QMetaObject::connectSlotsByName(EditStudBook);
    } // setupUi

    void retranslateUi(QDialog *EditStudBook)
    {
        EditStudBook->setWindowTitle(QCoreApplication::translate("EditStudBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditStudBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("EditStudBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("EditStudBook", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("EditStudBook", "\320\243\321\207. \320\267\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("EditStudBook", "\320\223\320\276\320\264 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("EditStudBook", "\320\236\320\261\321\212\320\265\320\274 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        label_6->setText(QCoreApplication::translate("EditStudBook", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        save->setText(QCoreApplication::translate("EditStudBook", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("EditStudBook", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("EditStudBook", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStudBook: public Ui_EditStudBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTUDBOOK_H
