#include "contrlpape.h"
#include "ui_contrlpape.h"
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>

ContrlPape::ContrlPape(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContrlPape)
{
    ui->setupUi(this);
}

ContrlPape::~ContrlPape()
{
    delete ui;
}

void ContrlPape::setObj(QJsonObject obj)
{
    m_obj=obj;
}

void ContrlPape::setUser(UserApply user)
{
    m_user=user;
}

//解密数据
QByteArray ContrlPape::aesDecrypt(const QByteArray &encryptedData, const QByteArray &key) {
    QByteArray decryptedData;
    for (int i = 0; i < encryptedData.size(); ++i) {
        decryptedData.append(encryptedData[i] ^ key[i % key.size()]); // 还原 XOR 加密
    }
    return decryptedData;
}


void ContrlPape::on_pushButton_4_clicked()
{


    QString filename=QFileDialog::getOpenFileName(this,"选择文件",QDir::currentPath(),"JSON Files (*.json);;All Files (*)");
    QFile file(filename);
    if(!file.open(QIODevice::ReadWrite))
    {
        qDebug()<<"打开"<<filename<<"文件失败";
        return ;
    }
    QByteArray data=file.readAll();
    if(ui->lineEdit_filePW->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","请输入文件密码!",QMessageBox::Ok);
        return ;
    }
    QByteArray decryptedData = aesDecrypt(data, ui->lineEdit_filePW->text().toUtf8());
    QJsonDocument doc=QJsonDocument::fromBinaryData(decryptedData);

    qDebug() << "解密后的数据：" <<doc;
    QFile file1(filename+".json");
    file1.open(QIODevice::WriteOnly);

    if(file1.write(doc.toJson())<0)
    {
        qDebug()<<"解密文件失败";
        return ;
    }
    file.close();
    file1.close();
}
