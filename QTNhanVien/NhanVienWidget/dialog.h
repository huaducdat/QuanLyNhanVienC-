#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "nhanvien.h"
#include "mainwindow.h"


namespace Ui {
class Dialog;
}

class NhanVien;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void ShowInformation(NhanVien* nv);

private slots:


    void on_btnOke_released();

    void on_btnCancel_released();

private:
    Ui::Dialog *ui;
    NhanVien* nvDialog;
};

#endif // DIALOG_H
