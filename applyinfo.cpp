#include "applyinfo.h"
#include "ui_applyinfo.h"



ApplyInfo::ApplyInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyInfo)
{
    ui->setupUi(this);

    InitUI();
}

ApplyInfo::~ApplyInfo()
{
    delete ui;
}

void ApplyInfo::InitUI()
{

}

void ApplyInfo::setObj(QJsonObject obj)
{
    m_obj=obj;
}

void ApplyInfo::setUser(UserApply user)
{
    m_user=user;
    qDebug()<<"user111:"<<user.Name;
}

void ApplyInfo::on_applyButton_clicked()
{

    qDebug()<<"objk:"<<m_obj;

    m_user.ApplyName=ui->ApplyNameliEdit->text();
    m_user.AppointmentA=ui->ApplyAComBox->currentText();
    m_user.AppointmentClass=ui->ApplyTypeComBox->currentText();
    m_user.AppointmentReason=ui->lineEdit_reason->text();
    m_user.DateTime=ui->dateTimeEdit->dateTime();
    m_user.SecretGrade=ui->securityComBox->currentText();
    m_user.Status="待审核";
    m_user.filePassword=ui->filePasswordEdit->text();
    //再将user的信息转化为QJsonobject
    QJsonObject obj;
    obj["姓名"]=m_user.Name;
    obj["性别"]=m_user.Sex;
    obj["年龄"]=m_user.Age;
    obj["身份证"]=m_user.ID;
    obj["账户"]=m_user.Account;
    obj["地址"]=m_user.Address;
    obj["电话"]=m_user.Telephone;
    obj["预约名称"]=m_user.ApplyName;
    obj["预约甲方"]=m_user.AppointmentA;
    obj["预约类型"]=m_user.AppointmentClass;
    obj["预约理由"]=m_user.AppointmentReason;
    obj["预约时间"]=m_user.DateTime.toString();
    obj["保密级别"]=m_user.SecretGrade;
    obj["审批状态"]=m_user.Status;
    obj["生成文件密码"]=m_user.filePassword;
    qDebug()<<"apply obj:"<<obj;

    emit sendApplyInfo(obj);

}

void ApplyInfo::on_clearButton_clicked()
{
    ui->lineEdit_address->clear();
    ui->lineEdit_person->clear();
    ui->lineEdit_reason->clear();
    ui->filePasswordEdit->clear();
    ui->ApplyNameliEdit->clear();
}

QByteArray ApplyInfo::aesEncrypt(const QByteArray &data, const QByteArray &key) {
    QByteArray encryptedData;
    for (int i = 0; i < data.size(); ++i) {
        encryptedData.append(data[i] ^ key[i % key.size()]); // XOR 方式模拟 AES（仅示例，真正的 AES 需用 OpenSSL）
    }
    return encryptedData;
}


void ApplyInfo::on_addPathButton_clicked()
{
    m_user.ApplyName=ui->ApplyNameliEdit->text();
    m_user.AppointmentA=ui->ApplyAComBox->currentText();
    m_user.AppointmentClass=ui->ApplyTypeComBox->currentText();
    m_user.AppointmentReason=ui->lineEdit_reason->text();
    m_user.DateTime=ui->dateTimeEdit->dateTime();
    m_user.SecretGrade=ui->securityComBox->currentText();
    m_user.Status="待审核";
    m_user.filePassword=ui->filePasswordEdit->text();


    QJsonObject obj;
    obj["姓名"]=m_user.Name;
    obj["性别"]=m_user.Sex;
    obj["年龄"]=m_user.Age;
    obj["身份证"]=m_user.ID;
    obj["账户"]=m_user.Account;
    obj["地址"]=m_user.Address;
    obj["电话"]=m_user.Telephone;
    obj["预约名称"]=m_user.ApplyName;
    obj["预约甲方"]=m_user.AppointmentA;
    obj["预约类型"]=m_user.AppointmentClass;
    obj["预约理由"]=m_user.AppointmentReason;
    obj["预约时间"]=m_user.DateTime.toString();
    obj["保密级别"]=m_user.SecretGrade;
    obj["审批状态"]=m_user.Status;
    obj["生成文件密码"]=m_user.filePassword;
    qDebug()<<"apply obj:"<<obj;
    QJsonDocument doc(obj);
    QByteArray data=doc.toBinaryData();
    // 使用 QFileDialog 打开保存文件对话框
    QString fileName = QFileDialog::getSaveFileName(nullptr, "保存文件", "userInfo.json", "JSON Files (*.json);;All Files (*)");
    QByteArray encryptedData = aesEncrypt(data, ui->filePasswordEdit->text().toUtf8());
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"打开"<<fileName<<"文件失败";
        return ;
    }
    file.write(encryptedData);
    file.close();
    qDebug() << "数据已加密并写入文件";
}

