#include "personinfo.h"
#include "ui_personinfo.h"

PersonInfo::PersonInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonInfo)
{
    ui->setupUi(this);
    InitUI();
}

PersonInfo::~PersonInfo()
{
    delete ui;
}
//初始化UI界面
void PersonInfo::InitUI()
{

    Infolayout=ui->verticalLayout;
    QList<QLabel> label_list;
    const QObjectList objectList=Infolayout->children();
    //遍历每一个label
    for(auto obj:objectList)
    {

        //判断是否是layout
        QLayout *layout=qobject_cast<QLayout*>(obj);
        layout->setSpacing(0);
        layout->setContentsMargins(0, 0, 0, 0);  // 去除布局和窗口之间的间隙

        if(layout)
        {
            //遍历每一个子控件
            for(int i=0;i<layout->count();i++)
            {
                QWidget* widget=layout->itemAt(i)->widget();
                if(widget)
                {
                    QLabel *label=qobject_cast<QLabel*>(widget);
                    if(label)
                    {
                        label->setMinimumWidth(60);
                        label->setMaximumWidth(60);
                        label->setWindowFlags(Qt::FramelessWindowHint);
                    }
                    QLineEdit *lineEdit=qobject_cast<QLineEdit*>(widget);
                    if(lineEdit)
                    {
                        lineEdit->setDisabled(true);

                        lineEdit->setWindowFlags(Qt::FramelessWindowHint);
                    }
                }
            }
        }

    }
    QSize size=ui->label->size();
    //显示个人图标
    ui->label->setPixmap(QPixmap(":/new/prefix1/images/people.jpg"));
    ui->label->setScaledContents(true);
    ui->label->setFixedSize(size);
//    ui->tableWidget->resizeColumnsToContents();
//    ui->tableWidget->setTextElideMode(Qt::ElideNone);//显示所有内容，禁止省略



}




//显示表格数据
void PersonInfo::showtable(UserApply user,QJsonArray arry)
{
    m_user=user;
    ui->lineEdit->setText(m_user.Name);
    ui->lineEdit_2->setText(m_user.Sex);
    ui->lineEdit_3->setText(QString::number(m_user.Age));
    ui->lineEdit_4->setText(m_user.Telephone);
    ui->lineEdit_5->setText(m_user.ID);
    ui->lineEdit_6->setText(m_user.Address);
    // **获取表头信息**
   int columnCount = ui->tableWidget->columnCount();
   QStringList headers;
   for (int col = 0; col < columnCount; col++)
   {
       QTableWidgetItem *headerItem = ui->tableWidget->horizontalHeaderItem(col);
       if (headerItem)
       {
           headers.append(headerItem->text()); // 获取表头文本
       }
       else
       {
           headers.append(""); // 防止 headerItem 为空
       }
   }

   // **设置表格行数**
   ui->tableWidget->setRowCount(arry.size());

   // **遍历数据并插入到表格**
   for (int row = 0; row < arry.size(); row++)
   {
       QJsonObject obj = arry.at(row).toObject();

       for (int col = 0; col < columnCount; col++)
       {
           QString columnName = headers[col]; // 获取当前列对应的表头
           if (obj.contains(columnName))
           {
               QString value = obj.value(columnName).toString(); // 获取 JSON 数据
               ui->tableWidget->setItem(row, col, new QTableWidgetItem(value));
           }
       }
   }

   // **调整列宽适应内容**
   ui->tableWidget->resizeColumnsToContents();
}

void PersonInfo::on_checkBox_clicked(bool checked)
{


    QList<QLabel> label_list;
    const QObjectList objectList=ui->verticalLayout->children();
    //遍历每一个label
    for(auto obj:objectList)
    {

        //判断是否是layout
        QLayout *layout=qobject_cast<QLayout*>(obj);
        if(layout)
        {
            //遍历每一个子控件
            for(int i=0;i<layout->count();i++)
            {
                QWidget* widget=layout->itemAt(i)->widget();
                if(widget)
                {
                    QLineEdit *lineEdit=qobject_cast<QLineEdit*>(widget);
                    if(lineEdit)
                    {
                        if(checked)
                        {
                            lineEdit->setEnabled(true);
                        }
                        else
                        {
                            lineEdit->setDisabled(true);
                        }
                    }

                }
            }
        }

    }

}
