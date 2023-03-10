#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_1,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_2,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_4,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_5,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_6,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_7,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_8,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_9,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_minPlus,SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_plus,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_minus,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_mult,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_mod,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_dot,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->del,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->bracket_open,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->bracket_close,SIGNAL(clicked()), this, SLOT(dig_num()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dig_num()
{
    QPushButton *button = (QPushButton*)sender();
    QString new_label = (ui->res_label->text() + button->text());
    if (ui->res_label->text().contains("sin()")) {
        new_label = "sin(";
    } else {
    ui->res_label->setText(new_label);

    }
}


void MainWindow::operations()
{
    QPushButton *button = (QPushButton*)sender();
    QString new_label;
    double all_nums;

    if (button->text() == "+/-") {
        all_nums = (ui->res_label->text()).toDouble();
        all_nums = all_nums * -1;
        new_label = QString::number(all_nums, 'g', 15);

        ui->res_label->setText(new_label);
    }
}


void MainWindow::on_eq_clicked()
{

    QString input = ui->res_label->text();
    std::string str = input.toStdString();
    char* cstr = new char[str.length() + 1];

    strcpy(cstr, str.c_str());
    //

//    QByteArray strx = ui->xSpinBox->text().toLocal8Bit();
//    char* x_str2 = strx.data();
//    char* new_cstr = replace_x(cstr, x_str2);

    calculate(cstr);


    std::string res_str(cstr);
    QString label = QString::fromStdString(res_str);

    ui->res_label->setText(label);
//    free(cstr);
    delete[] cstr;
}


void MainWindow::on_pow_clicked()
{
    ui->res_label->setText(ui->res_label->text() + "^");
}


void MainWindow::on_pushButton_clear_clicked()
{
    ui->res_label->setText(ui->res_label->text() = "");
}


//void MainWindow::on_pushButton_dot_clicked()
//{
//    if (!ui->res_label->text().contains('.')) {
//        ui->res_label->setText(ui->res_label->text() + ".");
//    }

//}
