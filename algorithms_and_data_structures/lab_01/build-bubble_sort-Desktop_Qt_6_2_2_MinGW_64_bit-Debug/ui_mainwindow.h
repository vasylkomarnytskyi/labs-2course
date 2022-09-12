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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_enter;
    QPushButton *btn_random;
    QLineEdit *line_enter;
    QSpinBox *spinBox_number;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_sort;
    QLabel *label_3;
    QTextEdit *steps_list;
    QTextEdit *list_array;
    QTextEdit *list_sorting_array;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(812, 663);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bubbles_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_enter = new QPushButton(centralwidget);
        btn_enter->setObjectName(QString::fromUtf8("btn_enter"));
        btn_enter->setGeometry(QRect(10, 10, 131, 31));
        btn_random = new QPushButton(centralwidget);
        btn_random->setObjectName(QString::fromUtf8("btn_random"));
        btn_random->setGeometry(QRect(10, 50, 131, 31));
        line_enter = new QLineEdit(centralwidget);
        line_enter->setObjectName(QString::fromUtf8("line_enter"));
        line_enter->setGeometry(QRect(150, 10, 651, 28));
        spinBox_number = new QSpinBox(centralwidget);
        spinBox_number->setObjectName(QString::fromUtf8("spinBox_number"));
        spinBox_number->setGeometry(QRect(150, 50, 51, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 110, 71, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 150, 111, 20));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        btn_sort = new QPushButton(centralwidget);
        btn_sort->setObjectName(QString::fromUtf8("btn_sort"));
        btn_sort->setGeometry(QRect(210, 50, 141, 29));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 280, 111, 20));
        label_3->setFont(font1);
        steps_list = new QTextEdit(centralwidget);
        steps_list->setObjectName(QString::fromUtf8("steps_list"));
        steps_list->setGeometry(QRect(10, 150, 371, 501));
        steps_list->setReadOnly(true);
        list_array = new QTextEdit(centralwidget);
        list_array->setObjectName(QString::fromUtf8("list_array"));
        list_array->setGeometry(QRect(400, 180, 401, 81));
        list_array->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        list_array->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        list_array->setReadOnly(true);
        list_sorting_array = new QTextEdit(centralwidget);
        list_sorting_array->setObjectName(QString::fromUtf8("list_sorting_array"));
        list_sorting_array->setGeometry(QRect(400, 310, 401, 81));
        list_sorting_array->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Bubble Sort", nullptr));
        btn_enter->setText(QCoreApplication::translate("MainWindow", "Enter numbers", nullptr));
        btn_random->setText(QCoreApplication::translate("MainWindow", "Random numbers", nullptr));
        line_enter->setText(QString());
        line_enter->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter elements arrays", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Steps", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Given array", nullptr));
        btn_sort->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sorting array", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
