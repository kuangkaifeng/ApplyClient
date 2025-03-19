#ifndef APPLYINFO_H
#define APPLYINFO_H

#include <QWidget>
#include "userapply.h"
#include <QJsonObject>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QJsonDocument>
namespace Ui {
class ApplyInfo;
}

class ApplyInfo : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyInfo(QWidget *parent = nullptr);
    ~ApplyInfo();
    void InitUI();
    void setObj(QJsonObject obj);
    void setUser(UserApply user);
    QByteArray aesEncrypt(const QByteArray &data, const QByteArray &key);
signals:
    void sendApplyInfo(QJsonObject obj);
private slots:
    void on_applyButton_clicked();

    void on_clearButton_clicked();

    void on_addPathButton_clicked();

private:
    Ui::ApplyInfo *ui;
    QJsonObject m_obj;
    UserApply m_user;
};

#endif // APPLYINFO_H
