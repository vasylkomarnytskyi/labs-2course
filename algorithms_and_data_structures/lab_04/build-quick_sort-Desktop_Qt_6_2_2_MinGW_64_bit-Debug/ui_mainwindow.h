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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *enterMatrix;
    QPushButton *sortButton;
    QPushButton *buttonOk;
    QPushButton *enterRandomButton;
    QLineEdit *numberRows;
    QTextEdit *stepsList;
    QLabel *label;
    QLabel *label_2;
    QPushButton *readButton;
    QLineEdit *numberColumns;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        enterMatrix = new QTextEdit(centralwidget);
        enterMatrix->setObjectName(QString::fromUtf8("enterMatrix"));
        enterMatrix->setGeometry(QRect(10, 50, 381, 581));
        enterMatrix->setReadOnly(true);
        sortButton = new QPushButton(centralwidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(220, 680, 121, 29));
        buttonOk = new QPushButton(centralwidget);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setGeometry(QRect(480, 640, 111, 29));
        enterRandomButton = new QPushButton(centralwidget);
        enterRandomButton->setObjectName(QString::fromUtf8("enterRandomButton"));
        enterRandomButton->setGeometry(QRect(480, 680, 111, 29));
        numberRows = new QLineEdit(centralwidget);
        numberRows->setObjectName(QString::fromUtf8("numberRows"));
        numberRows->setGeometry(QRect(220, 640, 121, 28));
        stepsList = new QTextEdit(centralwidget);
        stepsList->setObjectName(QString::fromUtf8("stepsList"));
        stepsList->setGeometry(QRect(400, 50, 381, 581));
        stepsList->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 10, 111, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 131, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        readButton = new QPushButton(centralwidget);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setGeometry(QRect(350, 680, 121, 29));
        numberColumns = new QLineEdit(centralwidget);
        numberColumns->setObjectName(QString::fromUtf8("numberColumns"));
        numberColumns->setGeometry(QRect(350, 640, 121, 28));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        buttonOk->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
        enterRandomButton->setText(QCoreApplication::translate("MainWindow", "Random", nullptr));
        numberRows->setPlaceholderText(QCoreApplication::translate("MainWindow", "number rows", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Steps", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Elements", nullptr));
        readButton->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        numberColumns->setPlaceholderText(QCoreApplication::translate("MainWindow", "number columns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
