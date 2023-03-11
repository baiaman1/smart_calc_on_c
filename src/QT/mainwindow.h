#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

extern "C" {
    #include "../s21_smart_calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void dig_num();
//    void on_pushButton_dot_clicked();
    void operations();
    void on_eq_clicked();
//    void on_pushButton_X_clicked();
//    void on_pushButton_plus_clicked();
//    void math_operations();
    void on_pow_clicked();
    void on_pushButton_clear_clicked();
//    void on_pushButton_sin_clicked();
};
#endif // MAINWINDOW_H
