#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "string"
#include "map"
#include "vector"
#include "utility"



bool BoolAntwort1;
bool BoolAntwort2;
bool BoolAntwort3;
bool BoolAntwort4;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton->setText("Herzlich Willkommen zum QuizGame.""\n""Hier drücken um zu starten.");

    ThemenGebiet Themengebiet[2];
    Themengebiet[0].Frage = "Beispielfrage";
    Themengebiet[0].Antworten.push_back(std::make_pair("1",true));
    Themengebiet[0].Antworten.push_back(std::make_pair("2",false));
    Themengebiet[0].Antworten.push_back(std::make_pair("3",false));
    Themengebiet[0].Antworten.push_back(std::make_pair("4",false));

    Themengebiet[1].Frage = "Beispielfrage";
    Themengebiet[1].Antworten.push_back(std::make_pair("1",true));
    Themengebiet[1].Antworten.push_back(std::make_pair("2",false));
    Themengebiet[1].Antworten.push_back(std::make_pair("3",false));
    Themengebiet[1].Antworten.push_back(std::make_pair("4",false));


}


void MainWindow::FillButtons(ThemenGebiet tgb)
{
    ui->pushButton->setText(tgb.Frage);

    ui->pushButton_2->setText(tgb.Antworten[0].first);
    ui->pushButton_3->setText(tgb.Antworten[1].first);
    ui->pushButton_4->setText(tgb.Antworten[2].first);
    ui->pushButton_5->setText(tgb.Antworten[3].first);

    BoolAntwort1=tgb.Antworten[0].second;
    BoolAntwort2=tgb.Antworten[0].second;
    BoolAntwort3=tgb.Antworten[0].second;
    BoolAntwort4=tgb.Antworten[0].second;

}






MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);
    //this->FillButtons(Themengebiet[0]);
}

void MainWindow::on_pushButton_6_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    if(BoolAntwort1)
    {
        //messagbox anzeigen
        //this->FillButtons(Nächste Frage);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(BoolAntwort2)
    {
        //messagbox anzeigen
        //this->FillButtons(Nächste Frage);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(BoolAntwort3)
    {
        //messagbox anzeigen
        //this->FillButtons(Nächste Frage);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(BoolAntwort4)
    {
        //messagbox anzeigen
        //this->FillButtons(Nächste Frage);
    }
}

