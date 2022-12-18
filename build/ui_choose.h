/********************************************************************************
** Form generated from reading UI file 'choose.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Choose
{
public:
    QGridLayout *gridLayout;
    QPushButton *back;
    QPushButton *edit;
    QPushButton *create;
    QPushButton *open;
    QPushButton *logi;
    QPushButton *spisok;

    void setupUi(QDialog *Choose)
    {
        if (Choose->objectName().isEmpty())
            Choose->setObjectName(QString::fromUtf8("Choose"));
        Choose->resize(417, 137);
        gridLayout = new QGridLayout(Choose);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        back = new QPushButton(Choose);
        back->setObjectName(QString::fromUtf8("back"));

        gridLayout->addWidget(back, 0, 2, 1, 1);

        edit = new QPushButton(Choose);
        edit->setObjectName(QString::fromUtf8("edit"));

        gridLayout->addWidget(edit, 0, 4, 1, 1);

        create = new QPushButton(Choose);
        create->setObjectName(QString::fromUtf8("create"));

        gridLayout->addWidget(create, 0, 5, 1, 1);

        open = new QPushButton(Choose);
        open->setObjectName(QString::fromUtf8("open"));

        gridLayout->addWidget(open, 0, 3, 1, 1);

        logi = new QPushButton(Choose);
        logi->setObjectName(QString::fromUtf8("logi"));

        gridLayout->addWidget(logi, 1, 4, 1, 1);

        spisok = new QPushButton(Choose);
        spisok->setObjectName(QString::fromUtf8("spisok"));

        gridLayout->addWidget(spisok, 1, 3, 1, 1);


        retranslateUi(Choose);

        QMetaObject::connectSlotsByName(Choose);
    } // setupUi

    void retranslateUi(QDialog *Choose)
    {
        Choose->setWindowTitle(QCoreApplication::translate("Choose", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("Choose", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        edit->setText(QCoreApplication::translate("Choose", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        create->setText(QCoreApplication::translate("Choose", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        open->setText(QCoreApplication::translate("Choose", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        logi->setText(QCoreApplication::translate("Choose", "\320\233\320\276\320\263\320\270", nullptr));
        spisok->setText(QCoreApplication::translate("Choose", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
