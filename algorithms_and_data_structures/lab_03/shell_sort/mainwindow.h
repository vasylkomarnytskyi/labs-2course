#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QIODevice>
#include <vector>
#include <string>


using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void shellSort(vector<string>& str, int num);
private slots:
    void enter_city();
    void sort_list();
    void read_cities();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
