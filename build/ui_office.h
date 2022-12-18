/********************************************************************************
** Form generated from reading UI file 'office.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFICE_H
#define UI_OFFICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Office
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *type;
    QLabel *label_2;
    QLineEdit *color;
    QLabel *label_3;
    QLineEdit *use;
    QLabel *label_4;
    QLineEdit *price;
    QPushButton *createItem;
    QPushButton *back;

    void setupUi(QDialog *Office)
    {
        if (Office->objectName().isEmpty())
            Office->setObjectName(QString::fromUtf8("Office"));
        Office->resize(246, 300);
        verticalLayout = new QVBoxLayout(Office);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Office);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        type = new QLineEdit(Office);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout->addWidget(type);

        label_2 = new QLabel(Office);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        color = new QLineEdit(Office);
        color->setObjectName(QString::fromUtf8("color"));

        verticalLayout->addWidget(color);

        label_3 = new QLabel(Office);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        use = new QLineEdit(Office);
        use->setObjectName(QString::fromUtf8("use"));

        verticalLayout->addWidget(use);

        label_4 = new QLabel(Office);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        price = new QLineEdit(Office);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout->addWidget(price);

        createItem = new QPushButton(Office);
        createItem->setObjectName(QString::fromUtf8("createItem"));

        verticalLayout->addWidget(createItem);

        back = new QPushButton(Office);
        back->setObjectName(QString::fromUtf8("back"));

        verticalLayout->addWidget(back);


        retranslateUi(Office);

        QMetaObject::connectSlotsByName(Office);
    } // setupUi

    void retranslateUi(QDialog *Office)
    {
        Office->setWindowTitle(QCoreApplication::translate("Office", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Office", "\320\242\320\270\320\277 \320\272\320\260\320\275\321\206\320\265\320\273\321\217\321\200\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("Office", "\320\246\320\262\320\265\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("Office", "\320\235\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("Office", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        createItem->setText(QCoreApplication::translate("Office", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        back->setText(QCoreApplication::translate("Office", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Office: public Ui_Office {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFICE_H
