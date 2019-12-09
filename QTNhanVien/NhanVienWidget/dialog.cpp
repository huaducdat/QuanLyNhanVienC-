#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    nvDialog = new NhanVien;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::ShowInformation(NhanVien *nv)
{
    ui->txtName->setText(nv->GetName());
    ui->txtBirthday->setText(nv->GetBirthDay());
    ui->txtGender->setText(nv->GetGender());
    ui->txtBasicSalary->setText(nv->GetBasicSalary());
    ui->txtCoefficient->setText(nv->GetCoefficient());

    nvDialog = nv;

    show();
}


void Dialog::on_btnOke_released()
{
    nvDialog->SetName(ui->txtName->text());
    nvDialog->SetBirthDay(ui->txtBirthday->text());
    nvDialog->SetGender(ui->txtGender->text());
    nvDialog->SetBasicSalary((ui->txtBasicSalary->text()));
    nvDialog->SetCoefficient(ui->txtCoefficient->text());

    hide();
}


void Dialog::on_btnCancel_released()
{
    hide();
}
