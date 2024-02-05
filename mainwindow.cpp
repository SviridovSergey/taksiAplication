#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondmainwindow.h"
#include <QMessageBox>
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
    QString log=ui->Login->text();
    QString pas=ui->Password->text();
    if(log=="abc" && pas=="1092"){
        QMessageBox::information(this,"Авторизация","Вы успешно зарегестрировались!");
        QMessageBox::StandardButton quest=QMessageBox::question(this,"Проверка на бота","Вы желаете заказать такси?");
        //добавить картинку с цифрами и соотвеств приколы
        if(quest==QMessageBox::Yes){
            swindow->show();
        }
        else{
            QMessageBox::information(this,"Авторизация","Вы отменили авторизацию:(");
        }
    }
    else{
        QMessageBox::critical(this,"Авторизация","Вы не зарегестрировались:(");
    }


}

