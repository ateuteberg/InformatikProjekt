#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

     struct ThemenGebiet
    {
        QString Frage;
        std::vector<std::pair<QString, bool> > Antworten;
    };

    void FillButtons(ThemenGebiet tgb);




private slots:
    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    ThemenGebiet Themengebiet[];
};

#endif // MAINWINDOW_H
