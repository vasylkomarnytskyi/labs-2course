#include "mainwindow.h"
#include "ui_mainwindow.h"
int size1 = 0;
double *array;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox_number->setMaximum(20000);
    ui->steps_list->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    ui->steps_list->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    connect(ui->btn_enter, SIGNAL(clicked()), this, SLOT(outputListArray()));
    connect(ui->btn_random, SIGNAL(clicked()), this, SLOT(outputRandomList()));
    connect(ui->btn_sort, SIGNAL(clicked()), this, SLOT(sortArray()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::outputListArray() {

    int sizeArray = 1;
    QStringList list = ui->line_enter->text().split(QLatin1Char(';'), Qt::SkipEmptyParts);
    sizeArray = list.length();
    double ourArray[sizeArray];
    QString givenArrayString = "Our array = [ ";
    double max = list[0].toDouble();
    int index = 0;
    for (int i = 0; i < sizeArray; ++i)
    {
        ourArray[i] = list[i].toDouble();
        if(max < ourArray[i]){
            max = ourArray[i];
            index = i;
        }
    }

    delete [] array;
    size1 = sizeArray-index;
    array = new double[size1];
    int k = -1;
    for(int j = index; j < sizeArray; ++j)
    {
        k += 1;
        for(int i = k; i < size1+1; ++i)
        {
            array[i] = ourArray[j];

            if(i == 0)
            {
                givenArrayString += QString::number(array[i]);
                break;
            }

            givenArrayString += (", " + QString::number(array[i]));
            break;
        }
    }
    givenArrayString += " ]";

    ui->list_array->setText(givenArrayString);
}

void MainWindow::outputRandomList()
{
    int numberElements = ui->spinBox_number->value();
    double ourArray[numberElements];
    QString givenArrayString = "Our array = [ ";
    delete [] array;
    std::uniform_real_distribution<double> distribution (-50000., 50000.);
    QString initialArray = "[ ";

    for(int i = 0; i < numberElements; ++i)
    {
        ourArray[i] = distribution(*QRandomGenerator::global());

        if(i == 0)
        {
            initialArray += QString::number(ourArray[i]);
        }

        initialArray += (", " + QString::number(ourArray[i]));
    }

    initialArray += " ]";

    ui->steps_list->setText(initialArray);

    double max = ourArray[0];
    int index = 0;
    for(int i = 0; i < numberElements; ++i)
    {
        if(max < ourArray[i])
        {
            max = ourArray[i];
            index = i;
        }
    }

    size1 = numberElements-index;
    array = new double[size1];

    int k = -1;
    for(int j = index; j < numberElements; ++j)
    {
        k += 1;
        for(int i = k; i < size1+1; ++i)
        {
            array[i] = ourArray[j];

            if(i == 0)
            {
                givenArrayString += QString::number(array[i]);
                break;
            }

            givenArrayString += (", " + QString::number(array[i]));
            break;
        }
    }

    givenArrayString += " ]";

    ui->list_array->setText(givenArrayString);

}

void MainWindow::sortArray()
{
    bubbleSort(array);
    QString result = "Our array = [ ";

    for(int i = 0; i < size1; ++i)
    {
        if(i == 0)
        {
            result += QString::number(array[i]);
            continue;
        }
        result += (", " + QString::number(array[i]));
    }

    result += " ]";

    ui->list_sorting_array->setText(result);
}

void MainWindow::bubbleSort(double *arr) {
    QString steps;
    int flag;
    for(int i = 0; i < size1; ++i){
        flag = 0;
           for(int j = 0; j < size1 - i - 1; ++j)
           {
               if(arr[j] < arr[j+1])
               {
                   double tmp = arr[j+1];
                   arr[j+1] = arr[j];
                   arr[j] = tmp;
                   flag = 1;
               }
           }

           steps += "\n\n Step" + QString::number(i) + "\n";

           for(int k = 0; k < size1; ++k)
           {
               steps += (QString::number(arr[k]) + ", ");
           }

           steps += "\n";

           if(flag == 0)
           {
               break;
           }
    }
    ui->steps_list->setText(steps);
}







