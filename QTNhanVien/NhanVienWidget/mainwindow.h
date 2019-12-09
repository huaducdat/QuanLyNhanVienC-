#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "nhanvien.h"
#include <QString>
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class NhanVien;
class Dialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addNhanVien(NhanVien* nv);
    void addNhanVien(QString name);
    void addNhanVien(QString name, QString birthDay, QString gender, QString basicSalary, QString coeficient);
    void RemoveNhanVien(NhanVien* nv);
    void GetSalary(NhanVien* nv);

private slots:
    void on_btnRemove_clicked();

    void on_btnAdd_clicked();

    void on_listDanhSanh_itemDoubleClicked(QListWidgetItem *item);



    void on_listDanhSanh_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QVector<NhanVien*> nhanVien;
    Dialog* dialogNV;
};
#endif // MAINWINDOW_H
