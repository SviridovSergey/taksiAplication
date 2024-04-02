#include "secondmainwindow.h"
#include "ui_secondmainwindow.h"
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

    QMessageBox::information(this,"Заказ","заказ принят");

}
void SecondMainWindow::on_pushButton_2_clicked()
{
    QString otkuda=ui->otkuda->text();
    QString kuda=ui->kuda->text();
    if(otkuda==" " || kuda==" "){
        QMessageBox::warning(this,"Ошибка","Вы не вписали все до конца,впишите всю информацию чтобы продолжить");
    }
    else{
        QMessageBox::warning(this,"Ошибка","Вы не вписали все до конца,впишите всю информацию чтобы продолжить");
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

        if(pButtonYes1){
                  QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
                  QMessageBox::question(this,"Подтверждение","Ваше такси: Эконом");
                  if(QMessageBox::Yes){
                       QMessageBox::information(this,"Конец","Замечательно");
                  }
                  else if(QMessageBox::No){
                      QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
                  }
                  QMessageBox::information(this,"Подтверждение","Цена за такси класса Эконом:200Р");
                  QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Эконом:10 минут");
                  QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
                  while(counter<=300){
                      counter+=100;
                      if(counter==300){
                           QCoreApplication::quit();
                      }
                  }
        }

        else if(pButtonYes2){
              QMessageBox::question(this,"Подтверждение","Ваше такси: Комфорт");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Комфорт:300Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Комфорт:9 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        else if(pButtonYes3){
              QMessageBox::question(this,"Подтверждение","Ваше такси: Комфорт+");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Комфорт+:450Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Комфорт+:8 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        else if(pButtonYes4){
              QMessageBox::question(this,"Подтверждение","Ваше такси: Bisness");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No) {
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Bisness:600Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Bisness+:7 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

    }

    else if(index==1){
        QMessageBox msgBox;

        msgBox.setText(tr("выберите такси для своего ребенка:"));
        QAbstractButton* pButtonYes1 = msgBox.addButton(tr("Детский"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes2 = msgBox.addButton(tr("Комфорт-Детский"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes3 = msgBox.addButton(tr("Комфорт+-Детский"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes4 = msgBox.addButton(tr("Bisness-Детский"), QMessageBox::YesRole);

        msgBox.exec();

        if(pButtonYes1){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше такси: Детский");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No) {
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Детский:200Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Детский:14 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        else if(pButtonYes2){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше такси: Комфорт-Детский");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Комфорт-Детский:250Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Комфорт-Детский:13 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        else if(pButtonYes3){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше такси: Комфорт+-Детский");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Комфорт+-Детский:350Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Комфорт+-Детский:12 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        else if(pButtonYes4){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше такси: Bisness-Детский");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат такси");
              }
              QMessageBox::information(this,"Подтверждение","Цена за такси класса Bisness-Детский:400Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания такси класса Bisness-Детский:10 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }
    }

    else if(index==2){
        QMessageBox msgBox;

        msgBox.setText(tr("выберите время для машины:"));
        QAbstractButton* pButtonYes1 = msgBox.addButton(tr("от 1 дня"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes2 = msgBox.addButton(tr("2-4 часа"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes3 = msgBox.addButton(tr("Грузовой"), QMessageBox::YesRole);
        QAbstractButton* pButtonYes4 = msgBox.addButton(tr("Экспресс"), QMessageBox::YesRole);

        msgBox.exec();

        if(pButtonYes1){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше время машины: от 1 дня");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No) {
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат доставки");
              }
              QMessageBox::information(this,"Подтверждение","Цена время машины: от 1 дня:300Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания машины от 1 дня :10 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        if(pButtonYes2){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше время машины: 2-4 часа");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат доставки");
              }
              QMessageBox::information(this,"Подтверждение","Цена Ваше время машины: 2-4 часа:500Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания машины 2-4 часа :8 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        if(pButtonYes3){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваш тип машины:Грузовой");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат доставки");
              }
              QMessageBox::information(this,"Подтверждение","Цена за грузовую машину:700Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания Грузовой машины :20 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }

        else if (pButtonYes4){
              QMessageBox::information(this,"Уточнение","Щас проверим правильно ли вы все ввели");
              QMessageBox::question(this,"Подтверждение","Ваше такси: Экспресс");
              if(QMessageBox::Yes){
                   QMessageBox::information(this,"Конец","Замечательно");
              }
              else if(QMessageBox::No){
                  QMessageBox::information(this,"Ошибка","Еще раз проверьте правильно ли вы выбарли варинат доставки");
              }
              QMessageBox::information(this,"Подтверждение","Цена Экспресс:1000Р");
              QMessageBox::information(this,"Подтверждение","Время ожидания Экспресс машины :15 минут");
              QMessageBox::information(this,"Информация","Программа сама закроется,подготовтесь");
              while(counter<=300){
                  counter+=100;
                  if(counter==300){
                       QCoreApplication::quit();
                  }
              }
        }
    }
}

