#ifndef CONTRLPAPE_H
#define CONTRLPAPE_H

#include <QWidget>
#include <QDebug>
#include <QJsonObject>
#include "userapply.h"
#include <QFileDialog>


namespace Ui {
class ContrlPape;
}

class ContrlPape : public QWidget
{
    Q_OBJECT

public:
    explicit ContrlPape(QWidget *parent = nullptr);
    ~ContrlPape();
    void setObj(QJsonObject obj);
    void setUser(UserApply user);
    QByteArray aesDecrypt(const QByteArray &encryptedData, const QByteArray &key);

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::ContrlPape *ui;
    UserApply m_user;
    QJsonObject m_obj;
};

#endif // CONTRLPAPE_H
