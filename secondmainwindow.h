#ifndef SECONDMAINWINDOW_H
#define SECONDMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
namespace Ui {
class SecondMainWindow;
}

class SecondMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondMainWindow(QWidget *parent = 0);
    ~SecondMainWindow();
signals:
    void first();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

    bool check();
private:
    Ui::SecondMainWindow *ui;
    std::vector<QAbstractButton*> buttonsTaks;
    SecondMainWindow* swindow;
    int counter;
};

#endif // SECONDMAINWINDOW_H
