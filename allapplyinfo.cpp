#include "allapplyinfo.h"
#include "ui_allapplyinfo.h"

AllApplyInfo::AllApplyInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AllApplyInfo)
{
    ui->setupUi(this);

    getHeaders();
    ui->comboBox->addItems(headers);

}

AllApplyInfo::~AllApplyInfo()
{
    delete ui;
}

void AllApplyInfo::showTable(QJsonArray arry)
{
    ui->tableWidget->clear();
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    m_arry=arry;
    int columnCount=ui->tableWidget->columnCount();
    ui->tableWidget->setRowCount(arry.size());
    for(int row=0;row<arry.size();row++)
    {
        QJsonObject obj=arry.at(row).toObject();
        for(int col=0;col<columnCount;col++)
        {
            QString columName=headers.at(col);
            if(obj.contains(columName))
            {
                QString value=obj.value(columName).toString();
                ui->tableWidget->setItem(row,col,new QTableWidgetItem(value));

            }
        }
    }
    ui->tableWidget->resizeColumnsToContents();
}

void AllApplyInfo::getHeaders()
{
    int columnCount=ui->tableWidget->columnCount();
    for(int col=0;col<columnCount;col++)
    {
        QTableWidgetItem *item=ui->tableWidget->horizontalHeaderItem(col);
        if(item)
        {
            headers.append(item->text());
        }
        else
        {
            headers.append("");//防止 headerItem 为空
        }

    }
}
//根据检索刷新
void AllApplyInfo::RefreshTableFrom(QDateTime leftDatetime, QDateTime rightDatetime, QString applyStatus, QString AudiStatus)
{
    ui->tableWidget->clear();
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    if (m_arry.isEmpty())
        return;

    int columnCount = ui->tableWidget->columnCount();
    int rowCount = 0;

    // First pass: count the number of rows that match the criteria
    for (const QJsonValue &value : m_arry) {
        QJsonObject obj = value.toObject();
        QDateTime dateTime = QDateTime::fromString(obj["预约时间"].toString(), Qt::ISODate);
        if (dateTime.isValid() && dateTime > leftDatetime && dateTime < rightDatetime && AudiStatus == obj["审批状态"].toString()) {
            rowCount++;
        }
    }

    ui->tableWidget->setRowCount(rowCount);

    // Second pass: populate the table with matching rows
    int currentRow = 0;
    for (const QJsonValue &value : m_arry)
    {
        QJsonObject obj = value.toObject();
        QDateTime dateTime = QDateTime::fromString(obj["预约时间"].toString(), Qt::ISODate);
        if (dateTime.isValid() && dateTime >= leftDatetime && dateTime <= rightDatetime && AudiStatus == obj["审批状态"].toString()) {
            for (int col = 0; col < columnCount; ++col)
            {
                QString columnName = headers.at(col);
                if (obj.contains(columnName))
                {
                    QString value = obj.value(columnName).toString();
                    ui->tableWidget->setItem(currentRow, col, new QTableWidgetItem(value));
                }
            }
            currentRow++;
        }
    }
    ui->tableWidget->resizeColumnsToContents();

}
//检索
void AllApplyInfo::on_pushButton_clicked()
{
    QDateTime leftDatetime=ui->dateTimeEdit->dateTime();
    QDateTime rightDatetime=ui->dateTimeEdit_2->dateTime();
    QString applyStatus=ui->comboBox_2->currentText();
    QString AudiStatus=ui->comboBox_3->currentText();
    RefreshTableFrom(leftDatetime,rightDatetime,applyStatus,AudiStatus);
}

//排序
void AllApplyInfo::on_comboBox_currentIndexChanged(int index)
{
    ui->tableWidget->sortByColumn(index,Qt::AscendingOrder);
}
