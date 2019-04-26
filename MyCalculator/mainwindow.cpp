#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 连接信号槽，系统生成的省略了改行
    QObject::connect(ui->pushButtonCalc, SIGNAL(clicked()), this, SLOT(CalcSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CalcSlot()
{
    double first2 = ui->lineEditFirst->text().toDouble();
    double second2 = ui->lineEditSecond->text().toDouble();
    double result2 = 0.0;
    switch (ui->comboBoxSymbol->currentIndex())
    {
    case 0: // +
       result2 = first2 + second2;
        break;
    case 1: // -
         result2 = first2 - second2;
        break;
    case 2: // *
         result2 = first2 * second2;
        break;
    case 3: // /
        if(0.0 == second2)
        {
            QMessageBox::warning(this, "Error", "second number can't be 0!");
            return;
        }
         result2 = first2 / second2;
        break;
    default:
        break;
    }

    ui->lineEditResult->setText(QString::number(result2));
}

//void MainWindow::on_pushButtonCalc_clicked()
//{
//    double first2 = ui->lineEditFirst->text().toDouble();
//    double second2 = ui->lineEditSecond->text().toDouble();
//    double result2 = 0.0;
//    switch (ui->comboBoxSymbol->currentIndex())
//    {
//    case 0: // +
//       result2 = first2 + second2;
//        break;
//    case 1: // -
//         result2 = first2 - second2;
//        break;
//    case 2: // *
//         result2 = first2 * second2;
//        break;
//    case 3: // /
//        if(0.0 == second2)
//        {
//            QMessageBox::warning(this, "Error", "second number can't be 0!");
//            return;
//        }
//         result2 = first2 / second2;
//        break;
//    default:
//        break;
//    }

//    ui->lineEditResult->setText(QString::number(result2));

//}
