/********************************************************************************
** Form generated from reading UI file 'editbook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOK_H
#define UI_EDITBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditBook
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *nameEdit;
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
    QPushButton *save;
    QPushButton *del;
    QPushButton *back;

    void setupUi(QDialog *EditBook)
    {
        if (EditBook->objectName().isEmpty())
            EditBook->setObjectName(QString::fromUtf8("EditBook"));
        EditBook->resize(315, 480);
        verticalLayout = new QVBoxLayout(EditBook);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameEdit = new QComboBox(EditBook);
        nameEdit->addItem(QString());
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout->addWidget(nameEdit);

        label = new QLabel(EditBook);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        name = new QLineEdit(EditBook);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        label_2 = new QLabel(EditBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        author = new QLineEdit(EditBook);
        author->setObjectName(QString::fromUtf8("author"));

        verticalLayout->addWidget(author);

        label_3 = new QLabel(EditBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        yearB = new QLineEdit(EditBook);
        yearB->setObjectName(QString::fromUtf8("yearB"));

        verticalLayout->addWidget(yearB);

        label_4 = new QLabel(EditBook);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        annot = new QLineEdit(EditBook);
        annot->setObjectName(QString::fromUtf8("annot"));

        verticalLayout->addWidget(annot);

        label_5 = new QLabel(EditBook);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        genre = new QLineEdit(EditBook);
        genre->setObjectName(QString::fromUtf8("genre"));

        verticalLayout->addWidget(genre);

        label_6 = new QLabel(EditBook);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        pages = new QLineEdit(EditBook);
        pages->setObjectName(QString::fromUtf8("pages"));

        verticalLayout->addWidget(pages);

        label_7 = new QLabel(EditBook);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        price = new QLineEdit(EditBook);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);

        save = new QPushButton(EditBook);
        save->setObjectName(QString::fromUtf8("save"));

        verticalLayout->addWidget(save);

        del = new QPushButton(EditBook);
        del->setObjectName(QString::fromUtf8("del"));

        verticalLayout->addWidget(del);

        back = new QPushButton(EditBook);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(EditBook);

        QMetaObject::connectSlotsByName(EditBook);
    } // setupUi

    void retranslateUi(QDialog *EditBook)
    {
        EditBook->setWindowTitle(QCoreApplication::translate("EditBook", "Dialog", nullptr));
        nameEdit->setItemText(0, QCoreApplication::translate("EditBook", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));

        label->setText(QCoreApplication::translate("EditBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("EditBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("EditBook", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("EditBook", "\320\220\320\275\320\276\321\202\320\260\321\206\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("EditBook", "\320\226\320\260\320\275\321\200", nullptr));
        label_6->setText(QCoreApplication::translate("EditBook", "\320\236\320\261\321\212\320\265\320\274 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        label_7->setText(QCoreApplication::translate("EditBook", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        save->setText(QCoreApplication::translate("EditBook", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        del->setText(QCoreApplication::translate("EditBook", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("EditBook", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditBook: public Ui_EditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOK_H
