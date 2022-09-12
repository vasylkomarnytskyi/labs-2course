#include "mainwindow.h"
#include "ui_mainwindow.h"
//using namespace std;
vector<vector<double>> matrix;
int number_rows, number_columns;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->buttonOk, SIGNAL(clicked()), this, SLOT(enterSize()));
    connect(ui->sortButton, SIGNAL(clicked()), this, SLOT(sortMatrix()));
    connect(ui->readButton, SIGNAL(clicked()), this, SLOT(readMatrix()));
    connect(ui->enterRandomButton, SIGNAL(clicked()), this, SLOT(enterRandom()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sortMatrix() {
    quickSort(matrix, 0, number_rows-1);

    QString matrix_output = "Our matrix: \n";
    for(int i = 0; i < number_rows; ++i)
    {
        for(int j = 0; j < number_columns; ++j)
        {
            if(j == 0)
            {
                matrix_output += QString::number(matrix[i][j]);
                continue;
            }

            matrix_output += (", " + QString::number(matrix[i][j]));
        }

        matrix_output += "\n";
    }

    ui->enterMatrix->setText(matrix_output);
}

void MainWindow::readMatrix()
{
    ui->stepsList->setText(QString::number(number_rows) + "\n" + QString::number(number_columns) + "\n");
    matrix.clear();
    QFile file(QFileDialog::getOpenFileName(this, tr("Open file"), "", tr("Text files (*.txt)")));

    if(!file.open(QIODevice::ReadOnly))
    {
        qCritical() << file.errorString();
        return;
    }

    QTextStream stream(&file);
    QString text;

    while(!stream.atEnd())
    {
        text += stream.readLine();
        text += "\n";
    }

    QStringList list = text.split('\n');

    for (int i = 0; i < number_rows; ++i)
    {
        QStringList tmp = list[i].split(',');
        vector<double> vect1;
        for (int j = 0; j < number_columns; ++j)
        {
          vect1.push_back(tmp[j].toDouble());
        }
        matrix.push_back(vect1);
    }

    file.close();

    QString matrix_output = "Our matrix: \n";
    for(int i = 0; i < number_rows; ++i)
    {
        for(int j = 0; j < number_columns; ++j)
        {
            if(j == 0)
            {
                matrix_output += QString::number(matrix[i][j]);
                continue;
            }

            matrix_output += (", " + QString::number(matrix[i][j]));
        }

        matrix_output += "\n";
    }

    ui->enterMatrix->setText(matrix_output);
}

void MainWindow::enterRandom()
{
    matrix.clear();
}

void MainWindow::enterSize()
{
    number_rows = ui->numberRows->text().toInt();
    number_columns = ui->numberColumns->text().toInt();
}

void MainWindow::quickSort(vector<vector<double>>& matrix1, int first, int last)
{
    int i = first, j = last;
    int x = (last + first) / 2;

   while(i <= j)
   {
        while (sumRows(i) < sumRows(x)) i++;
        while (sumRows(j) > sumRows(x)) j--;

        if(i <= j)
        {
               if(i < j)
               {
                 for(int n = 0; n < number_columns; ++n)
                    {
                        double tmp = matrix1[i][n];
                        matrix1[i][n] = matrix1[j][n];
                        matrix1[j][n] = tmp;
                    }
               }

                i++;
                j--;
        }
   }

    if(i < last)
    {
        quickSort(matrix1, i, last);
    }

    if(first < j)
    {
        quickSort(matrix1, first, j);
    }
}

double MainWindow::sumRows(int index)
{
    double sum = 0;
    for(int i = 0; i < number_columns; ++i)
    {
        sum += matrix[index][i];
    }

    return sum;
}

