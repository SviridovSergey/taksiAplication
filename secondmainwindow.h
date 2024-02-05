#ifndef SECONDMAINWINDOW_H
#define SECONDMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecondMainWindow;
}

class SecondMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondMainWindow(QWidget *parent = nullptr);
    ~SecondMainWindow();
signals:
    void first();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::SecondMainWindow *ui;
};

#endif // SECONDMAINWINDOW_H
