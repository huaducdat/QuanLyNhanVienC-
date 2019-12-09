#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialogNV = new Dialog;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNhanVien(NhanVien *nv)
{
    ui->listDanhSanh->addItem((QListWidgetItem*) nv);

    nhanVien.push_back((NhanVien*)nv);
}

void MainWindow::addNhanVien(QString name)
{

    NhanVien* nv = new NhanVien(name);

    addNhanVien(nv);

}

void MainWindow::addNhanVien(QString name, QString birthDay, QString gender, QString basicSalary, QString coeficient)
{
    NhanVien* nv = new NhanVien(name, birthDay, gender, basicSalary, coeficient);
    addNhanVien(nv);
}

void MainWindow::RemoveNhanVien(NhanVien *nv)
{
    ui->listDanhSanh->removeItemWidget((QListWidgetItem*) nv);
    for(int i= 0; i< nhanVien.length(); i++)
    {
        if(nhanVien[i] == nv)
        {
            nhanVien.remove(i);
            delete nv;
        }
    }
}

void MainWindow::GetSalary(NhanVien *nv)
{
    ui->txtSalary->setText(nv->GetSalary());
}


void MainWindow::on_btnRemove_clicked()
{
    RemoveNhanVien((NhanVien*)ui->listDanhSanh->currentItem());
}

void MainWindow::on_btnAdd_clicked()
{
    addNhanVien("New_Slot");

}

void MainWindow::on_listDanhSanh_itemDoubleClicked(QListWidgetItem *item)
{
    dialogNV->ShowInformation((NhanVien*) item);
}



void MainWindow::on_listDanhSanh_itemClicked(QListWidgetItem *item)
{
     GetSalary((NhanVien*)item);
}
