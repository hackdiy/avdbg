/********************************************************************************
** Form generated from reading UI file 'dialogfunctions.ui'
**
** Created: Sat Sep 15 17:41:24 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFUNCTIONS_H
#define UI_DIALOGFUNCTIONS_H

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
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFunctions
{
public:
    QGridLayout *gridLayout;
    QLabel *lblRegions;
    QLabel *label;
    QLineEdit *txtSearch;
    QTableView *tableView;
    QLabel *lblResults;
    QTableWidget *tableWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogFunctions)
    {
        if (DialogFunctions->objectName().isEmpty())
            DialogFunctions->setObjectName(QString::fromUtf8("DialogFunctions"));
        DialogFunctions->resize(640, 520);
        gridLayout = new QGridLayout(DialogFunctions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblRegions = new QLabel(DialogFunctions);
        lblRegions->setObjectName(QString::fromUtf8("lblRegions"));

        gridLayout->addWidget(lblRegions, 0, 0, 1, 2);

        label = new QLabel(DialogFunctions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogFunctions);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        tableView = new QTableView(DialogFunctions);
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
        tableView->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        lblResults = new QLabel(DialogFunctions);
        lblResults->setObjectName(QString::fromUtf8("lblResults"));

        gridLayout->addWidget(lblResults, 3, 0, 1, 2);

        tableWidget = new QTableWidget(DialogFunctions);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 4, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogFunctions);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogFunctions);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogFunctions);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        progressBar = new QProgressBar(DialogFunctions);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 6, 0, 1, 2);

        QWidget::setTabOrder(tableView, tableWidget);
        QWidget::setTabOrder(tableWidget, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);
        QWidget::setTabOrder(btnFind, txtSearch);

        retranslateUi(DialogFunctions);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogFunctions, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogFunctions);
    } // setupUi

    void retranslateUi(QDialog *DialogFunctions)
    {
        DialogFunctions->setWindowTitle(QApplication::translate("DialogFunctions", "Function Finder", 0, QApplication::UnicodeUTF8));
        lblRegions->setText(QApplication::translate("DialogFunctions", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogFunctions", "Filter", 0, QApplication::UnicodeUTF8));
        lblResults->setText(QApplication::translate("DialogFunctions", "Results:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogFunctions", "Start Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogFunctions", "End Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogFunctions", "Size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogFunctions", "Score", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogFunctions", "Type", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("DialogFunctions", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("DialogFunctions", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("DialogFunctions", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogFunctions: public Ui_DialogFunctions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFUNCTIONS_H
