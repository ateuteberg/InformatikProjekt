#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "string"
#include "vector"
#include "utility"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton->setText("Herzlich Willkommen zum QuizGame.""\n""Hier drücken um zu starten.");
}


MainWindow::~MainWindow()
{
    delete ui;

    std::string FrageButtonText;

    struct Frage
    {
        std::string Fragestellung;
        std::vector<std::pair<std::string, bool> > Antworten;
    };

    struct Frage Themengebiet[1];
    Themengebiet[0].Fragestellung = "1+1=";

    Themengebiet[0].Antworten.push_back(std::make_pair("1",false));
    std::cout << Themengebiet[0].Antworten[0].first << "ist" << std::boolalpha << Themengebiet[0].Antworten[0].second;

    Themengebiet[0].Antworten.push_back(std::make_pair("1",false));
    std::cout << Themengebiet[0].Antworten[1].first << "ist" << std::boolalpha << Themengebiet[0].Antworten[1].second;

    Themengebiet[0].Antworten.push_back(std::make_pair("1",false));
    std::cout << Themengebiet[0].Antworten[2].first << "ist" << std::boolalpha << Themengebiet[0].Antworten[2].second;

    Themengebiet[0].Antworten.push_back(std::make_pair("1",false));
    std::cout << Themengebiet[0].Antworten[3].first << "ist" << std::boolalpha << Themengebiet[0].Antworten[3].second;

    FrageButtonText = Themengebiet[0].Antworten[0].first;
    if (ui->pushButton->clicked)
    {
        ui->pushButton_2->setText(FrageButtonText);
    };

}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);

}

void MainWindow::on_pushButton_6_clicked()
{
    this->close();
}