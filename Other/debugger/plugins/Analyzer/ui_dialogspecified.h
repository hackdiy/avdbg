/********************************************************************************
** Form generated from reading UI file 'dialogspecified.ui'
**
** Created: Sat Sep 15 17:40:48 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSPECIFIED_H
#define UI_DIALOGSPECIFIED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogSpecified
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *filter;
    QListView *function_list;
    QHBoxLayout *hboxLayout;
    QPushButton *close_button;
    QPushButton *help_button;
    QSpacerItem *spacerItem;
    QPushButton *refresh_button;

    void setupUi(QDialog *DialogSpecified)
    {
        if (DialogSpecified->objectName().isEmpty())
            DialogSpecified->setObjectName(QString::fromUtf8("DialogSpecified"));
        DialogSpecified->resize(455, 283);
        gridLayout = new QGridLayout(DialogSpecified);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogSpecified);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(DialogSpecified);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        filter = new QLineEdit(DialogSpecified);
        filter->setObjectName(QString::fromUtf8("filter"));

        gridLayout->addWidget(filter, 1, 1, 1, 1);

        function_list = new QListView(DialogSpecified);
        function_list->setObjectName(QString::fromUtf8("function_list"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        function_list->setFont(font);
        function_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        function_list->setProperty("showDropIndicator", QVariant(false));
        function_list->setAlternatingRowColors(true);

        gridLayout->addWidget(function_list, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        close_button = new QPushButton(DialogSpecified);
        close_button->setObjectName(QString::fromUtf8("close_button"));

        hboxLayout->addWidget(close_button);

        help_button = new QPushButton(DialogSpecified);
        help_button->setObjectName(QString::fromUtf8("help_button"));
        help_button->setEnabled(false);

        hboxLayout->addWidget(help_button);

        spacerItem = new QSpacerItem(361, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        refresh_button = new QPushButton(DialogSpecified);
        refresh_button->setObjectName(QString::fromUtf8("refresh_button"));

        hboxLayout->addWidget(refresh_button);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);


        retranslateUi(DialogSpecified);
        QObject::connect(close_button, SIGNAL(clicked()), DialogSpecified, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSpecified);
    } // setupUi

    void retranslateUi(QDialog *DialogSpecified)
    {
        DialogSpecified->setWindowTitle(QApplication::translate("DialogSpecified", "Specified Functions", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogSpecified", "Specified Functions", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogSpecified", "Filter", 0, QApplication::UnicodeUTF8));
        close_button->setText(QApplication::translate("DialogSpecified", "&Close", 0, QApplication::UnicodeUTF8));
        help_button->setText(QApplication::translate("DialogSpecified", "&Help", 0, QApplication::UnicodeUTF8));
        refresh_button->setText(QApplication::translate("DialogSpecified", "&Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSpecified: public Ui_DialogSpecified {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSPECIFIED_H
