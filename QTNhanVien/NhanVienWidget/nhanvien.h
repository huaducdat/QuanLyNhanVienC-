#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <QString>
#include <QListWidgetItem>

class NhanVien : QListWidgetItem
{
private:
    QString name;

    QString birthDay;
    QString gender;
    QString basicSalary;
    QString coefficient;
    double salary;
public:
    NhanVien();
    NhanVien(QString name);
    NhanVien(QString nane, QString birthDay, QString gender, QString basicSalary, QString coefficient);
public:
    QString GetSalary();

    QString GetName();
    QString GetBirthDay();
    QString GetGender();
    QString GetBasicSalary();
    QString GetCoefficient();

    void SetName(QString name);
    void SetBirthDay(QString birthDay);
    void SetGender(QString gender);
    void SetBasicSalary(QString basic);
    void SetCoefficient(QString coefficient);
};

#endif // NHANVIEN_H
