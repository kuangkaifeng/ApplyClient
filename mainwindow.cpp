#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->hide();
    longin =new LonginDialog();
    longin->show();
    Init();
    //连接服务器
    connectServer();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Init()
{
    connectStatus=false;
    tcpsocket=new QTcpSocket(this);
    readDataBaseFromApplyThread=new MyThread;


    ui->widget->setStyleSheet("background: #ADD8E6;");
    Menulist<<"个人资料"<<"申请预约"<<"所有预约"<<"管理员控制";
    personInfo=new PersonInfo();
    applyInfo=new ApplyInfo();
    allApplyInfo=new AllApplyInfo();
    contrlPape=new ContrlPape();
    //接收申请的数据
    connect(applyInfo,&ApplyInfo::sendApplyInfo,[=](QJsonObject obj){
        qDebug()<<"apply data:"<<obj;
        QJsonObject obj1;
        obj1.insert("Apply","true");
        obj1.insert("Msg",obj);

        QJsonDocument doc(obj1);
        qDebug()<<"doc:"<<doc;
        QByteArray byte=doc.toBinaryData();
        tcpsocket->write(byte);
    });


//    personInfo->show();
    m_stackWidget=new QStackedWidget(this);
    m_stackWidget->addWidget(personInfo);
    m_stackWidget->addWidget(applyInfo);
    m_stackWidget->addWidget(allApplyInfo);
    m_stackWidget->addWidget(contrlPape);

    Vlayout=new QVBoxLayout();
    Hlayout=new QHBoxLayout(ui->frame);
    Hlayout->addWidget(m_stackWidget);
    //一进来显示的默认是个人信息界面
    m_stackWidget->setCurrentIndex(0);
    //初始化右上角按钮
    ui->pushButton_Min->setMinimumSize(QSize(40,40));
    ui->pushButton_Min->setMaximumSize(QSize(40,40));
    ui->pushButton_Min->setIcon(QIcon(":/new/prefix1/images/Min.jpg"));
    ui->pushButton_Min->setIconSize(ui->pushButton_Min->size()); // 让图标大小与按钮大小一致
    ui->pushButton_Min->setStyleSheet("border: none;"); // 去除按钮边框
    ui->pushButton_Max->setMinimumSize(QSize(40,40));
    ui->pushButton_Max->setMaximumSize(QSize(40,40));
    ui->pushButton_Max->setIcon(QIcon(":/new/prefix1/images/Max.jpg"));
    ui->pushButton_Max->setIconSize(ui->pushButton_Max->size()); // 让图标大小与按钮大小一致
    ui->pushButton_Max->setStyleSheet("border: none;"); // 去除按钮边框
    ui->pushButton_Close->setMinimumSize(QSize(40,40));
    ui->pushButton_Close->setMaximumSize(QSize(40,40));
    ui->pushButton_Close->setIcon(QIcon(":/new/prefix1/images/Close.jpg"));
    ui->pushButton_Close->setIconSize(ui->pushButton_Close->size()); // 让图标大小与按钮大小一致
    ui->pushButton_Close->setStyleSheet("border: none;"); // 去除按钮边框

    this->setWindowFlags(Qt::FramelessWindowHint); // 去除边框


    //按钮初始化
    Personbtn=new CustomButton("个人资料");
    Allapplybtn=new CustomButton("所有预约");
    Applybtn=new CustomButton("申请预约");
    Contrlbtn=new CustomButton("管理员控制");


    listbtn.append(Personbtn);
    listbtn.append(Applybtn);
    listbtn.append(Allapplybtn);
    listbtn.append(Contrlbtn);
    papeLayout=qobject_cast<QVBoxLayout*>(ui->widget->layout());

    papeLayout->setSpacing(0);//设置按钮间隙为0
    papeLayout->setMargin(0);//设置边框为0
    //setAttribute(Qt::WA_TranslucentBackground, true);//窗口透明
    Currentbtn=Personbtn;
    for(auto btn:listbtn)
    {
        //将按钮加入到pape布局
        papeLayout->addWidget(btn);
        btn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);//设置按钮的拉伸策略为拓展
        connect(btn,&CustomButton::CurrClickedSig,this,&MainWindow::changWindows);
    }

    //给程序添加图标
    this->setWindowIcon(QIcon(":/new/prefix1/images/Icon.jpg"));
    //将程序添加到托盘
    trayIcon=new QSystemTrayIcon();
    trayIcon->setIcon(QIcon(":/new/prefix1/images/Icon.jpg"));
    trayMenu =new QMenu();
    QAction *action_exit=new QAction("退出");
    QObject::connect(action_exit,&QAction::triggered,[=](){
        QApplication::quit();//程序退出
    });
    //关联托盘事件
    QObject::connect(trayIcon,&QSystemTrayIcon::activated,[=](QSystemTrayIcon::ActivationReason reason){

        if(reason==QSystemTrayIcon::Trigger)//点击左键
        {
            if(!this->isVisible())
            {
                this->showNormal();
            }
            else
            {
                this->hide();
            }
        }
    });
    trayMenu->addAction(action_exit);
    trayIcon->setContextMenu(trayMenu);
    trayIcon->show();

    tcpsocket=new QTcpSocket();
}

