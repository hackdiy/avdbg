/********************************************************************************
** Form generated from reading UI file 'dialogstrings.ui'
**
** Created: Sat Sep 15 17:41:44 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTRINGS_H
#define UI_DIALOGSTRINGS_H

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
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogStrings
{
public:
    QGridLayout *gridLayout;
    QLabel *lblRegions;
    QLabel *label;
    QLineEdit *txtSearch;
    QTableView *tableView;
    QLabel *lblResults;
    QListWidget *listWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogStrings)
    {
        if (DialogStrings->objectName().isEmpty())
            DialogStrings->setObjectName(QString::fromUtf8("DialogStrings"));
        DialogStrings->resize(562, 459);
        gridLayout = new QGridLayout(DialogStrings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblRegions = new QLabel(DialogStrings);
        lblRegions->setObjectName(QString::fromUtf8("lblRegions"));

        gridLayout->addWidget(lblRegions, 0, 0, 1, 2);

        label = new QLabel(DialogStrings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogStrings);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        tableView = new QTableView(DialogStrings);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        lblResults = new QLabel(DialogStrings);
        lblResults->setObjectName(QString::fromUtf8("lblResults"));

        gridLayout->addWidget(lblResults, 3, 0, 1, 1);

        listWidget = new QListWidget(DialogStrings);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 4, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogStrings);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogStrings);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogStrings);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        progressBar = new QProgressBar(DialogStrings);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 6, 0, 1, 2);


        retranslateUi(DialogStrings);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogStrings, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogStrings);
    } // setupUi

    void retranslateUi(QDialog *DialogStrings)
    {
        DialogStrings->setWindowTitle(QApplication::translate("DialogStrings", "String Search", 0, QApplication::UnicodeUTF8));
        lblRegions->setText(QApplication::translate("DialogStrings", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogStrings", "Filter", 0, QApplication::UnicodeUTF8));
        lblResults->setText(QApplication::translate("DialogStrings", "Results:", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("DialogStrings", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("DialogStrings", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("DialogStrings", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogStrings: public Ui_DialogStrings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTRINGS_H
