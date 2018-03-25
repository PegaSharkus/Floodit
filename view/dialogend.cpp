#include "dialogend.h"
#include "ui_dialogend.h"

DialogEnd::DialogEnd(int score, int record, std::string name, std::string nameRec, QWidget *parent) : QDialog(parent), ui(new Ui::DialogEnd){
    ui->setupUi(this);
    ui->endLb->setText("You win, "+QString::fromStdString(name));
    ui->moveLb->setText(QString::number(score)+" moves");
    if(record == 0){
        ui->recordLb->setText("It's a new record !");
    } else{
        ui->recordLb->setText("The record with these settings is : "+QString::number(record)+" performed by : "+QString::fromStdString(nameRec));
    }
    connect(ui->replayBtn, &QPushButton::clicked, this, &DialogEnd::replay);
    connect(ui->quitBtn, &QPushButton::clicked, this, &QCoreApplication::quit);
}

void DialogEnd::replay(){
    QDialog::accept();
}

DialogEnd::~DialogEnd(){
    delete ui;
}
