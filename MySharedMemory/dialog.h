#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSharedMemory>
//class QSharedMemory;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
     void loadFromFile();
     void loadFromMemory();

private:
    Ui::Dialog *ui;
    QSharedMemory sharedMemory;
};

#endif // DIALOG_H
