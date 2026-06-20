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
#include <QtWidgets/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout;
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
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        Start = new QPushButton(Menu);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(325, 150, 141, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Start->sizePolicy().hasHeightForWidth());
        Start->setSizePolicy(sizePolicy);
        Start->setMaximumSize(QSize(150, 16777215));
        Start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        Exit = new QPushButton(Menu);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(325, 225, 141, 41));
        Exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        label = new QLabel(Menu);
        label->setObjectName("label");
        label->setGeometry(QRect(325, 60, 161, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #B44CFF;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        stackedWidget->addWidget(Menu);
        Result = new QWidget();
        Result->setObjectName("Result");
        resultLabel = new QLabel(Result);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(360, 90, 111, 31));
        resultLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #3DFF7A;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        btnRestart = new QPushButton(Result);
        btnRestart->setObjectName("btnRestart");
        btnRestart->setGeometry(QRect(345, 175, 121, 41));
        btnRestart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnChar = new QPushButton(Result);
        btnChar->setObjectName("btnChar");
        btnChar->setGeometry(QRect(315, 245, 181, 41));
        btnChar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnMenu = new QPushButton(Result);
        btnMenu->setObjectName("btnMenu");
        btnMenu->setGeometry(QRect(345, 315, 121, 41));
        btnMenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        stackedWidget->addWidget(Result);
        Character = new QWidget();
        Character->setObjectName("Character");
        btnSword = new QPushButton(Character);
        btnSword->setObjectName("btnSword");
        btnSword->setGeometry(QRect(125, 183, 101, 41));
        btnSword->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnSamurai = new QPushButton(Character);
        btnSamurai->setObjectName("btnSamurai");
        btnSamurai->setGeometry(QRect(125, 283, 101, 41));
        btnSamurai->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnFast = new QPushButton(Character);
        btnFast->setObjectName("btnFast");
        btnFast->setGeometry(QRect(325, 183, 101, 41));
        btnFast->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnHeavyArcher = new QPushButton(Character);
        btnHeavyArcher->setObjectName("btnHeavyArcher");
        btnHeavyArcher->setGeometry(QRect(320, 283, 101, 41));
        btnHeavyArcher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnFire = new QPushButton(Character);
        btnFire->setObjectName("btnFire");
        btnFire->setGeometry(QRect(525, 183, 101, 41));
        btnFire->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnIce = new QPushButton(Character);
        btnIce->setObjectName("btnIce");
        btnIce->setGeometry(QRect(525, 283, 101, 41));
        btnIce->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnElectro = new QPushButton(Character);
        btnElectro->setObjectName("btnElectro");
        btnElectro->setGeometry(QRect(508, 383, 131, 41));
        btnElectro->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        label_2 = new QLabel(Character);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(275, 40, 221, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #4ED9C2;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        btnCross = new QPushButton(Character);
        btnCross->setObjectName("btnCross");
        btnCross->setGeometry(QRect(308, 383, 131, 41));
        btnCross->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        btnLongMan = new QPushButton(Character);
        btnLongMan->setObjectName("btnLongMan");
        btnLongMan->setGeometry(QRect(108, 383, 131, 41));
        btnLongMan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        label_3 = new QLabel(Character);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 130, 81, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #9AA0A6;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        label_4 = new QLabel(Character);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 130, 81, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #8B5A2B;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        label_5 = new QLabel(Character);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 130, 81, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #4AA3FF;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        Back = new QPushButton(Character);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(0, 0, 101, 41));
        Back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        stackedWidget->addWidget(Character);
        Game = new QWidget();
        Game->setObjectName("Game");
        btn1 = new QPushButton(Game);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(100, 450, 101, 41));
        btn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #555555;\n"
"    color: #999999;\n"
"}"));
        btn2 = new QPushButton(Game);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(308, 450, 101, 41));
        btn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #555555;\n"
"    color: #999999;\n"
"}"));
        btn3 = new QPushButton(Game);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(520, 450, 101, 41));
        btn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #555555;\n"
"    color: #999999;\n"
"}"));
        enemylogLabel = new QLabel(Game);
        enemylogLabel->setObjectName("enemylogLabel");
        enemylogLabel->setGeometry(QRect(0, 120, 181, 31));
        enemylogLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,150);\n"
"color: white;\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        btnSkip = new QPushButton(Game);
        btnSkip->setObjectName("btnSkip");
        btnSkip->setGeometry(QRect(699, 503, 91, 41));
        btnSkip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2f3542;\n"
"    color: white;\n"
"    border: 2px solid #57606f;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #57606f;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #747d8c;\n"
"}"));
        playerHpBar = new QProgressBar(Game);
        playerHpBar->setObjectName("playerHpBar");
        playerHpBar->setGeometry(QRect(200, 400, 321, 31));
        playerHpBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #ff4757;\n"
"}"));
        playerHpBar->setValue(100);
        playerHpBar->setTextVisible(true);
        enemyHpBar = new QProgressBar(Game);
        enemyHpBar->setObjectName("enemyHpBar");
        enemyHpBar->setGeometry(QRect(200, 60, 321, 31));
        enemyHpBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #ff4757;\n"
"}"));
        enemyHpBar->setValue(100);
        enemyHpBar->setTextVisible(true);
        playerlogLabel = new QLabel(Game);
        playerlogLabel->setObjectName("playerlogLabel");
        playerlogLabel->setGeometry(QRect(0, 335, 180, 31));
        playerlogLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,150);\n"
"color: white;\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        playerclass = new QLabel(Game);
        playerclass->setObjectName("playerclass");
        playerclass->setGeometry(QRect(305, 335, 140, 31));
        playerclass->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #3B82F6;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        enemyclass = new QLabel(Game);
        enemyclass->setObjectName("enemyclass");
        enemyclass->setGeometry(QRect(305, 120, 131, 31));
        enemyclass->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #E53935;\n"
"    font-size: 20px;\n"
"font-family: Consolas;\n"
"}\n"
""));
        stackedWidget->addWidget(Game);

        horizontalLayout->addWidget(stackedWidget);

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
