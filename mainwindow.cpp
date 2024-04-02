#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    swindow = new SecondMainWindow();
    connect(swindow, &SecondMainWindow::first,this,&MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString logClient=ui->Login->text();
    QString pasCLient=ui->Password->text();
    if(logClient=="abc" && pasCLient=="1092"){
            if(logClient=="abc" && pasCLient=="1092")
            {
                QMessageBox::information(this,"Авторизация","Вы успешно зарегестрировались!");
                QMessageBox::StandardButton quest=QMessageBox::question(this,"Проверка на бота","Вы желаете заказать такси?");
                if(quest==QMessageBox::Yes){
                    swindow->show();
                }
                else{
                    QMessageBox::information(this,"Авторизация","Вы отменили авторизацию:(");
                }
            }
    }
    else{
        QMessageBox::critical(this,"Авторизация","Вы не зарегестрировались:(");
    }
}
