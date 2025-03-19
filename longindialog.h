#ifndef LONGINDIALOG_H
#define LONGINDIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>
#include <QNetworkProxy>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

namespace Ui {
class LonginDialog;
}

class LonginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LonginDialog(QWidget *parent = nullptr);
    ~LonginDialog();
    void LoginFailSeting();


private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_cancel_clicked();


private:
    Ui::LonginDialog *ui;

};

#endif // LONGINDIALOG_H
