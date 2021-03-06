/********************************************************************************
** Form generated from reading UI file 'debuggerui.ui'
**
** Created: Wed Oct 3 15:11:30 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGERUI_H
#define UI_DEBUGGERUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QCategoryList.h"
#include "QDisassemblyView.h"
#include "TabWidget.h"

QT_BEGIN_NAMESPACE

class Ui_DebuggerUI
{
public:
    QAction *action_Open;
    QAction *action_Attach;
    QAction *actionE_xit;
    QAction *action_Memory_Regions;
    QAction *action_Single_Step;
    QAction *action_Run;
    QAction *action_Pause;
    QAction *action_Restart;
    QAction *action_Detach;
    QAction *action_Step_Into;
    QAction *action_Step_Over;
    QAction *action_About;
    QAction *action_Help;
    QAction *action_Toggle_Breakpoint;
    QAction *action_Configure_Debugger;
    QAction *actionAbout_QT;
    QAction *action_Breakpoint_Manager;
    QAction *actionApplication_Arguments;
    QAction *actionRun_Until_Return;
    QAction *action_Step_Into_Pass_Signal_To_Application;
    QAction *action_Step_Over_Pass_Signal_To_Application;
    QAction *action_Run_Pass_Signal_To_Application;
    QAction *action_Recent_Files;
    QAction *actionApplication_Working_Directory;
    QAction *action_Kill;
    QAction *action_Plugins;
    QAction *action_Threads;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QDisassemblyView *cpuView;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menu_help;
    QMenu *menu_View;
    QMenu *menu_Plugins;
    QMenu *menu_Options;
    QMenu *menu_File;
    QMenu *menu_Debug;
    QStatusBar *statusbar;
    QDockWidget *registersDock;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout;
    QCategoryList *registerList;
    QDockWidget *dataDock;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout1;
    TabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout2;
    QDockWidget *stackDock;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *DebuggerUI)
    {
        if (DebuggerUI->objectName().isEmpty())
            DebuggerUI->setObjectName(QString::fromUtf8("DebuggerUI"));
        DebuggerUI->resize(800, 700);
        action_Open = new QAction(DebuggerUI);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/debugger/images/edb22-action-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon);
        action_Attach = new QAction(DebuggerUI);
        action_Attach->setObjectName(QString::fromUtf8("action_Attach"));
        actionE_xit = new QAction(DebuggerUI);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        action_Memory_Regions = new QAction(DebuggerUI);
        action_Memory_Regions->setObjectName(QString::fromUtf8("action_Memory_Regions"));
        action_Single_Step = new QAction(DebuggerUI);
        action_Single_Step->setObjectName(QString::fromUtf8("action_Single_Step"));
        action_Run = new QAction(DebuggerUI);
        action_Run->setObjectName(QString::fromUtf8("action_Run"));
        action_Run->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/debugger/images/edb22-action-run.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Run->setIcon(icon1);
        action_Pause = new QAction(DebuggerUI);
        action_Pause->setObjectName(QString::fromUtf8("action_Pause"));
        action_Pause->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/debugger/images/edb22-action-break.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Pause->setIcon(icon2);
        action_Restart = new QAction(DebuggerUI);
        action_Restart->setObjectName(QString::fromUtf8("action_Restart"));
        action_Restart->setEnabled(false);
        action_Detach = new QAction(DebuggerUI);
        action_Detach->setObjectName(QString::fromUtf8("action_Detach"));
        action_Detach->setEnabled(false);
        action_Step_Into = new QAction(DebuggerUI);
        action_Step_Into->setObjectName(QString::fromUtf8("action_Step_Into"));
        action_Step_Into->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepi.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Into->setIcon(icon3);
        action_Step_Over = new QAction(DebuggerUI);
        action_Step_Over->setObjectName(QString::fromUtf8("action_Step_Over"));
        action_Step_Over->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepoveri.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Over->setIcon(icon4);
        action_About = new QAction(DebuggerUI);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Help = new QAction(DebuggerUI);
        action_Help->setObjectName(QString::fromUtf8("action_Help"));
        action_Help->setEnabled(false);
        action_Toggle_Breakpoint = new QAction(DebuggerUI);
        action_Toggle_Breakpoint->setObjectName(QString::fromUtf8("action_Toggle_Breakpoint"));
        action_Toggle_Breakpoint->setEnabled(false);
        action_Configure_Debugger = new QAction(DebuggerUI);
        action_Configure_Debugger->setObjectName(QString::fromUtf8("action_Configure_Debugger"));
        actionAbout_QT = new QAction(DebuggerUI);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        action_Breakpoint_Manager = new QAction(DebuggerUI);
        action_Breakpoint_Manager->setObjectName(QString::fromUtf8("action_Breakpoint_Manager"));
        actionApplication_Arguments = new QAction(DebuggerUI);
        actionApplication_Arguments->setObjectName(QString::fromUtf8("actionApplication_Arguments"));
        actionRun_Until_Return = new QAction(DebuggerUI);
        actionRun_Until_Return->setObjectName(QString::fromUtf8("actionRun_Until_Return"));
        actionRun_Until_Return->setEnabled(false);
        action_Step_Into_Pass_Signal_To_Application = new QAction(DebuggerUI);
        action_Step_Into_Pass_Signal_To_Application->setObjectName(QString::fromUtf8("action_Step_Into_Pass_Signal_To_Application"));
        action_Step_Into_Pass_Signal_To_Application->setEnabled(false);
        action_Step_Into_Pass_Signal_To_Application->setIcon(icon3);
        action_Step_Over_Pass_Signal_To_Application = new QAction(DebuggerUI);
        action_Step_Over_Pass_Signal_To_Application->setObjectName(QString::fromUtf8("action_Step_Over_Pass_Signal_To_Application"));
        action_Step_Over_Pass_Signal_To_Application->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepover.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Over_Pass_Signal_To_Application->setIcon(icon5);
        action_Run_Pass_Signal_To_Application = new QAction(DebuggerUI);
        action_Run_Pass_Signal_To_Application->setObjectName(QString::fromUtf8("action_Run_Pass_Signal_To_Application"));
        action_Run_Pass_Signal_To_Application->setEnabled(false);
        action_Run_Pass_Signal_To_Application->setIcon(icon1);
        action_Recent_Files = new QAction(DebuggerUI);
        action_Recent_Files->setObjectName(QString::fromUtf8("action_Recent_Files"));
        actionApplication_Working_Directory = new QAction(DebuggerUI);
        actionApplication_Working_Directory->setObjectName(QString::fromUtf8("actionApplication_Working_Directory"));
        action_Kill = new QAction(DebuggerUI);
        action_Kill->setObjectName(QString::fromUtf8("action_Kill"));
        action_Kill->setEnabled(false);
        action_Plugins = new QAction(DebuggerUI);
        action_Plugins->setObjectName(QString::fromUtf8("action_Plugins"));
        action_Threads = new QAction(DebuggerUI);
        action_Threads->setObjectName(QString::fromUtf8("action_Threads"));
        centralwidget = new QWidget(DebuggerUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cpuView = new QDisassemblyView(centralwidget);
        cpuView->setObjectName(QString::fromUtf8("cpuView"));

        verticalLayout->addWidget(cpuView);

        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(10);
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(listView);

        DebuggerUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DebuggerUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Plugins = new QMenu(menubar);
        menu_Plugins->setObjectName(QString::fromUtf8("menu_Plugins"));
        menu_Options = new QMenu(menubar);
        menu_Options->setObjectName(QString::fromUtf8("menu_Options"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Debug = new QMenu(menubar);
        menu_Debug->setObjectName(QString::fromUtf8("menu_Debug"));
        DebuggerUI->setMenuBar(menubar);
        statusbar = new QStatusBar(DebuggerUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DebuggerUI->setStatusBar(statusbar);
        registersDock = new QDockWidget(DebuggerUI);
        registersDock->setObjectName(QString::fromUtf8("registersDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout = new QGridLayout(dockWidgetContents_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        registerList = new QCategoryList(dockWidgetContents_3);
        registerList->setObjectName(QString::fromUtf8("registerList"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(9);
        registerList->setFont(font1);

        gridLayout->addWidget(registerList, 0, 0, 1, 1);

        registersDock->setWidget(dockWidgetContents_3);
        DebuggerUI->addDockWidget(static_cast<Qt::DockWidgetArea>(2), registersDock);
        dataDock = new QDockWidget(DebuggerUI);
        dataDock->setObjectName(QString::fromUtf8("dataDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout1 = new QGridLayout(dockWidgetContents_4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tabWidget = new TabWidget(dockWidgetContents_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout2 = new QGridLayout(tab);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        tabWidget->addTab(tab, QString());

        gridLayout1->addWidget(tabWidget, 0, 0, 1, 1);

        dataDock->setWidget(dockWidgetContents_4);
        DebuggerUI->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dataDock);
        stackDock = new QDockWidget(DebuggerUI);
        stackDock->setObjectName(QString::fromUtf8("stackDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout3 = new QGridLayout(dockWidgetContents);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        stackDock->setWidget(dockWidgetContents);
        DebuggerUI->addDockWidget(static_cast<Qt::DockWidgetArea>(8), stackDock);
        toolBar = new QToolBar(DebuggerUI);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        DebuggerUI->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Debug->menuAction());
        menubar->addAction(menu_Plugins->menuAction());
        menubar->addAction(menu_Options->menuAction());
        menubar->addAction(menu_help->menuAction());
        menu_help->addAction(action_Help);
        menu_help->addSeparator();
        menu_help->addAction(action_About);
        menu_help->addAction(actionAbout_QT);
        menu_View->addAction(action_Memory_Regions);
        menu_View->addAction(action_Threads);
        menu_View->addSeparator();
        menu_Plugins->addAction(action_Plugins);
        menu_Plugins->addSeparator();
        menu_Options->addAction(action_Configure_Debugger);
        menu_Options->addAction(actionApplication_Arguments);
        menu_Options->addAction(actionApplication_Working_Directory);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Attach);
        menu_File->addAction(action_Recent_Files);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Debug->addAction(action_Run);
        menu_Debug->addAction(action_Pause);
        menu_Debug->addAction(action_Restart);
        menu_Debug->addAction(action_Detach);
        menu_Debug->addAction(action_Kill);
        menu_Debug->addSeparator();
        menu_Debug->addAction(action_Step_Into);
        menu_Debug->addAction(action_Step_Over);
        menu_Debug->addSeparator();
        menu_Debug->addAction(action_Run_Pass_Signal_To_Application);
        menu_Debug->addAction(action_Step_Into_Pass_Signal_To_Application);
        menu_Debug->addAction(action_Step_Over_Pass_Signal_To_Application);
        menu_Debug->addSeparator();
        menu_Debug->addAction(actionRun_Until_Return);
        toolBar->addAction(action_Pause);
        toolBar->addAction(action_Step_Into);
        toolBar->addAction(action_Step_Over);
        toolBar->addAction(action_Run);

        retranslateUi(DebuggerUI);
        QObject::connect(actionE_xit, SIGNAL(triggered()), DebuggerUI, SLOT(close()));

        QMetaObject::connectSlotsByName(DebuggerUI);
    } // setupUi

    void retranslateUi(QMainWindow *DebuggerUI)
    {
        DebuggerUI->setWindowTitle(QApplication::translate("DebuggerUI", "edb", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("DebuggerUI", "&Open", 0, QApplication::UnicodeUTF8));
        action_Attach->setText(QApplication::translate("DebuggerUI", "&Attach", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("DebuggerUI", "E&xit", 0, QApplication::UnicodeUTF8));
        action_Memory_Regions->setText(QApplication::translate("DebuggerUI", "&Memory Regions", 0, QApplication::UnicodeUTF8));
        action_Memory_Regions->setShortcut(QApplication::translate("DebuggerUI", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        action_Single_Step->setText(QApplication::translate("DebuggerUI", "&Step Into", 0, QApplication::UnicodeUTF8));
        action_Single_Step->setShortcut(QString());
        action_Run->setText(QApplication::translate("DebuggerUI", "&Run", 0, QApplication::UnicodeUTF8));
        action_Run->setShortcut(QApplication::translate("DebuggerUI", "F9", 0, QApplication::UnicodeUTF8));
        action_Pause->setText(QApplication::translate("DebuggerUI", "&Pause", 0, QApplication::UnicodeUTF8));
        action_Pause->setShortcut(QApplication::translate("DebuggerUI", "F11", 0, QApplication::UnicodeUTF8));
        action_Restart->setText(QApplication::translate("DebuggerUI", "&Restart", 0, QApplication::UnicodeUTF8));
        action_Detach->setText(QApplication::translate("DebuggerUI", "&Detach", 0, QApplication::UnicodeUTF8));
        action_Detach->setIconText(QApplication::translate("DebuggerUI", "Detach", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Detach->setToolTip(QApplication::translate("DebuggerUI", "Detach", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Step_Into->setText(QApplication::translate("DebuggerUI", "&Step Into", 0, QApplication::UnicodeUTF8));
        action_Step_Into->setShortcut(QApplication::translate("DebuggerUI", "F7", 0, QApplication::UnicodeUTF8));
        action_Step_Over->setText(QApplication::translate("DebuggerUI", "&Step Over", 0, QApplication::UnicodeUTF8));
        action_Step_Over->setShortcut(QApplication::translate("DebuggerUI", "F8", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("DebuggerUI", "&About", 0, QApplication::UnicodeUTF8));
        action_Help->setText(QApplication::translate("DebuggerUI", "&Help", 0, QApplication::UnicodeUTF8));
        action_Help->setShortcut(QApplication::translate("DebuggerUI", "F1", 0, QApplication::UnicodeUTF8));
        action_Toggle_Breakpoint->setText(QApplication::translate("DebuggerUI", "&Toggle Breakpoint", 0, QApplication::UnicodeUTF8));
        action_Toggle_Breakpoint->setShortcut(QApplication::translate("DebuggerUI", "F2", 0, QApplication::UnicodeUTF8));
        action_Configure_Debugger->setText(QApplication::translate("DebuggerUI", "&Configure Debugger", 0, QApplication::UnicodeUTF8));
        actionAbout_QT->setText(QApplication::translate("DebuggerUI", "About &QT", 0, QApplication::UnicodeUTF8));
        action_Breakpoint_Manager->setText(QApplication::translate("DebuggerUI", "&Breakpoint Manager", 0, QApplication::UnicodeUTF8));
        actionApplication_Arguments->setText(QApplication::translate("DebuggerUI", "Application &Arguments", 0, QApplication::UnicodeUTF8));
        actionRun_Until_Return->setText(QApplication::translate("DebuggerUI", "Run &Until Return", 0, QApplication::UnicodeUTF8));
        action_Step_Into_Pass_Signal_To_Application->setText(QApplication::translate("DebuggerUI", "&Step Into (Pass Signal To Application)", 0, QApplication::UnicodeUTF8));
        action_Step_Into_Pass_Signal_To_Application->setShortcut(QApplication::translate("DebuggerUI", "Shift+F7", 0, QApplication::UnicodeUTF8));
        action_Step_Over_Pass_Signal_To_Application->setText(QApplication::translate("DebuggerUI", "&Step Over (Pass Signal To Application)", 0, QApplication::UnicodeUTF8));
        action_Step_Over_Pass_Signal_To_Application->setShortcut(QApplication::translate("DebuggerUI", "Shift+F8", 0, QApplication::UnicodeUTF8));
        action_Run_Pass_Signal_To_Application->setText(QApplication::translate("DebuggerUI", "&Run (Pass Signal To Application)", 0, QApplication::UnicodeUTF8));
        action_Run_Pass_Signal_To_Application->setShortcut(QApplication::translate("DebuggerUI", "Shift+F9", 0, QApplication::UnicodeUTF8));
        action_Recent_Files->setText(QApplication::translate("DebuggerUI", "&Recent Files", 0, QApplication::UnicodeUTF8));
        actionApplication_Working_Directory->setText(QApplication::translate("DebuggerUI", "Application &Working Directory", 0, QApplication::UnicodeUTF8));
        action_Kill->setText(QApplication::translate("DebuggerUI", "&Kill", 0, QApplication::UnicodeUTF8));
        action_Plugins->setText(QApplication::translate("DebuggerUI", "&Plugins", 0, QApplication::UnicodeUTF8));
        action_Threads->setText(QApplication::translate("DebuggerUI", "&Threads", 0, QApplication::UnicodeUTF8));
        action_Threads->setShortcut(QApplication::translate("DebuggerUI", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        menu_help->setTitle(QApplication::translate("DebuggerUI", "&Help", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("DebuggerUI", "&View", 0, QApplication::UnicodeUTF8));
        menu_Plugins->setTitle(QApplication::translate("DebuggerUI", "&Plugins", 0, QApplication::UnicodeUTF8));
        menu_Options->setTitle(QApplication::translate("DebuggerUI", "&Options", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("DebuggerUI", "&File", 0, QApplication::UnicodeUTF8));
        menu_Debug->setTitle(QApplication::translate("DebuggerUI", "&Debug", 0, QApplication::UnicodeUTF8));
        registersDock->setWindowTitle(QApplication::translate("DebuggerUI", "Registers", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = registerList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("DebuggerUI", "1", 0, QApplication::UnicodeUTF8));
        dataDock->setWindowTitle(QApplication::translate("DebuggerUI", "Data Dump", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DebuggerUI", "00000000-00000000", 0, QApplication::UnicodeUTF8));
        stackDock->setWindowTitle(QApplication::translate("DebuggerUI", "Stack", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("DebuggerUI", "ToolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DebuggerUI: public Ui_DebuggerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGERUI_H
