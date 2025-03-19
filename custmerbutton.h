#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QPushButton>
#include <QPainter>
#include <QMouseEvent>

class CustomButton : public QPushButton
{
    Q_OBJECT

public:
    explicit CustomButton(QString text=nullptr,QWidget *parent = nullptr);
signals:
    //点击信号
    void CurrClickedSig(QString text);
public slots:
    void slots_func();
protected:
    void paintEvent(QPaintEvent *event) override;  // 绘制按钮
    void mousePressEvent(QMouseEvent *event) override;  // 按钮按下事件
    void mouseReleaseEvent(QMouseEvent *event) override;  // 按钮释放事件

private:
    QColor m_backgroundColor;  // 浅蓝色背景
    QColor m_clickedColor;     // 点击时的浅蓝色
    bool m_isClicked;          // 当前按钮是否被点击
    static CustomButton* m_previousClickedButton;  // 用于记录上一个被点击的按钮

    void setClicked(bool clicked);  // 设置按钮点击状态
};

#endif // CUSTOMBUTTON_H
