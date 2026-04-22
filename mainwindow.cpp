#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = nullptr;
    enemy = nullptr;
    selectedClass = -1;

    ui->stackedWidget->setCurrentWidget(ui->Menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateButtons()
{
    if (!player) return;

    ui->btn1->setText(QString::fromStdString(player->abilities[0].name));
    ui->btn2->setText(QString::fromStdString(player->abilities[1].name));
    ui->btn3->setText(QString::fromStdString(player->abilities[2].name));

    ui->btn1->setEnabled(player->abilities[0].currentCooldown == 0);
    ui->btn2->setEnabled(player->abilities[1].currentCooldown == 0);
    ui->btn3->setEnabled(player->abilities[2].currentCooldown == 0);

    ui->btnSkip->setEnabled(true);
}

void MainWindow::updateUI()
{
    if (!player || !enemy) return;

    ui->playerHpBar->setMaximum(player->getMaxHP());
    ui->playerHpBar->setValue(player->getHP());

    ui->enemyHpBar->setMaximum(enemy->getMaxHP());
    ui->enemyHpBar->setValue(enemy->getHP());

    int hpP = (player->getHP() * 100) / player->getMaxHP();
    int hpE = (enemy->getHP() * 100) / enemy->getMaxHP();

    if (hpP > 60)
        ui->playerHpBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    else if (hpP > 30)
        ui->playerHpBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    else
        ui->playerHpBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");


    if (hpE > 60)
        ui->enemyHpBar->setStyleSheet("QProgressBar::chunk { background-color: green; }");
    else if (hpE > 30)
        ui->enemyHpBar->setStyleSheet("QProgressBar::chunk { background-color: yellow; }");
    else
        ui->enemyHpBar->setStyleSheet("QProgressBar::chunk { background-color: red; }");
}

void MainWindow::on_btn1_clicked()
{
    playerTurn(0);
}


void MainWindow::on_btn2_clicked()
{
    playerTurn(1);
}


void MainWindow::on_btn3_clicked()
{
    playerTurn(2);
}

void MainWindow:: startGame()
{
    if(player) {
        delete player;
        player = nullptr;
    }

    if(enemy) {
        delete enemy;
        enemy = nullptr;
    }

    switch (selectedClass)
    {
    case 0: player = new SwordMan(); break;
    case 1: player = new Samurai(); break;
    case 2: player = new LongSwordMan(); break;
    case 3: player = new FastArcher(); break;
    case 4: player = new HeavyArcher(); break;
    case 5: player = new CrossBowMan(); break;
    case 6: player = new FireMage(); break;
    case 7: player = new IceMage(); break;
    case 8: player = new ElectroMage(); break;
    }

    int enemyClass = rand() % 9;

    switch (enemyClass)
    {
    case 0: enemy = new SwordMan(); break;
    case 1: enemy = new Samurai(); break;
    case 2: enemy = new LongSwordMan(); break;
    case 3: enemy = new FastArcher(); break;
    case 4: enemy = new HeavyArcher(); break;
    case 5: enemy = new CrossBowMan(); break;
    case 6: enemy = new FireMage(); break;
    case 7: enemy = new IceMage(); break;
    case 8: enemy = new ElectroMage(); break;
    }

    //updateSprites();

    ui->stackedWidget->setCurrentWidget(ui->Game);
    ui->playerclass->setText(getClassName(selectedClass));
    ui->enemyclass->setText(getClassName(enemyClass));

    updateUI();
    updateButtons();
}


void MainWindow::on_btnSword_clicked()
{
    selectedClass = 0;
    startGame();
}


void MainWindow::on_btnSamurai_clicked()
{
    selectedClass = 1;
    startGame();
}


void MainWindow::on_btnLongMan_clicked()
{
    selectedClass = 2;
    startGame();
}


void MainWindow::on_btnFast_clicked()
{
    selectedClass = 3;
    startGame();
}


void MainWindow::on_btnHeavyArcher_clicked()
{
    selectedClass = 4;
    startGame();
}


void MainWindow::on_btnCross_clicked()
{
    selectedClass = 5;
    startGame();
}


void MainWindow::on_btnFire_clicked()
{
    selectedClass = 6;
    startGame();
}


void MainWindow::on_btnIce_clicked()
{
    selectedClass = 7;
    startGame();
}


void MainWindow::on_btnElectro_clicked()
{
    selectedClass = 8;
    startGame();
}


void MainWindow::on_Start_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Character);
}


void MainWindow::on_Back_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Menu);
}


void MainWindow::on_Exit_clicked()
{
    close();
}

