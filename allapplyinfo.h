#ifndef ALLAPPLYINFO_H
#define ALLAPPLYINFO_H

#include <QWidget>
#include <QJsonArray>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDateTime>

namespace Ui {
class AllApplyInfo;
}

class AllApplyInfo : public QWidget
{
    Q_OBJECT

public:
    explicit AllApplyInfo(QWidget *parent = nullptr);
    ~AllApplyInfo();
    void showTable(QJsonArray arry);
    void getHeaders();
    //根据条件刷新
    void RefreshTableFrom(QDateTime leftDatetime,QDateTime rightDatetime,QString applyStatus,QString AudiStatus);
private slots:
    void on_pushButton_clicked();


    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::AllApplyInfo *ui;
    QJsonArray m_arry;
    QStringList headers;
};

#endif // ALLAPPLYINFO_H
