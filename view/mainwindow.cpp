#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtUtil.h"
#include "dialogend.h"
#include <iostream>

using namespace G40853;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->actionExit, &QAction::triggered, this, &QCoreApplication::quit);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->blueButton, &QPushButton::clicked, this, &MainWindow::paintBlue);
    connect(ui->greenButton, &QPushButton::clicked, this, &MainWindow::paintGreen);
    connect(ui->redButton, &QPushButton::clicked, this, &MainWindow::paintRed);
    connect(ui->yellowButton, &QPushButton::clicked, this, &MainWindow::paintYellow);
    connect(ui->purpleButton, &QPushButton::clicked, this, &MainWindow::paintPurple);
    connect(ui->orangeButton, &QPushButton::clicked, this, &MainWindow::paintOrange);
    ui->blueButton->setDisabled(true);
    ui->greenButton->setDisabled(true);
    ui->redButton->setDisabled(true);
    ui->yellowButton->setDisabled(true);
    ui->purpleButton->setDisabled(true);
    ui->orangeButton->setDisabled(true);
    game_.addObserver(this);
}

MainWindow::~MainWindow() noexcept{
    game_.removeObserver(this);
    delete ui;
}

void MainWindow::update(Subject *){
    refreshBoard();
    ui->lbMoves->setText(QString::number(game_.getMoveNb()));
    if(game_.isEnded()){
        ui->blueButton->setDisabled(true);
        ui->greenButton->setDisabled(true);
        ui->redButton->setDisabled(true);
        ui->purpleButton->setDisabled(true);
        ui->yellowButton->setDisabled(true);
        ui->orangeButton->setDisabled(true);

        DialogEnd dEnd(game_.getMoveNb(),game_.getRecord(), game_.getName(), game_.getNameRec(), this);
        dEnd.setWindowTitle("Game Over");
        dEnd.exec();

        ui->nameLb->show();
        ui->nameEdit->show();
        ui->heightSpBox->show();
        ui->widthSpBox->show();
        ui->dimLb->show();
        ui->colorSpBox->show();
        ui->nbColorLb->show();
        ui->colorSpBox->show();
        ui->nbColorLb->show();
        ui->startButton->show();
    }
}

void MainWindow::generateBoard(){
    std::map<Position, Color> board {game_.getBoard().getBoard()};
    for(auto it = board.begin(); it != board.end(); ++it){
        QLabel *lb = new QLabel(this);
        QString colorName {translateColor(it->second)};
        setStyleSheet(lb, colorName);
        lb->setText(colorName);
        lb->setFixedSize(30,30);
        ui->gridLayout->addWidget(lb, it->first.getY(), it->first.getX(), 1, 1);
    }
}

void MainWindow::setStyleSheet(QLabel *lb, QString colorName){
    QString styleSheet = "QLabel{"
                         "background-color: %1;"
                         "color: %1;}";
    lb->setStyleSheet(styleSheet.arg(colorName));
}

void MainWindow::refreshBoard(){

    std::map<Position, Color> board {game_.getBoard().getBoard()};
    for(auto it = board.begin(); it != board.end(); ++it){
        QLabel *oldLb = qobject_cast<QLabel*>(ui->gridLayout->itemAtPosition(it->first.getY(), it->first.getX())->widget());

        QString colorName {translateColor(it->second)};
        if(oldLb->text().compare(colorName)){
            oldLb->setText(colorName);
            setStyleSheet(oldLb, colorName);
        }
    }
}

void MainWindow::eraseBoard(){
    QLayoutItem *child;
    while((child = ui->gridLayout->takeAt(0)) != 0){
        delete child->widget();
    }
}

void MainWindow::startGame(){
    std::string name = ui->nameEdit->text().toStdString();

    ui->nameLb->hide();
    ui->nameEdit->hide();

    unsigned height = ui->heightSpBox->value();
    unsigned width = ui->widthSpBox->value();

    ui->heightSpBox->hide();
    ui->widthSpBox->hide();
    ui->dimLb->hide();

    unsigned colorNb = ui->colorSpBox->value();

    switch (colorNb) {
    case 6:
        ui->purpleButton->setDisabled(false);
    case 5:
        ui->orangeButton->setDisabled(false);
    case 4:
        ui->yellowButton->setDisabled(false);
    default:
        ui->blueButton->setDisabled(false);
        ui->greenButton->setDisabled(false);
        ui->redButton->setDisabled(false);
        break;
    }
    ui->colorSpBox->hide();
    ui->nbColorLb->hide();

    game_.setFloodIt(name, height, width, colorNb);
    eraseBoard();
    generateBoard();

    ui->startButton->hide();
    update(&game_);
}

void MainWindow::paintBlue(){
    game_.paintZone(Color::BLUE);
}

void MainWindow::paintPurple(){
    game_.paintZone(Color::PURPLE);
}

void MainWindow::paintRed(){
    game_.paintZone(Color::RED);
}

void MainWindow::paintOrange(){
    game_.paintZone(Color::ORANGE);
}

void MainWindow::paintYellow(){
    game_.paintZone(Color::YELLOW);
}

void MainWindow::paintGreen(){
    game_.paintZone(Color::GREEN);
}
