/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Menu;
    QPushButton *Start;
    QPushButton *Exit;
    QLabel *label;
    QWidget *Result;
    QLabel *resultLabel;
    QPushButton *btnRestart;
    QPushButton *btnChar;
    QPushButton *btnMenu;
    QWidget *Character;
    QPushButton *btnSword;
    QPushButton *btnSamurai;
    QPushButton *btnFast;
    QPushButton *btnHeavyArcher;
    QPushButton *btnFire;
    QPushButton *btnIce;
    QPushButton *btnElectro;
    QLabel *label_2;
    QPushButton *btnCross;
    QPushButton *btnLongMan;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *Back;
    QWidget *Game;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QLabel *enemylogLabel;
    QPushButton *btnSkip;
    QProgressBar *playerHpBar;
    QProgressBar *enemyHpBar;
    QLabel *playerlogLabel;
    QLabel *playerclass;
    QLabel *enemyclass;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 581));
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        Start = new QPushButton(Menu);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(350, 180, 80, 24));
        Exit = new QPushButton(Menu);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(350, 260, 80, 24));
        label = new QLabel(Menu);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 30, 81, 16));
        stackedWidget->addWidget(Menu);
        Result = new QWidget();
        Result->setObjectName("Result");
        resultLabel = new QLabel(Result);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(370, 90, 71, 31));
        btnRestart = new QPushButton(Result);
        btnRestart->setObjectName("btnRestart");
        btnRestart->setGeometry(QRect(350, 200, 80, 24));
        btnChar = new QPushButton(Result);
        btnChar->setObjectName("btnChar");
        btnChar->setGeometry(QRect(330, 250, 121, 24));
        btnMenu = new QPushButton(Result);
        btnMenu->setObjectName("btnMenu");
        btnMenu->setGeometry(QRect(350, 300, 80, 24));
        stackedWidget->addWidget(Result);
        Character = new QWidget();
        Character->setObjectName("Character");
        btnSword = new QPushButton(Character);
        btnSword->setObjectName("btnSword");
        btnSword->setGeometry(QRect(135, 200, 80, 24));
        btnSamurai = new QPushButton(Character);
        btnSamurai->setObjectName("btnSamurai");
        btnSamurai->setGeometry(QRect(135, 300, 80, 24));
        btnFast = new QPushButton(Character);
        btnFast->setObjectName("btnFast");
        btnFast->setGeometry(QRect(330, 200, 80, 24));
        btnHeavyArcher = new QPushButton(Character);
        btnHeavyArcher->setObjectName("btnHeavyArcher");
        btnHeavyArcher->setGeometry(QRect(330, 300, 101, 24));
        btnFire = new QPushButton(Character);
        btnFire->setObjectName("btnFire");
        btnFire->setGeometry(QRect(530, 200, 80, 24));
        btnIce = new QPushButton(Character);
        btnIce->setObjectName("btnIce");
        btnIce->setGeometry(QRect(530, 300, 80, 24));
        btnElectro = new QPushButton(Character);
        btnElectro->setObjectName("btnElectro");
        btnElectro->setGeometry(QRect(530, 400, 101, 24));
        label_2 = new QLabel(Character);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(315, 40, 151, 16));
        btnCross = new QPushButton(Character);
        btnCross->setObjectName("btnCross");
        btnCross->setGeometry(QRect(325, 400, 111, 24));
        btnLongMan = new QPushButton(Character);
        btnLongMan->setObjectName("btnLongMan");
        btnLongMan->setGeometry(QRect(125, 400, 111, 24));
        label_3 = new QLabel(Character);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 130, 49, 16));
        label_4 = new QLabel(Character);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 130, 49, 16));
        label_5 = new QLabel(Character);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 130, 49, 16));
        Back = new QPushButton(Character);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(0, 0, 80, 24));
        stackedWidget->addWidget(Character);
        Game = new QWidget();
        Game->setObjectName("Game");
        btn1 = new QPushButton(Game);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(120, 450, 80, 24));
        btn2 = new QPushButton(Game);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(320, 450, 80, 24));
        btn3 = new QPushButton(Game);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(520, 450, 80, 24));
        enemylogLabel = new QLabel(Game);
        enemylogLabel->setObjectName("enemylogLabel");
        enemylogLabel->setGeometry(QRect(10, 120, 181, 16));
        btnSkip = new QPushButton(Game);
        btnSkip->setObjectName("btnSkip");
        btnSkip->setGeometry(QRect(720, 530, 80, 24));
        playerHpBar = new QProgressBar(Game);
        playerHpBar->setObjectName("playerHpBar");
        playerHpBar->setGeometry(QRect(280, 400, 161, 23));
        playerHpBar->setValue(100);
        playerHpBar->setTextVisible(true);
        enemyHpBar = new QProgressBar(Game);
        enemyHpBar->setObjectName("enemyHpBar");
        enemyHpBar->setGeometry(QRect(280, 70, 161, 23));
        enemyHpBar->setValue(100);
        enemyHpBar->setTextVisible(true);
        playerlogLabel = new QLabel(Game);
        playerlogLabel->setObjectName("playerlogLabel");
        playerlogLabel->setGeometry(QRect(0, 310, 181, 16));
        playerclass = new QLabel(Game);
        playerclass->setObjectName("playerclass");
        playerclass->setGeometry(QRect(310, 350, 101, 16));
        enemyclass = new QLabel(Game);
        enemyclass->setObjectName("enemyclass");
        enemyclass->setGeometry(QRect(330, 120, 91, 16));
        stackedWidget->addWidget(Game);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Duel of Heros", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "               Result", nullptr));
        btnRestart->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        btnChar->setText(QCoreApplication::translate("MainWindow", "Choice of characters", nullptr));
        btnMenu->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        btnSword->setText(QCoreApplication::translate("MainWindow", "Sword Man", nullptr));
        btnSamurai->setText(QCoreApplication::translate("MainWindow", "Samurai", nullptr));
        btnFast->setText(QCoreApplication::translate("MainWindow", "Fast Archer", nullptr));
        btnHeavyArcher->setText(QCoreApplication::translate("MainWindow", "Heavy Archer", nullptr));
        btnFire->setText(QCoreApplication::translate("MainWindow", "Fire Mage", nullptr));
        btnIce->setText(QCoreApplication::translate("MainWindow", "Ice Mage", nullptr));
        btnElectro->setText(QCoreApplication::translate("MainWindow", "Electro Mage", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter your character", nullptr));
        btnCross->setText(QCoreApplication::translate("MainWindow", "Cross Bow Man", nullptr));
        btnLongMan->setText(QCoreApplication::translate("MainWindow", "Long Sword Man", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Knights", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Archers", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Mages", nullptr));
        Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "Attak 1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "Attak 2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "Attak 3", nullptr));
        enemylogLabel->setText(QCoreApplication::translate("MainWindow", "logLabel", nullptr));
        btnSkip->setText(QCoreApplication::translate("MainWindow", "Skip", nullptr));
        playerlogLabel->setText(QCoreApplication::translate("MainWindow", "logLabel", nullptr));
        playerclass->setText(QCoreApplication::translate("MainWindow", "Playar", nullptr));
        enemyclass->setText(QCoreApplication::translate("MainWindow", "Enemy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
