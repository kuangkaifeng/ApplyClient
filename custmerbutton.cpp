#include "custmerbutton.h"

CustomButton* CustomButton::m_previousClickedButton = nullptr;  // 静态变量初始化

CustomButton::CustomButton(QString text,QWidget *parent)
    : QPushButton(parent),
      m_isClicked(false)  // 初始化按钮未被点击
{
    m_backgroundColor = QColor(0xADD8E6);  // 浅蓝色背景
    m_clickedColor = QColor(0x87CEFA);     // 点击时的浅蓝色（更亮一些）
    this->setText(text);
    this->setToolTip(text);
    setFlat(true);  // 使按钮看起来像一个平面按钮，没有边框
    //关联信号
    connect(this,&QPushButton::clicked,this,&CustomButton::slots_func);

}

void CustomButton::slots_func()
{
    //发送信号
    emit CurrClickedSig(this->text());
}

void CustomButton::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);  // 创建画家对象
    painter.setRenderHint(QPainter::Antialiasing);  // 开启抗锯齿

    // 判断按钮是否被点击
    if (m_isClicked) {
        painter.setBrush(m_clickedColor);  // 按钮被点击时使用点击颜色
    } else {
        painter.setBrush(m_backgroundColor);  // 普通状态下使用背景颜色
    }

    painter.setPen(Qt::NoPen);  // 去掉按钮的边框
    painter.drawRect(rect());   // 绘制按钮背景

    // 设置文本颜色为白色
    painter.setPen(Qt::white);

    // 绘制文本，居中显示
    painter.drawText(rect(), Qt::AlignCenter, text());


    // 调用父类的绘制事件，以确保按钮的默认绘制行为（例如边框）仍然有效
//    QPushButton::paintEvent(event);
}

void CustomButton::mousePressEvent(QMouseEvent *event)
{
    QPushButton::mousePressEvent(event);

    // 如果当前按钮被点击并且之前有按钮被选中，则恢复先前按钮的颜色
    if (m_isClicked) {
        return;  // 如果按钮已经被点击，则不进行任何操作
    }

    // 恢复之前按钮的状态
    if (m_previousClickedButton) {
        m_previousClickedButton->setClicked(false);  // 恢复之前按钮的状态
    }

    m_isClicked = true;  // 当前按钮设置为按下状态
    m_previousClickedButton = this;  // 记录当前按钮为被点击的按钮
    update();  // 刷新按钮绘制
}

void CustomButton::mouseReleaseEvent(QMouseEvent *event)
{
    QPushButton::mouseReleaseEvent(event);

    // 按钮释放时保持点击状态不变
    update();  // 刷新按钮绘制
}

void CustomButton::setClicked(bool clicked)
{
    m_isClicked = clicked;
    update();  // 更新按钮状态
}
