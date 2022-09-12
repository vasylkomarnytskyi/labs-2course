#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QFile>
#include <QRandomGenerator64>
#include <QTextStream>
#include <QIODevice>
#include <QFileDialog>
#include <vector>
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
    void quickSort(vector<vector<double>>& matrix1, int first, int last);
    double sumRows(int index);
 private slots:
    void enterSize();
    void sortMatrix();
    void readMatrix();
    void enterRandom();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
