#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "secondmainwindow.h"
#include <vector>
#include <QAbstractButton>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();
private:
    Ui::MainWindow *ui;
    SecondMainWindow *swindow;
};
#endif // MAINWINDOW_H
