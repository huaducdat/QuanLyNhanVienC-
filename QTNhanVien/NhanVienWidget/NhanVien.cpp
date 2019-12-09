#include "nhanvien.h"

NhanVien::NhanVien()
{
    this->name = "none";
    QListWidgetItem::setText(this->name);
}

NhanVien::NhanVien(QString name)
{
    this->name = name;
    QListWidgetItem::setText(name);
}

NhanVien::NhanVien(QString name, QString birthDay, QString gender, QString basicSalary, QString coefficient)
{
    this->name = name;
    this->birthDay = birthDay;
    this->gender = gender;
    this->basicSalary = basicSalary;
    this->coefficient = coefficient;
    QListWidgetItem::setText(this->name);
}

QString NhanVien::GetSalary()
{
    double fBasic = 0;
    double fCoefficient = 0;
    fBasic = basicSalary.toDouble();
    fCoefficient = coefficient.toDouble();
    salary = fBasic*fCoefficient;
    return QString::number(salary);
}

QString NhanVien::GetName()
{
    return this->name;
}

QString NhanVien::GetBirthDay()
{
    return this->birthDay;
}

QString NhanVien::GetGender()
{
    return  this->gender;
}

QString NhanVien::GetBasicSalary()
{
    return  this->basicSalary;
}

QString NhanVien::GetCoefficient()
{
    return  this->coefficient;
}

void NhanVien::SetName(QString name)
{
    this->name=name;
    QListWidgetItem::setText(name);
}

void NhanVien::SetBirthDay(QString( birthDay))
{
    this->birthDay = birthDay;
}

void NhanVien::SetGender(QString gender)
{
    this->gender=gender;
}

void NhanVien::SetBasicSalary(QString basic)
{
    this->basicSalary=basic;
}

void NhanVien::SetCoefficient(QString coefficient)
{
    this->coefficient = coefficient;
}
