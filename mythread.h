#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>


class MyThread:public QThread
{
    Q_OBJECT
public:
    MyThread(QObject* aprent=nullptr);
protected:
    void run() override;
};

#endif // MYTHREAD_H
