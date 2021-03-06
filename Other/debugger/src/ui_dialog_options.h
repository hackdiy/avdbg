/********************************************************************************
** Form generated from reading UI file 'dialog_options.ui'
**
** Created: Sat Sep 15 17:39:58 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_OPTIONS_H
#define UI_DIALOG_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogOptions
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout2;
    QRadioButton *rdoDetach;
    QRadioButton *rdoKill;
    QSpacerItem *spacerItem;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLineEdit *txtStackFont;
    QToolButton *btnDisFont;
    QLineEdit *txtRegisterFont;
    QLabel *lblDisFont;
    QLabel *lblStackFont;
    QLabel *lblRegisterFont;
    QLineEdit *txtMemoryFont;
    QLabel *lblMemFont;
    QToolButton *btnRegisterFont;
    QToolButton *btnStackFont;
    QLineEdit *txtDisFont;
    QToolButton *btnMemoryFont;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout2;
    QCheckBox *chkDataShowAddress;
    QCheckBox *chkDataShowHex;
    QCheckBox *chkDataShowAscii;
    QCheckBox *chkDataShowComments;
    QLabel *label_2;
    QComboBox *cmbDataWordWidth;
    QSpacerItem *spacerItem1;
    QLabel *label_6;
    QComboBox *cmbDataRowWidth;
    QSpacerItem *spacerItem2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkAddressSemicolon;
    QSpacerItem *verticalSpacer;
    QSpacerItem *spacerItem3;
    QWidget *tab_3;
    QVBoxLayout *vboxLayout3;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout4;
    QRadioButton *rdoBPEntry;
    QRadioButton *rdoBPMain;
    QCheckBox *chkWarnDataBreakpoint;
    QCheckBox *chkFindMain;
    QHBoxLayout *hboxLayout;
    QLabel *label_5;
    QSpinBox *spnMinString;
    QSpacerItem *spacerItem4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout3;
    QCheckBox *chkTTY;
    QLabel *label;
    QLineEdit *txtTTY;
    QToolButton *btnTTY;
    QSpacerItem *spacerItem5;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QListWidget *listIgnoredExceptions;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout5;
    QRadioButton *rdoSytntaxIntel;
    QRadioButton *rdoSytntaxATT;
    QCheckBox *chkZerosAreFilling;
    QCheckBox *chkUppercase;
    QSpacerItem *spacerItem6;
    QWidget *tab_5;
    QVBoxLayout *vboxLayout6;
    QGridLayout *gridLayout4;
    QLabel *label_3;
    QLineEdit *txtSymbolDir;
    QToolButton *btnSymbolDir;
    QLabel *label_4;
    QLineEdit *txtPluginDir;
    QToolButton *btnPluginDir;
    QLabel *label_7;
    QLineEdit *txtSessionDir;
    QToolButton *btnSessionDir;
    QSpacerItem *spacerItem7;
    QWidget *tab_plugins;
    QGridLayout *tab_plugins_layout;
    QLabel *label_plugins;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogOptions)
    {
        if (DialogOptions->objectName().isEmpty())
            DialogOptions->setObjectName(QString::fromUtf8("DialogOptions"));
        DialogOptions->resize(602, 387);
        vboxLayout = new QVBoxLayout(DialogOptions);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(DialogOptions);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout2 = new QVBoxLayout(groupBox_3);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        rdoDetach = new QRadioButton(groupBox_3);
        rdoDetach->setObjectName(QString::fromUtf8("rdoDetach"));
        rdoDetach->setChecked(true);

        vboxLayout2->addWidget(rdoDetach);

        rdoKill = new QRadioButton(groupBox_3);
        rdoKill->setObjectName(QString::fromUtf8("rdoKill"));

        vboxLayout2->addWidget(rdoKill);


        vboxLayout1->addWidget(groupBox_3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        txtStackFont = new QLineEdit(tab_2);
        txtStackFont->setObjectName(QString::fromUtf8("txtStackFont"));

        gridLayout1->addWidget(txtStackFont, 0, 1, 1, 1);

        btnDisFont = new QToolButton(tab_2);
        btnDisFont->setObjectName(QString::fromUtf8("btnDisFont"));

        gridLayout1->addWidget(btnDisFont, 3, 2, 1, 1);

        txtRegisterFont = new QLineEdit(tab_2);
        txtRegisterFont->setObjectName(QString::fromUtf8("txtRegisterFont"));

        gridLayout1->addWidget(txtRegisterFont, 2, 1, 1, 1);

        lblDisFont = new QLabel(tab_2);
        lblDisFont->setObjectName(QString::fromUtf8("lblDisFont"));

        gridLayout1->addWidget(lblDisFont, 3, 0, 1, 1);

        lblStackFont = new QLabel(tab_2);
        lblStackFont->setObjectName(QString::fromUtf8("lblStackFont"));

        gridLayout1->addWidget(lblStackFont, 0, 0, 1, 1);

        lblRegisterFont = new QLabel(tab_2);
        lblRegisterFont->setObjectName(QString::fromUtf8("lblRegisterFont"));

        gridLayout1->addWidget(lblRegisterFont, 2, 0, 1, 1);

        txtMemoryFont = new QLineEdit(tab_2);
        txtMemoryFont->setObjectName(QString::fromUtf8("txtMemoryFont"));

        gridLayout1->addWidget(txtMemoryFont, 1, 1, 1, 1);

        lblMemFont = new QLabel(tab_2);
        lblMemFont->setObjectName(QString::fromUtf8("lblMemFont"));

        gridLayout1->addWidget(lblMemFont, 1, 0, 1, 1);

        btnRegisterFont = new QToolButton(tab_2);
        btnRegisterFont->setObjectName(QString::fromUtf8("btnRegisterFont"));

        gridLayout1->addWidget(btnRegisterFont, 2, 2, 1, 1);

        btnStackFont = new QToolButton(tab_2);
        btnStackFont->setObjectName(QString::fromUtf8("btnStackFont"));

        gridLayout1->addWidget(btnStackFont, 0, 2, 1, 1);

        txtDisFont = new QLineEdit(tab_2);
        txtDisFont->setObjectName(QString::fromUtf8("txtDisFont"));

        gridLayout1->addWidget(txtDisFont, 3, 1, 1, 1);

        btnMemoryFont = new QToolButton(tab_2);
        btnMemoryFont->setObjectName(QString::fromUtf8("btnMemoryFont"));

        gridLayout1->addWidget(btnMemoryFont, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 2);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout2 = new QGridLayout(groupBox_5);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        chkDataShowAddress = new QCheckBox(groupBox_5);
        chkDataShowAddress->setObjectName(QString::fromUtf8("chkDataShowAddress"));

        gridLayout2->addWidget(chkDataShowAddress, 0, 0, 1, 3);

        chkDataShowHex = new QCheckBox(groupBox_5);
        chkDataShowHex->setObjectName(QString::fromUtf8("chkDataShowHex"));

        gridLayout2->addWidget(chkDataShowHex, 1, 0, 1, 3);

        chkDataShowAscii = new QCheckBox(groupBox_5);
        chkDataShowAscii->setObjectName(QString::fromUtf8("chkDataShowAscii"));

        gridLayout2->addWidget(chkDataShowAscii, 2, 0, 1, 3);

        chkDataShowComments = new QCheckBox(groupBox_5);
        chkDataShowComments->setObjectName(QString::fromUtf8("chkDataShowComments"));

        gridLayout2->addWidget(chkDataShowComments, 3, 0, 1, 3);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 4, 0, 1, 1);

        cmbDataWordWidth = new QComboBox(groupBox_5);
        cmbDataWordWidth->setObjectName(QString::fromUtf8("cmbDataWordWidth"));

        gridLayout2->addWidget(cmbDataWordWidth, 4, 1, 1, 1);

        spacerItem1 = new QSpacerItem(321, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 4, 2, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout2->addWidget(label_6, 5, 0, 1, 1);

        cmbDataRowWidth = new QComboBox(groupBox_5);
        cmbDataRowWidth->setObjectName(QString::fromUtf8("cmbDataRowWidth"));

        gridLayout2->addWidget(cmbDataRowWidth, 5, 1, 1, 1);

        spacerItem2 = new QSpacerItem(321, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 5, 2, 1, 1);


        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chkAddressSemicolon = new QCheckBox(tab_2);
        chkAddressSemicolon->setObjectName(QString::fromUtf8("chkAddressSemicolon"));
        chkAddressSemicolon->setChecked(true);

        verticalLayout_2->addWidget(chkAddressSemicolon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        spacerItem3 = new QSpacerItem(578, 201, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 2, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        vboxLayout3 = new QVBoxLayout(tab_3);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout4 = new QVBoxLayout(groupBox_2);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        rdoBPEntry = new QRadioButton(groupBox_2);
        rdoBPEntry->setObjectName(QString::fromUtf8("rdoBPEntry"));
        rdoBPEntry->setChecked(false);

        vboxLayout4->addWidget(rdoBPEntry);

        rdoBPMain = new QRadioButton(groupBox_2);
        rdoBPMain->setObjectName(QString::fromUtf8("rdoBPMain"));
        rdoBPMain->setChecked(true);

        vboxLayout4->addWidget(rdoBPMain);


        vboxLayout3->addWidget(groupBox_2);

        chkWarnDataBreakpoint = new QCheckBox(tab_3);
        chkWarnDataBreakpoint->setObjectName(QString::fromUtf8("chkWarnDataBreakpoint"));

        vboxLayout3->addWidget(chkWarnDataBreakpoint);

        chkFindMain = new QCheckBox(tab_3);
        chkFindMain->setObjectName(QString::fromUtf8("chkFindMain"));

        vboxLayout3->addWidget(chkFindMain);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout->addWidget(label_5);

        spnMinString = new QSpinBox(tab_3);
        spnMinString->setObjectName(QString::fromUtf8("spnMinString"));

        hboxLayout->addWidget(spnMinString);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        vboxLayout3->addLayout(hboxLayout);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout3 = new QGridLayout(groupBox_4);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        chkTTY = new QCheckBox(groupBox_4);
        chkTTY->setObjectName(QString::fromUtf8("chkTTY"));
        chkTTY->setChecked(true);

        gridLayout3->addWidget(chkTTY, 0, 0, 1, 3);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout3->addWidget(label, 1, 0, 1, 1);

        txtTTY = new QLineEdit(groupBox_4);
        txtTTY->setObjectName(QString::fromUtf8("txtTTY"));

        gridLayout3->addWidget(txtTTY, 1, 1, 1, 1);

        btnTTY = new QToolButton(groupBox_4);
        btnTTY->setObjectName(QString::fromUtf8("btnTTY"));

        gridLayout3->addWidget(btnTTY, 1, 2, 1, 1);


        vboxLayout3->addWidget(groupBox_4);

        spacerItem5 = new QSpacerItem(578, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem5);

        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_3 = new QVBoxLayout(tab_6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(tab_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        listIgnoredExceptions = new QListWidget(tab_6);
        listIgnoredExceptions->setObjectName(QString::fromUtf8("listIgnoredExceptions"));
        listIgnoredExceptions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listIgnoredExceptions->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(listIgnoredExceptions);

        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout = new QVBoxLayout(tab_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout5 = new QVBoxLayout(groupBox);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        rdoSytntaxIntel = new QRadioButton(groupBox);
        rdoSytntaxIntel->setObjectName(QString::fromUtf8("rdoSytntaxIntel"));
        rdoSytntaxIntel->setChecked(true);

        vboxLayout5->addWidget(rdoSytntaxIntel);

        rdoSytntaxATT = new QRadioButton(groupBox);
        rdoSytntaxATT->setObjectName(QString::fromUtf8("rdoSytntaxATT"));
        rdoSytntaxATT->setEnabled(false);

        vboxLayout5->addWidget(rdoSytntaxATT);


        verticalLayout->addWidget(groupBox);

        chkZerosAreFilling = new QCheckBox(tab_4);
        chkZerosAreFilling->setObjectName(QString::fromUtf8("chkZerosAreFilling"));

        verticalLayout->addWidget(chkZerosAreFilling);

        chkUppercase = new QCheckBox(tab_4);
        chkUppercase->setObjectName(QString::fromUtf8("chkUppercase"));

        verticalLayout->addWidget(chkUppercase);

        spacerItem6 = new QSpacerItem(561, 206, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem6);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        vboxLayout6 = new QVBoxLayout(tab_5);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout4->addWidget(label_3, 0, 0, 1, 1);

        txtSymbolDir = new QLineEdit(tab_5);
        txtSymbolDir->setObjectName(QString::fromUtf8("txtSymbolDir"));

        gridLayout4->addWidget(txtSymbolDir, 0, 1, 1, 1);

        btnSymbolDir = new QToolButton(tab_5);
        btnSymbolDir->setObjectName(QString::fromUtf8("btnSymbolDir"));

        gridLayout4->addWidget(btnSymbolDir, 0, 2, 1, 1);

        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout4->addWidget(label_4, 1, 0, 1, 1);

        txtPluginDir = new QLineEdit(tab_5);
        txtPluginDir->setObjectName(QString::fromUtf8("txtPluginDir"));

        gridLayout4->addWidget(txtPluginDir, 1, 1, 1, 1);

        btnPluginDir = new QToolButton(tab_5);
        btnPluginDir->setObjectName(QString::fromUtf8("btnPluginDir"));

        gridLayout4->addWidget(btnPluginDir, 1, 2, 1, 1);

        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout4->addWidget(label_7, 2, 0, 1, 1);

        txtSessionDir = new QLineEdit(tab_5);
        txtSessionDir->setObjectName(QString::fromUtf8("txtSessionDir"));

        gridLayout4->addWidget(txtSessionDir, 2, 1, 1, 1);

        btnSessionDir = new QToolButton(tab_5);
        btnSessionDir->setObjectName(QString::fromUtf8("btnSessionDir"));

        gridLayout4->addWidget(btnSessionDir, 2, 2, 1, 1);


        vboxLayout6->addLayout(gridLayout4);

        spacerItem7 = new QSpacerItem(578, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem7);

        tabWidget->addTab(tab_5, QString());
        tab_plugins = new QWidget();
        tab_plugins->setObjectName(QString::fromUtf8("tab_plugins"));
        tab_plugins_layout = new QGridLayout(tab_plugins);
        tab_plugins_layout->setObjectName(QString::fromUtf8("tab_plugins_layout"));
        label_plugins = new QLabel(tab_plugins);
        label_plugins->setObjectName(QString::fromUtf8("label_plugins"));
        label_plugins->setAlignment(Qt::AlignCenter);

        tab_plugins_layout->addWidget(label_plugins, 0, 0, 1, 1);

        tabWidget->addTab(tab_plugins, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogOptions);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lblDisFont->setBuddy(txtDisFont);
        lblStackFont->setBuddy(txtStackFont);
        lblRegisterFont->setBuddy(txtRegisterFont);
        lblMemFont->setBuddy(txtMemoryFont);
        label_5->setBuddy(spnMinString);
        label->setBuddy(txtTTY);
        label_3->setBuddy(txtSymbolDir);
        label_4->setBuddy(txtPluginDir);
        label_7->setBuddy(txtSessionDir);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, rdoDetach);
        QWidget::setTabOrder(rdoDetach, rdoKill);
        QWidget::setTabOrder(rdoKill, txtStackFont);
        QWidget::setTabOrder(txtStackFont, btnStackFont);
        QWidget::setTabOrder(btnStackFont, txtMemoryFont);
        QWidget::setTabOrder(txtMemoryFont, btnMemoryFont);
        QWidget::setTabOrder(btnMemoryFont, txtRegisterFont);
        QWidget::setTabOrder(txtRegisterFont, btnRegisterFont);
        QWidget::setTabOrder(btnRegisterFont, txtDisFont);
        QWidget::setTabOrder(txtDisFont, btnDisFont);
        QWidget::setTabOrder(btnDisFont, chkDataShowAddress);
        QWidget::setTabOrder(chkDataShowAddress, chkDataShowHex);
        QWidget::setTabOrder(chkDataShowHex, chkDataShowAscii);
        QWidget::setTabOrder(chkDataShowAscii, chkDataShowComments);
        QWidget::setTabOrder(chkDataShowComments, cmbDataWordWidth);
        QWidget::setTabOrder(cmbDataWordWidth, cmbDataRowWidth);
        QWidget::setTabOrder(cmbDataRowWidth, rdoBPEntry);
        QWidget::setTabOrder(rdoBPEntry, rdoBPMain);
        QWidget::setTabOrder(rdoBPMain, chkWarnDataBreakpoint);
        QWidget::setTabOrder(chkWarnDataBreakpoint, chkFindMain);
        QWidget::setTabOrder(chkFindMain, spnMinString);
        QWidget::setTabOrder(spnMinString, chkTTY);
        QWidget::setTabOrder(chkTTY, txtTTY);
        QWidget::setTabOrder(txtTTY, btnTTY);
        QWidget::setTabOrder(btnTTY, rdoSytntaxIntel);
        QWidget::setTabOrder(rdoSytntaxIntel, rdoSytntaxATT);
        QWidget::setTabOrder(rdoSytntaxATT, chkZerosAreFilling);
        QWidget::setTabOrder(chkZerosAreFilling, chkUppercase);
        QWidget::setTabOrder(chkUppercase, txtSymbolDir);
        QWidget::setTabOrder(txtSymbolDir, btnSymbolDir);
        QWidget::setTabOrder(btnSymbolDir, txtPluginDir);
        QWidget::setTabOrder(txtPluginDir, btnPluginDir);
        QWidget::setTabOrder(btnPluginDir, txtSessionDir);
        QWidget::setTabOrder(txtSessionDir, btnSessionDir);

        retranslateUi(DialogOptions);
        QObject::connect(chkTTY, SIGNAL(toggled(bool)), txtTTY, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogOptions, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogOptions, SLOT(reject()));
        QObject::connect(chkTTY, SIGNAL(toggled(bool)), btnTTY, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogOptions);
    } // setupUi

    void retranslateUi(QDialog *DialogOptions)
    {
        DialogOptions->setWindowTitle(QApplication::translate("DialogOptions", "Configure Debugger", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("DialogOptions", "Close Behaviour", 0, QApplication::UnicodeUTF8));
        rdoDetach->setText(QApplication::translate("DialogOptions", "Detach From Debugged Application", 0, QApplication::UnicodeUTF8));
        rdoKill->setText(QApplication::translate("DialogOptions", "Terminate Debugged Application", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogOptions", "General", 0, QApplication::UnicodeUTF8));
        btnDisFont->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        lblDisFont->setText(QApplication::translate("DialogOptions", "Default Disassembly View Font", 0, QApplication::UnicodeUTF8));
        lblStackFont->setText(QApplication::translate("DialogOptions", "Default Stack View Font", 0, QApplication::UnicodeUTF8));
        lblRegisterFont->setText(QApplication::translate("DialogOptions", "Default Register View Font", 0, QApplication::UnicodeUTF8));
        lblMemFont->setText(QApplication::translate("DialogOptions", "Default Memory Dump View Font", 0, QApplication::UnicodeUTF8));
        btnRegisterFont->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        btnStackFont->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        btnMemoryFont->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("DialogOptions", "Default Data View Settings", 0, QApplication::UnicodeUTF8));
        chkDataShowAddress->setText(QApplication::translate("DialogOptions", "Show Address", 0, QApplication::UnicodeUTF8));
        chkDataShowHex->setText(QApplication::translate("DialogOptions", "Show Hex", 0, QApplication::UnicodeUTF8));
        chkDataShowAscii->setText(QApplication::translate("DialogOptions", "Show ASCII", 0, QApplication::UnicodeUTF8));
        chkDataShowComments->setText(QApplication::translate("DialogOptions", "Show Comments", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogOptions", "Word Width", 0, QApplication::UnicodeUTF8));
        cmbDataWordWidth->clear();
        cmbDataWordWidth->insertItems(0, QStringList()
         << QApplication::translate("DialogOptions", "1 Byte", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "2 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "4 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "8 Bytes", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("DialogOptions", "Row Width", 0, QApplication::UnicodeUTF8));
        cmbDataRowWidth->clear();
        cmbDataRowWidth->insertItems(0, QStringList()
         << QApplication::translate("DialogOptions", "1 Byte", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "2 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "4 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "8 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogOptions", "16 Bytes", 0, QApplication::UnicodeUTF8)
        );
        chkAddressSemicolon->setText(QApplication::translate("DialogOptions", "Show Semicolon in Addresses", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogOptions", "Appearance", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DialogOptions", "Initial Breakpoint", 0, QApplication::UnicodeUTF8));
        rdoBPEntry->setText(QApplication::translate("DialogOptions", "Application Entry Point", 0, QApplication::UnicodeUTF8));
        rdoBPMain->setText(QApplication::translate("DialogOptions", "\"main\" symbol (when possible)", 0, QApplication::UnicodeUTF8));
        chkWarnDataBreakpoint->setText(QApplication::translate("DialogOptions", "Warn when setting breakpoint in non-executable region", 0, QApplication::UnicodeUTF8));
        chkFindMain->setText(QApplication::translate("DialogOptions", "Use heuristic to find \"main\" symbol when it is not found in symbol file", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogOptions", "Minimum length for string detection", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("DialogOptions", "Command Line IO", 0, QApplication::UnicodeUTF8));
        chkTTY->setText(QApplication::translate("DialogOptions", "Open a terminal to provide program input and output", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogOptions", "Terminal Program:", 0, QApplication::UnicodeUTF8));
        txtTTY->setText(QApplication::translate("DialogOptions", "/usr/bin/xterm", 0, QApplication::UnicodeUTF8));
        btnTTY->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DialogOptions", "Debugging", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogOptions", "Ignore (pass to program) the following exceptions:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("DialogOptions", "Signals/Exceptions", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogOptions", "Disassembly Syntax", 0, QApplication::UnicodeUTF8));
        rdoSytntaxIntel->setText(QApplication::translate("DialogOptions", "Intel", 0, QApplication::UnicodeUTF8));
        rdoSytntaxATT->setText(QApplication::translate("DialogOptions", "AT&&T", 0, QApplication::UnicodeUTF8));
        chkZerosAreFilling->setText(QApplication::translate("DialogOptions", "Instruction \"add byte ptr[eax], al\" (0x00 0x00) is \"Filling\" on x86", 0, QApplication::UnicodeUTF8));
        chkUppercase->setText(QApplication::translate("DialogOptions", "Disassemble in uppercase", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("DialogOptions", "Disassembly", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogOptions", "Symbol Directory", 0, QApplication::UnicodeUTF8));
        btnSymbolDir->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogOptions", "Plugin Directory", 0, QApplication::UnicodeUTF8));
        btnPluginDir->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogOptions", "Session Directory", 0, QApplication::UnicodeUTF8));
        btnSessionDir->setText(QApplication::translate("DialogOptions", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("DialogOptions", "Directories", 0, QApplication::UnicodeUTF8));
        label_plugins->setText(QApplication::translate("DialogOptions", "No Plugin Option Pages", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_plugins), QApplication::translate("DialogOptions", "Plugin Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogOptions: public Ui_DialogOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_OPTIONS_H
