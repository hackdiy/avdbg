/********************************************************************************
** Form generated from reading UI file 'dialog_threads.ui'
**
** Created: Sat Sep 15 17:39:59 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_THREADS_H
#define UI_DIALOG_THREADS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogThreads
{
public:
    QGridLayout *gridLayout;
    QTableWidget *thread_table;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *DialogThreads)
    {
        if (DialogThreads->objectName().isEmpty())
            DialogThreads->setObjectName(QString::fromUtf8("DialogThreads"));
        DialogThreads->resize(528, 236);
        gridLayout = new QGridLayout(DialogThreads);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        thread_table = new QTableWidget(DialogThreads);
        if (thread_table->columnCount() < 1)
            thread_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        thread_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        thread_table->setObjectName(QString::fromUtf8("thread_table"));
        thread_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        thread_table->setAlternatingRowColors(true);
        thread_table->setSelectionMode(QAbstractItemView::SingleSelection);
        thread_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        thread_table->setSortingEnabled(true);
        thread_table->horizontalHeader()->setStretchLastSection(true);
        thread_table->verticalHeader()->setVisible(false);

        gridLayout->addWidget(thread_table, 0, 0, 1, 1);

        button_box = new QDialogButtonBox(DialogThreads);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_box, 1, 0, 1, 1);


        retranslateUi(DialogThreads);
        QObject::connect(button_box, SIGNAL(accepted()), DialogThreads, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), DialogThreads, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogThreads);
    } // setupUi

    void retranslateUi(QDialog *DialogThreads)
    {
        DialogThreads->setWindowTitle(QApplication::translate("DialogThreads", "Threads", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = thread_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogThreads", "Thread ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogThreads: public Ui_DialogThreads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_THREADS_H
