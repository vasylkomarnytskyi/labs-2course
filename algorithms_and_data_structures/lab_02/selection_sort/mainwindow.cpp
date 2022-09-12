#include "mainwindow.h"
#include "ui_mainwindow.h"

int size1 = 0;
int *array;

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
    int ourArray[sizeArray];
    QString givenArrayString = "Our array = [ ";
    int index = 0;
    for (int i = 0; i < sizeArray; ++i)
    {
        ourArray[i] = list[i].toDouble();
        if(ourArray[i] % 3 != 0){
            index += 1;
        }
    }

    delete [] array;
    size1 = index;
    array = new int[size1];

    int k = 0;

    for(int i = 0; i < sizeArray; ++i)
    {
        for(int j = k; j < size1; ++j)
        {
            if(ourArray[i] % 3 == 0)
            {
                break;
            }

            array[j] = ourArray[i] * ourArray[i];
            ++k;

            if(j == 0)
            {
                givenArrayString += QString::number(array[j]);
                break;
            }

            givenArrayString += (", " + QString::number(array[j]));
            break;
        }
    }
    givenArrayString += " ]";

    ui->list_array->setText(givenArrayString);
}

void MainWindow::outputRandomList() {
    int numberElements = ui->spinBox_number->value();
    int ourArray[numberElements];
    QString givenArrayString = "Our array = [ ";
    std::uniform_int_distribution<int> distribution (-50000, 50000);

    QString initialArray = "[ ";
    int index = 0;

    for(int i = 0; i < numberElements; ++i)
    {
        ourArray[i] = distribution(*QRandomGenerator::global());

        if(ourArray[i] % 3 != 0){
            index += 1;
        }

        if(i == 0)
        {
            initialArray += QString::number(ourArray[i]);
            continue;
        }

        initialArray += (", " + QString::number(ourArray[i]));
    }

    initialArray += " ]";

    ui->steps_list->setText(initialArray);

    delete [] array;
    size1 = index;
    array = new int[size1];

    int k = 0;

    for(int i = 0; i < numberElements; ++i)
    {
        for(int j = k; j < size1; ++j)
        {
            if(ourArray[i] % 3 == 0)
            {
                break;
            }

            array[j] = ourArray[i] * ourArray[i];
            ++k;

            if(j == 0)
            {
                givenArrayString += QString::number(array[j]);
                break;
            }

            givenArrayString += (", " + QString::number(array[j]));
            break;
        }
    }
    givenArrayString += " ]";

    ui->list_array->setText(givenArrayString);
}

void MainWindow::sortArray() {
    selectionSort(array, size1);
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

void MainWindow::selectionSort(int *array1, int size1) {
    int index;
    QString steps;
    for (int i = 0; i < size1-1; ++i)
    {
        index = i;
        for(int j = i+1; j < size1; ++j)
        {
            if(array1[j] > array1[index])
            {
                index = j;
            }
        }

        int tmp = array[i];
        array[i] = array[index];
        array[index] = tmp;

       steps += ("Step " + QString::number(i) + "\n");

       for(int k = 0; k < size1; ++k)
       {
           if(k == 0)
           {
               steps += QString::number(array1[k]);
               continue;
           }

           steps += (", " + QString::number(array1[k]));
       }

       steps += "\n";
    }

    ui->steps_list->setText(steps);
}



