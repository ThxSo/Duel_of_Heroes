#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include "Classes.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateUI();
    void updateButtons();
    void playerTurn(int index);
    void startGame();

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btnSword_clicked();

    void on_btnSamurai_clicked();

    void on_btnLongMan_clicked();

    void on_btnFast_clicked();

    void on_btnHeavyArcher_clicked();

    void on_btnCross_clicked();

    void on_btnFire_clicked();

    void on_btnIce_clicked();

    void on_btnElectro_clicked();

    void on_Start_clicked();

    void on_Exit_clicked();

    void on_Back_clicked();

    void on_btnSkip_clicked();

    void checkGameOver();

    void on_btnChar_clicked();

    void on_btnMenu_clicked();

    void on_btnRestart_clicked();

    //void updateSprites();

    QString getClassName(int id);

    int AI();

private:
    Ui::MainWindow *ui;

    Character* player;
    Character* enemy;

    int selectedClass;
};
#endif // MAINWINDOW_H
