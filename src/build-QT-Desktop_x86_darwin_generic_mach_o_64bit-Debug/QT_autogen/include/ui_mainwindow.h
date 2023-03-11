/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *res_label;
    QPushButton *del;
    QPushButton *pushButton_draw;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *eq;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_tan;
    QPushButton *pow;
    QPushButton *pushButton_minPlus;
    QPushButton *pushButton_X;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_log;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *bracket_open;
    QPushButton *bracket_close;
    QPushButton *pushButton_clear;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(787, 309);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        res_label = new QLabel(centralwidget);
        res_label->setObjectName(QString::fromUtf8("res_label"));
        res_label->setGeometry(QRect(10, 10, 341, 51));
        res_label->setLayoutDirection(Qt::RightToLeft);
        res_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  border-radius: 10px;\n"
"}\n"
"\n"
"background-color : white;"));
        res_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        res_label->setMargin(0);
        del = new QPushButton(centralwidget);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(360, 110, 61, 33));
        del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_draw = new QPushButton(centralwidget);
        pushButton_draw->setObjectName(QString::fromUtf8("pushButton_draw"));
        pushButton_draw->setGeometry(QRect(80, 230, 61, 33));
        pushButton_draw->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(360, 150, 61, 33));
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(360, 190, 61, 33));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(360, 230, 61, 33));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        eq = new QPushButton(centralwidget);
        eq->setObjectName(QString::fromUtf8("eq"));
        eq->setGeometry(QRect(360, 270, 61, 33));
        eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #4285f4;\n"
"  border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"  color: #fff;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(150, 230, 61, 33));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(220, 230, 61, 33));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 150, 61, 33));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 110, 61, 33));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(220, 110, 61, 33));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 110, 61, 33));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 150, 61, 33));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 150, 61, 33));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 190, 61, 33));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 190, 61, 33));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(150, 190, 61, 33));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"   border-radius: 10px;\n"
"   background-color: rgb(229, 255, 204);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(360, 70, 61, 33));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(80, 150, 61, 33));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(10, 110, 61, 33));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pow = new QPushButton(centralwidget);
        pow->setObjectName(QString::fromUtf8("pow"));
        pow->setGeometry(QRect(290, 70, 61, 33));
        pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minPlus = new QPushButton(centralwidget);
        pushButton_minPlus->setObjectName(QString::fromUtf8("pushButton_minPlus"));
        pushButton_minPlus->setGeometry(QRect(290, 230, 61, 33));
        pushButton_minPlus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_X = new QPushButton(centralwidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setGeometry(QRect(150, 270, 61, 33));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(10, 230, 61, 33));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(10, 190, 61, 33));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(80, 190, 61, 33));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(80, 110, 61, 33));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(10, 150, 61, 33));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(80, 70, 61, 33));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(10, 70, 61, 33));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: black;\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(255, 204, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        bracket_open = new QPushButton(centralwidget);
        bracket_open->setObjectName(QString::fromUtf8("bracket_open"));
        bracket_open->setGeometry(QRect(150, 70, 61, 33));
        bracket_open->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        bracket_close = new QPushButton(centralwidget);
        bracket_close->setObjectName(QString::fromUtf8("bracket_close"));
        bracket_close->setGeometry(QRect(220, 70, 61, 33));
        bracket_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(360, 10, 61, 51));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"   background-color: rgb(200, 90, 90);\n"
"  color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(220, 270, 61, 33));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        res_label->setText(QString());
        del->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_draw->setText(QCoreApplication::translate("MainWindow", "graf", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos()", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan()", nullptr));
        pow->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        pushButton_minPlus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_X->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"   border: 1px solid gray;\n"
"	border-radius: 10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "(x)", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln()", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log()", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt()", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan()", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin()", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos()", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin()", nullptr));
        bracket_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        bracket_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