void MainWindow::playerTurn(int index){
    QString playerText;
    QString enemyText;

    if (player->ifFrozen())
    {
        playerText = "You are Frozen";
    }
    else
    {
        Effect e = player->useAbility(index);

        if (e.damage == 0 && e.heal == 0)
        {
            playerText = "Cooldown ";
        }
        else
        {
            enemy->applyEffect(e);

            playerText = "You: ";

            if (e.damage > 0)
                playerText += "DMG " + QString::number(e.damage) + " ";

            if (e.crit)
                playerText += "Crit ";

            if (e.poison)
                playerText += "Poison ";

            if (e.burn)
                playerText += "Burn ";

            if (e.freeze)
                playerText += "Freeze ";
        }
        int aiindex = AI();
        Effect e2 = enemy->useAbility(aiindex);
        player->applyEffect(e2);

        enemyText = "Enemy: ";

        if (e2.damage > 0)
            enemyText += "DMG " + QString::number(e2.damage) + " ";

        if (e2.crit)
            enemyText += "Crit ";

        if (e2.poison)
            enemyText += "Poison ";

        if (e2.burn)
            enemyText += "Burn ";

        if (e2.freeze)
            enemyText += "Freeze ";
    }

    player->updateStatus();
    enemy->updateStatus();

    updateUI();
    updateButtons();

    checkGameOver();

    ui->playerlogLabel->setText(playerText);
    ui->enemylogLabel->setText(enemyText);
}


void MainWindow::on_btnSkip_clicked()
{
    if (player->ifFrozen()){
        ui->playerlogLabel->setText("Frozen (skip)");
        player->updateStatus();
        enemy->updateStatus();
        updateUI();
        updateButtons();
        return;
    }

    int aiindex = AI();
    Effect e2 = enemy->useAbility(aiindex);
    player->applyEffect(e2);

    player->updateStatus();
    enemy->updateStatus();

    updateUI();
    updateButtons();

    QString text = "Skipped turn ";

    if (e2.damage>0)
        text += "Enemy dealt" + QString::number(e2.damage);

    ui->playerlogLabel->setText(text);
}

void MainWindow::checkGameOver(){
    if (!player || !enemy) return;

    if(!player->isAlive()){
        ui->resultLabel->setText("You Lose");
        ui->stackedWidget->setCurrentWidget(ui->Result);
    }
    else if(!enemy->isAlive()){
        ui->resultLabel->setText("You Win");
        ui->stackedWidget->setCurrentWidget(ui->Result);
    }
}


void MainWindow::on_btnChar_clicked()
{
    if (player) {
        delete player;
        player = nullptr;
    }

    if (enemy) {
        delete enemy;
        enemy = nullptr;
    }

    ui->stackedWidget->setCurrentWidget(ui->Character);
}


void MainWindow::on_btnMenu_clicked()
{
    delete player;
    delete enemy;

    player = nullptr;
    enemy = nullptr;

    ui->stackedWidget->setCurrentWidget(ui->Menu);
}


void MainWindow::on_btnRestart_clicked()
{
    startGame();
}

/*void MainWindow::updateSprites(){
    if(!player) return;

    QString path;

    switch (selectedClass){
        case 0: path = ":/i/images/monkey.png"; break;
        case 1: path = ":/images/swordman.png"; break;
        case 2: path = ":/images/swordman.png"; break;
        case 3: path = ":/images/swordman.png"; break;
        case 4: path = ":/images/swordman.png"; break;
        case 5: path = ":/images/swordman.png"; break;
        case 6: path = ":/images/swordman.png"; break;
        case 7: path = ":/images/swordman.png"; break;
        case 8: path = ":/images/swordman.png"; break;
    }

        QPixmap pix(path);

        if (pix.isNull())
        {
            ui->enemylogLabel->setText("IMAGE NOT FOUND");
            return;
        }

        ui->playerSprite->setPixmap(pix.scaled(64,64, Qt::KeepAspectRatio));
}*/

QString MainWindow::getClassName(int id){
    switch (id) {
    case 0: return "SwordMan";
    case 1: return "Samurai";
    case 2: return "LongSwordMan";
    case 3: return "FastArcher";
    case 4: return "HeavyArcher";
    case 5: return "CrossBowMan";
    case 6: return "FireMage";
    case 7: return "IceMage";
    case 8: return "ElectroMage";
    }
    return "Unknow";
}

int MainWindow::AI(){

    if(enemy->getHP() < 30){
        for(int i = 0; i < 3; i++){
            if (enemy->abilities[i].heal > 0 &&
                enemy->abilities[i].currentCooldown == 0)
                return i;
        }
    }

    int best = -1;
    int maxdmg = -1;

    for(int i = 0; i < 3; i++){
        if(enemy->abilities[i].currentCooldown == 0){
            if (enemy->abilities[i].damage > maxdmg){
                maxdmg = enemy->abilities[i].damage;
                best = i;
            }
        }
    }

    if (best == -1)
        return rand() % 3;

    return best;
}

