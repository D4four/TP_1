/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *author;
    QLabel *label_3;
    QLineEdit *yearB;
    QLabel *label_4;
    QLineEdit *annot;
    QLabel *label_5;
    QLineEdit *genre;
    QLabel *label_6;
    QLineEdit *pages;
    QLabel *label_7;
    QLineEdit *price;
    QPushButton *createItem;
    QPushButton *back;

    void setupUi(QDialog *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName(QString::fromUtf8("Book"));
        Book->resize(254, 422);
        verticalLayout = new QVBoxLayout(Book);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Book);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        name = new QLineEdit(Book);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        label_2 = new QLabel(Book);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        author = new QLineEdit(Book);
        author->setObjectName(QString::fromUtf8("author"));

        verticalLayout->addWidget(author);

        label_3 = new QLabel(Book);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        yearB = new QLineEdit(Book);
        yearB->setObjectName(QString::fromUtf8("yearB"));

        verticalLayout->addWidget(yearB);

        label_4 = new QLabel(Book);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        annot = new QLineEdit(Book);
        annot->setObjectName(QString::fromUtf8("annot"));

        verticalLayout->addWidget(annot);

        label_5 = new QLabel(Book);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        genre = new QLineEdit(Book);
        genre->setObjectName(QString::fromUtf8("genre"));

        verticalLayout->addWidget(genre);

        label_6 = new QLabel(Book);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        pages = new QLineEdit(Book);
        pages->setObjectName(QString::fromUtf8("pages"));

        verticalLayout->addWidget(pages);

        label_7 = new QLabel(Book);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        price = new QLineEdit(Book);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);

        createItem = new QPushButton(Book);
        createItem->setObjectName(QString::fromUtf8("createItem"));

        verticalLayout->addWidget(createItem);

        back = new QPushButton(Book);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QDialog *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("Book", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("Book", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Book", "\320\220\320\275\320\276\321\202\320\260\321\206\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("Book", "\320\226\320\260\320\275\321\200", nullptr));
        label_6->setText(QCoreApplication::translate("Book", "\320\236\320\261\321\212\320\265\320\274 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        label_7->setText(QCoreApplication::translate("Book", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        createItem->setText(QCoreApplication::translate("Book", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("Book", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
