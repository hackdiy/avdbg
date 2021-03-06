/********************************************************************************
** Form generated from reading UI file 'dialogrop.ui'
**
** Created: Sat Sep 15 17:41:35 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGROP_H
#define UI_DIALOGROP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogROPTool
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtSearch;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkShowALU;
    QCheckBox *chkShowStack;
    QCheckBox *chkShowLogic;
    QCheckBox *chkShowData;
    QCheckBox *chkShowOther;
    QTableView *tableView;
    QCheckBox *checkUnique;
    QLabel *label_2;
    QListView *listView;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogROPTool)
    {
        if (DialogROPTool->objectName().isEmpty())
            DialogROPTool->setObjectName(QString::fromUtf8("DialogROPTool"));
        DialogROPTool->resize(691, 449);
        gridLayout = new QGridLayout(DialogROPTool);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogROPTool);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_3 = new QLabel(DialogROPTool);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogROPTool);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        groupBox = new QGroupBox(DialogROPTool);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkShowALU = new QCheckBox(groupBox);
        chkShowALU->setObjectName(QString::fromUtf8("chkShowALU"));
        chkShowALU->setChecked(true);

        verticalLayout->addWidget(chkShowALU);

        chkShowStack = new QCheckBox(groupBox);
        chkShowStack->setObjectName(QString::fromUtf8("chkShowStack"));
        chkShowStack->setChecked(true);

        verticalLayout->addWidget(chkShowStack);

        chkShowLogic = new QCheckBox(groupBox);
        chkShowLogic->setObjectName(QString::fromUtf8("chkShowLogic"));
        chkShowLogic->setChecked(true);

        verticalLayout->addWidget(chkShowLogic);

        chkShowData = new QCheckBox(groupBox);
        chkShowData->setObjectName(QString::fromUtf8("chkShowData"));
        chkShowData->setChecked(true);

        verticalLayout->addWidget(chkShowData);

        chkShowOther = new QCheckBox(groupBox);
        chkShowOther->setObjectName(QString::fromUtf8("chkShowOther"));
        chkShowOther->setChecked(true);

        verticalLayout->addWidget(chkShowOther);


        gridLayout->addWidget(groupBox, 1, 2, 2, 1);

        tableView = new QTableView(DialogROPTool);
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

        gridLayout->addWidget(tableView, 2, 0, 2, 2);

        checkUnique = new QCheckBox(DialogROPTool);
        checkUnique->setObjectName(QString::fromUtf8("checkUnique"));
        checkUnique->setChecked(true);

        gridLayout->addWidget(checkUnique, 3, 2, 1, 1);

        label_2 = new QLabel(DialogROPTool);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        listView = new QListView(DialogROPTool);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setAlternatingRowColors(true);

        gridLayout->addWidget(listView, 5, 0, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogROPTool);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogROPTool);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogROPTool);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);

        progressBar = new QProgressBar(DialogROPTool);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 7, 0, 1, 3);

        QWidget::setTabOrder(txtSearch, tableView);
        QWidget::setTabOrder(tableView, listView);
        QWidget::setTabOrder(listView, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);

        retranslateUi(DialogROPTool);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogROPTool, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogROPTool);
    } // setupUi

    void retranslateUi(QDialog *DialogROPTool)
    {
        DialogROPTool->setWindowTitle(QApplication::translate("DialogROPTool", "ROP Gadget Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogROPTool", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogROPTool", "Filter", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogROPTool", "Gadets to Display", 0, QApplication::UnicodeUTF8));
        chkShowALU->setText(QApplication::translate("DialogROPTool", "ALU", 0, QApplication::UnicodeUTF8));
        chkShowStack->setText(QApplication::translate("DialogROPTool", "Stack", 0, QApplication::UnicodeUTF8));
        chkShowLogic->setText(QApplication::translate("DialogROPTool", "Logic", 0, QApplication::UnicodeUTF8));
        chkShowData->setText(QApplication::translate("DialogROPTool", "Data", 0, QApplication::UnicodeUTF8));
        chkShowOther->setText(QApplication::translate("DialogROPTool", "Other", 0, QApplication::UnicodeUTF8));
        checkUnique->setText(QApplication::translate("DialogROPTool", "Unique Gadgets Only", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogROPTool", "Results:", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("DialogROPTool", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("DialogROPTool", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("DialogROPTool", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogROPTool: public Ui_DialogROPTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGROP_H
