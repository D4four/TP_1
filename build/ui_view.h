/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QPushButton *back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *categories;
    QComboBox *item;
    QLabel *label;

    void setupUi(QDialog *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(400, 362);
        back = new QPushButton(View);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(9, 329, 381, 24));
        layoutWidget = new QWidget(View);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 381, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        categories = new QComboBox(layoutWidget);
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->addItem(QString());
        categories->setObjectName(QString::fromUtf8("categories"));

        horizontalLayout->addWidget(categories);

        item = new QComboBox(layoutWidget);
        item->addItem(QString());
        item->setObjectName(QString::fromUtf8("item"));

        horizontalLayout->addWidget(item);

        label = new QLabel(View);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 361, 251));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QDialog *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("View", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        categories->setItemText(0, QCoreApplication::translate("View", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265", nullptr));
        categories->setItemText(1, QCoreApplication::translate("View", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        categories->setItemText(2, QCoreApplication::translate("View", "\320\243\321\207\320\265\320\261\320\275\320\270\320\272\320\270", nullptr));
        categories->setItemText(3, QCoreApplication::translate("View", "\320\232\320\260\320\275\321\206\320\265\320\273\321\217\321\200\320\270\321\217", nullptr));

        item->setItemText(0, QCoreApplication::translate("View", "...", nullptr));

        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
