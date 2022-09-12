/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *city_list;
    QPushButton *enter;
    QPushButton *read_from_file;
    QTextEdit *steps_list;
    QPushButton *sort;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(782, 681);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        city_list = new QTextEdit(centralwidget);
        city_list->setObjectName(QString::fromUtf8("city_list"));
        city_list->setGeometry(QRect(10, 50, 371, 521));
        enter = new QPushButton(centralwidget);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(210, 580, 181, 41));
        read_from_file = new QPushButton(centralwidget);
        read_from_file->setObjectName(QString::fromUtf8("read_from_file"));
        read_from_file->setGeometry(QRect(390, 580, 191, 41));
        steps_list = new QTextEdit(centralwidget);
        steps_list->setObjectName(QString::fromUtf8("steps_list"));
        steps_list->setGeometry(QRect(400, 50, 371, 521));
        steps_list->setReadOnly(true);
        sort = new QPushButton(centralwidget);
        sort->setObjectName(QString::fromUtf8("sort"));
        sort->setGeometry(QRect(210, 630, 371, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 10, 81, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 81, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        read_from_file->setText(QCoreApplication::translate("MainWindow", "Read from file", nullptr));
        sort->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Steps", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
