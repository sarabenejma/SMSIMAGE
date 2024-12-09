#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"employee.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pushButton_login_clicked();
    void on_pushButton_cancel_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