UserApply MainWindow::GetMyApplyMsg(QJsonObject obj)
{
    UserApply m_user;
    QJsonObject obj1=obj["userinfo"].toObject();
    m_user.Name=obj1["姓名"].toString();
    m_user.Sex=obj1["性别"].toString();
    m_user.Age=obj1["年龄"].toString().toUInt();
    m_user.ID=obj1["身份证"].toString();
    m_user.Account=obj1["账户"].toString();
    m_user.Address=obj1["地址"].toString();
    m_user.Telephone=obj1["电话"].toString();
    return m_user;

}
//登录成功
bool MainWindow::LoginSucessful(QJsonObject obj)
{

    user=GetMyApplyMsg(obj);
//    m_obj=obj["userinfo"].toObject();

    applylist=obj["applyinfo"].toArray();
    allapplylist=obj["allapllyinfo"].toArray();

    personInfo->showtable(user,applylist);
    allApplyInfo->showTable(allapplylist);
    longin->hide();
    this->show();
}





void MainWindow::on_pushButton_Close_clicked()
{

    QApplication::closeAllWindows();
    QApplication::exit();
}
//更改窗口响应函数
void MainWindow::changWindows(QString text)
{
    qDebug()<<"text:"<<text;
    if(text==Menulist.at(0))
    {
        qDebug()<<"test:"<<Menulist.at(0);
        Refresh();
        m_stackWidget->setCurrentIndex(0);
        m_stackWidget->update();


        Currentbtn=listbtn.at(0);
        return ;
    }
    else if(text==Menulist.at(1))
    {
        qDebug()<<"test:"<<Menulist.at(1);

        applyInfo->setUser(user);
        applyInfo->setObj(m_obj);
        m_stackWidget->setCurrentIndex(1);
        m_stackWidget->update();
        Currentbtn=listbtn.at(1);

        return ;
    }
    else if(text==Menulist.at(2))
    {
        qDebug()<<"test:"<<Menulist.at(2);
        m_stackWidget->setCurrentIndex(2);
        m_stackWidget->update();
        Refresh();
        Currentbtn=listbtn.at(2);

        return ;
    }
    else if(text==Menulist.at(3))
    {
        qDebug()<<"test:"<<Menulist.at(3);
        contrlPape->setObj(m_obj);
        contrlPape->setUser(user);
        m_stackWidget->setCurrentIndex(3);
        m_stackWidget->update();
        Currentbtn=listbtn.at(3);
        return ;
    }
}

void MainWindow::on_pushButton_Min_clicked()
{
    this->showMinimized();
}

void MainWindow::on_pushButton_Max_clicked()
{
    if(isMaximized())
    {
        //正常状态
        this->showNormal();
    }
    else
    {
        this->showMaximized();
    }

}

bool MainWindow::connectServer()
{
    // 禁用代理
    QNetworkProxy::setApplicationProxy(QNetworkProxy::NoProxy);
    connect(tcpsocket,&QTcpSocket::readyRead,this,&MainWindow::RecvMsg);
    if(!connectStatus)
    {
        QString Ip("192.168.199.20");
        int port=8080;
        tcpsocket->connectToHost(Ip, port); // 连接到服务器
        if (!tcpsocket->waitForConnected(1000))
        {
            // 等待连接，超时 5 秒
            QMessageBox::information(this,"提示","连接超时!",QMessageBox::Ok);
            return false;
        }
    }


    qDebug()<<"连接服务器成功";
    connectStatus=true;
    return true;
}

bool MainWindow::RecvMsg()
{
    QByteArray byte=tcpsocket->readAll();

    QJsonDocument doc=QJsonDocument::fromJson(byte);
    QJsonObject obj=doc.object();

    if(obj["sucess"]==true)
    {
        QJsonObject obj1=obj["data"].toObject();
        qDebug()<<"obj1:"<<obj1;
        LoginSucessful(obj1);
    }
    else if(obj["sucess"]==false)
    {
        longin->LoginFailSeting();
        return false;
    }
    //刷新
    else if(obj["Refresh"]==true)
    {
        QJsonObject obj1=obj["data"].toObject();
        qDebug()<<"refrech obj1:"<<obj1;
        RefreshSlots(obj1);
    }
}

void MainWindow::Refresh()
{


    QJsonObject obj;
    obj["Refresh"]="true";
    obj["Account"]=user.Account;
    QJsonDocument doc(obj);
    QByteArray byte=doc.toBinaryData();
    tcpsocket->write(byte);
    qDebug()<<"刷新";
}

void MainWindow::RefreshSlots(QJsonObject obj)
{

//    m_obj=obj["userinfo"].toObject();

    applylist=obj["applyinfo"].toArray();
    allapplylist=obj["allapllyinfo"].toArray();

    personInfo->showtable(user,applylist);
    allApplyInfo->showTable(allapplylist);
}
