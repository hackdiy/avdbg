/********************************************************************************
** Form generated from reading UI file 'dialogenvironment.ui'
**
** Created: Sat Sep 15 17:41:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGENVIRONMENT_H
#define UI_DIALOGENVIRONMENT_H

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

class Ui_DialogEnvironment
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtSearch;
    QListView *listView;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnRefresh;

    void setupUi(QDialog *DialogEnvironment)
    {
        if (DialogEnvironment->objectName().isEmpty())
            DialogEnvironment->setObjectName(QString::fromUtf8("DialogEnvironment"));
        DialogEnvironment->resize(652, 521);
        gridLayout = new QGridLayout(DialogEnvironment);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogEnvironment);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(DialogEnvironment);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogEnvironment);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        listView = new QListView(DialogEnvironment);
        listView->setObjectName(QString::fromUtf8("listView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setAlternatingRowColors(true);

        gridLayout->addWidget(listView, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogEnvironment);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogEnvironment);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(361, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnRefresh = new QPushButton(DialogEnvironment);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        hboxLayout->addWidget(btnRefresh);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);


        retranslateUi(DialogEnvironment);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogEnvironment, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogEnvironment);
    } // setupUi

    void retranslateUi(QDialog *DialogEnvironment)
    {
        DialogEnvironment->setWindowTitle(QApplication::translate("DialogEnvironment", "Environment", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogEnvironment", "Environment Variables:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogEnvironment", "Filter", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("DialogEnvironment", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("DialogEnvironment", "&Help", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("DialogEnvironment", "&Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogEnvironment: public Ui_DialogEnvironment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGENVIRONMENT_H
