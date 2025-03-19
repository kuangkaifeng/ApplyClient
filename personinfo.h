#ifndef PERSONINFO_H
#define PERSONINFO_H

#include <QWidget>
#include <QLayout>
#include <QList>
#include <QLineEdit>
#include <QLabel>
#include <QDebug>
#include <QJsonObject>
#include "userapply.h"
#include <QJsonArray>


namespace Ui {
class PersonInfo;
}

class PersonInfo : public QWidget
{
    Q_OBJECT

public:
    explicit PersonInfo(QWidget *parent = nullptr);
    ~PersonInfo();
    void InitUI();

    //显示表格(也将个人信息传递过来)
    void showtable(UserApply user,QJsonArray arry);

private slots:


    void on_checkBox_clicked(bool checked);

private:
    Ui::PersonInfo *ui;
    QLayout *Infolayout;
    QJsonObject m_obj;
    UserApply m_user;

};

#endif // PERSONINFO_H
