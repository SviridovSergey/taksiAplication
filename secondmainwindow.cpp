#include "secondmainwindow.h"
#include "ui_secondmainwindow.h"
#include <QMessageBox>
#include <QComboBox>
SecondMainWindow::SecondMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondMainWindow)
{
    ui->setupUi(this);

}

SecondMainWindow::~SecondMainWindow()
{
    delete ui;
}
void SecondMainWindow::on_pushButton_clicked()
{

    QMessageBox::information(this,"Заказ","Ваш заказ принят в обработку..");

}

void SecondMainWindow::on_pushButton_2_clicked()
{
    QString otkuda=ui->otkuda->text();
    QString kuda=ui->kuda->text();
    if(otkuda!=0 || kuda!=0){
        QMessageBox::information(this,"Выбор варианта такси","Выберите варианты такси:");
    }
    else{
        QMessageBox::information(this,"Ошибка","Вы не вписали все до конца,впишите всю информацию чтобы продолжить");
    }

}

void SecondMainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(index==0){
        QMessageBox msgBox;
        msgBox.setText(tr("выберите такси:"));
        QAbstractButton* pButtonYes1 = msgBox.addButton(tr("Эконом"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes2 = msgBox.addButton(tr("Комфорт"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes3 = msgBox.addButton(tr("Комфорт+"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes4 = msgBox.addButton(tr("Bisness"), QMessageBox::YesRole);
        msgBox.exec();
    }
    else if(index==1){
        QMessageBox msgBox;
        msgBox.setText(tr("выберите такси:"));
        QAbstractButton* pButtonYes1 = msgBox.addButton(tr("Детский"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes2 = msgBox.addButton(tr("Комфорт"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes3 = msgBox.addButton(tr("Комфорт+"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes4 = msgBox.addButton(tr("Bisness"), QMessageBox::YesRole);
        msgBox.exec();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText(tr("выберите такси:"));
        QAbstractButton* pButtonYes1 = msgBox.addButton(tr("от 1 дня"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes2 = msgBox.addButton(tr("2-4 часа"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes3 = msgBox.addButton(tr("Грузовой"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes4 = msgBox.addButton(tr("Экспресс"), QMessageBox::YesRole);
        msgBox.exec();
    }
    //при выборе типа такси и нажатии на кнопку вызвать такси должно писать:цену,время,и тип такси и графика
}
