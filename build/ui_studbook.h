/********************************************************************************
** Form generated from reading UI file 'studbook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDBOOK_H
#define UI_STUDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudBook
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *author;
    QLabel *label_3;
    QLineEdit *yearPubl;
    QLabel *label_4;
    QLineEdit *educ;
    QLabel *label_5;
    QLineEdit *yearEduc;
    QLabel *label_6;
    QLineEdit *pages;
    QLabel *label_7;
    QLineEdit *price;
    QPushButton *createItem;
    QPushButton *back;

    void setupUi(QDialog *StudBook)
    {
        if (StudBook->objectName().isEmpty())
            StudBook->setObjectName(QString::fromUtf8("StudBook"));
        StudBook->resize(313, 459);
        verticalLayout = new QVBoxLayout(StudBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(StudBook);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        name = new QLineEdit(StudBook);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        label_2 = new QLabel(StudBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        author = new QLineEdit(StudBook);
        author->setObjectName(QString::fromUtf8("author"));

        verticalLayout->addWidget(author);

        label_3 = new QLabel(StudBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        yearPubl = new QLineEdit(StudBook);
        yearPubl->setObjectName(QString::fromUtf8("yearPubl"));

        verticalLayout->addWidget(yearPubl);

        label_4 = new QLabel(StudBook);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        educ = new QLineEdit(StudBook);
        educ->setObjectName(QString::fromUtf8("educ"));

        verticalLayout->addWidget(educ);

        label_5 = new QLabel(StudBook);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        yearEduc = new QLineEdit(StudBook);
        yearEduc->setObjectName(QString::fromUtf8("yearEduc"));

        verticalLayout->addWidget(yearEduc);

        label_6 = new QLabel(StudBook);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        pages = new QLineEdit(StudBook);
        pages->setObjectName(QString::fromUtf8("pages"));

        verticalLayout->addWidget(pages);

        label_7 = new QLabel(StudBook);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        price = new QLineEdit(StudBook);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);

        createItem = new QPushButton(StudBook);
        createItem->setObjectName(QString::fromUtf8("createItem"));

        verticalLayout->addWidget(createItem);

        back = new QPushButton(StudBook);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(StudBook);

        QMetaObject::connectSlotsByName(StudBook);
    } // setupUi

    void retranslateUi(QDialog *StudBook)
    {
        StudBook->setWindowTitle(QCoreApplication::translate("StudBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StudBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("StudBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("StudBook", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("StudBook", "\320\243\321\207. \320\267\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("StudBook", "\320\223\320\276\320\264 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("StudBook", "\320\236\320\261\321\212\320\265\320\274 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        label_7->setText(QCoreApplication::translate("StudBook", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        createItem->setText(QCoreApplication::translate("StudBook", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("StudBook", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudBook: public Ui_StudBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDBOOK_H
