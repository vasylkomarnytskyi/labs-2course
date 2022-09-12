#include "mainwindow.h"
#include "ui_mainwindow.h"
using std::vector;
using std::string;
vector<string> vector1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->enter, SIGNAL(clicked()), this, SLOT(enter_city()));
    connect(ui->sort, SIGNAL(clicked()), this, SLOT(sort_list()));
    connect(ui->read_from_file, SIGNAL(clicked()), this, SLOT(read_cities()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::enter_city()
{
    QStringList list = (ui->city_list->toPlainText()).split('\n');

    QString tmp;
    QString inputString = "It was introduced: [ ";
    vector1.clear();
    int j = 0;
    for(int i = 0; i < list.length(); ++i) {
        tmp = list[i];
        if(tmp.length() > 8)
        {
            continue;
        }

        vector1.push_back(tmp.toStdString());

        if(j == 0)
        {
            inputString += QString::fromStdString(vector1[j]);
            ++j;
            continue;
        }

        inputString += (", " + QString::fromStdString(vector1[j]));
        ++j;
    }

    inputString += " ]";
    ui->steps_list->setText(inputString);

}

void MainWindow::sort_list()
{
    int size = vector1.size();
    shellSort(vector1, size);
}

void MainWindow::read_cities()
{
    vector1.clear();
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
    string tmp;
    int j = 0;
    QString inputString = "It was introduced: [ ";

    for(int i = 0; i < list.length()-1; ++i) {
        tmp = list[i].toStdString();

        if(tmp.length() > 8)
        {
            continue;
        }

        vector1.push_back(tmp);

        if(j == 0)
        {
            inputString += QString::fromStdString(vector1[j]);
            ++j;
            continue;
        }

        inputString += (", " + QString::fromStdString(vector1[j]));
        ++j;
    }

    inputString += " ]";
    ui->steps_list->setText(inputString);
    file.close();
}

void MainWindow::shellSort(vector<string>& str, int num)
{
    QString steps;
    int n = 0;
    for(int gap = num / 2; gap > 0; gap /= 2)
    {
        for(int i = gap; i < num; ++i)
        {
            for(int j = i - gap; j >= 0 && str[j] > str[j+gap]; j -= gap)
            {
                string tmp = str[j];
                str[j] = str[j + gap];
                str[j + gap] = tmp;
                steps += ("Steps" + QString::number(n) + "\n[ ");
                for(int k = 0; k < num; ++k)
                {
                    if(k == 0)
                    {
                        steps += QString::fromStdString(str[k]);
                        continue;
                    }

                    steps += (", " + QString::fromStdString(str[k]));
                }

                steps += " ]\n";
                ++n;
            }
        }
    }

    ui->steps_list->setText(steps);
}

