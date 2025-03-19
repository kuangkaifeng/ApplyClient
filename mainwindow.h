#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "allapplyinfo.h"
#include "applyinfo.h"
#include "contrlpape.h"
#include "personinfo.h"
#include <QStackedWidget>
#include "custmerbutton.h"
#include <QSystemTrayIcon>
#include <QMenu>
#include "longindialog.h"
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QNetworkProxy>
#include <QDateTime>
#include "userapply.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include "mythread.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//客户端套接字
extern QTcpSocket *tcpsocket;
extern bool connectStatus;//判断客户端的连接状态,初始值为false


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Init();
    //获取我的预约信息
    UserApply GetMyApplyMsg(QJsonObject);
    bool LoginSucessful(QJsonObject obj);
public slots:

private slots:
    void on_pushButton_Close_clicked();
    void changWindows(QString text);
    void on_pushButton_Min_clicked();

    void on_pushButton_Max_clicked();

    //连接服务器函数
    bool connectServer();
    //接收服务器发送过来的信息
    bool RecvMsg();
    //刷新
    void Refresh();
    void RefreshSlots(QJsonObject obj);
private:
    Ui::MainWindow *ui;
    //登录窗口
    LonginDialog *longin;

    QWidget *papeContrl;
    PersonInfo *personInfo;
    ApplyInfo *applyInfo;
    AllApplyInfo *allApplyInfo;
    ContrlPape *contrlPape;
    QStackedWidget *m_stackWidget;
    QVBoxLayout *Vlayout;
    QHBoxLayout *Hlayout;
    QStringList Menulist;

    //客户按钮
    CustomButton *Personbtn;
    CustomButton *Applybtn;
    CustomButton *Allapplybtn;
    CustomButton *Contrlbtn;
    //当前点击的按钮
    CustomButton *Currentbtn;
    //按钮链表
    QList<CustomButton*> listbtn;
    QVBoxLayout *papeLayout;
    QSystemTrayIcon *trayIcon;//托盘图标
    QMenu *trayMenu;

    QString ACCOUNT="1";
    QString PASSWORD="1";


     UserApply user;
     QJsonObject m_obj;
     QJsonArray applylist;
     QJsonArray allapplylist;
     MyThread *readDataBaseFromApplyThread;

};
#endif // MAINWINDOW_H
