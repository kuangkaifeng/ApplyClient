#include "longindialog.h"
#include "ui_longindialog.h"

QTcpSocket *tcpsocket;
bool connectStatus;



LonginDialog::LonginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LonginDialog)
{
    ui->setupUi(this);


}

LonginDialog::~LonginDialog()
{
    delete ui;
}
//登录失败
void LonginDialog::LoginFailSeting()
{
    ui->label_2->setText(QString("密码   账户或者密码输入错我！"));
}



void LonginDialog::on_pushButton_ok_clicked()
{

    QString Account=ui->lineEdit_account->text();
    QString Password=ui->lineEdit_password->text();

    if(!connectStatus)
    {
        qDebug()<<"连接服务器失败";
        return ;
    }
    //发送登录信息
    QJsonObject obj;
    obj.insert("Login","true");
    QJsonObject obj1;
    obj1["Account"]=Account;
    obj1.insert("Password",Password);

    obj.insert("Msg",obj1);
    QJsonDocument doc(obj);
    QByteArray byte=doc.toBinaryData();
    tcpsocket->write(byte);
    //发送获取我的预约的信息


}

void LonginDialog::on_pushButton_cancel_clicked()
{
    QApplication::quit();
}
