#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <QRandomGenerator64>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void bubbleSort(double *array);
public slots:
    void outputListArray();
    void outputRandomList();
    void sortArray();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
