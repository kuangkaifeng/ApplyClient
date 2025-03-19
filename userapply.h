#ifndef USERAPPLY_H
#define USERAPPLY_H
#include <QString>
#include <QDateTime>

class UserApply
{
public:
    UserApply();
public:
    QString Account;
    QString Name;
    QString Sex;
    int Age;
    QString ID;
    QString Address;
    QString Telephone;
    QDateTime DateTime;
    QString Status;//审批状态

    QString ApplyName;//预约名称
    QString SecretGrade;//保密等级
    QString AppointmentA;//预约甲方
    QString AppointmentReason;//预约原因
    QString AppointmentClass;//预约类型
    QString filePassword;//文件生成密码


};

#endif // USERAPPLY_H
