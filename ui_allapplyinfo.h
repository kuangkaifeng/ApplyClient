/********************************************************************************
** Form generated from reading UI file 'allapplyinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLAPPLYINFO_H
#define UI_ALLAPPLYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllApplyInfo
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;

    void setupUi(QWidget *AllApplyInfo)
    {
        if (AllApplyInfo->objectName().isEmpty())
            AllApplyInfo->setObjectName(QString::fromUtf8("AllApplyInfo"));
        AllApplyInfo->resize(863, 609);
        verticalLayout_2 = new QVBoxLayout(AllApplyInfo);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(AllApplyInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dateTimeEdit = new QDateTimeEdit(AllApplyInfo);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dateTimeEdit);

        label_3 = new QLabel(AllApplyInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        dateTimeEdit_2 = new QDateTimeEdit(AllApplyInfo);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        sizePolicy.setHeightForWidth(dateTimeEdit_2->sizePolicy().hasHeightForWidth());
        dateTimeEdit_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dateTimeEdit_2);

        label = new QLabel(AllApplyInfo);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(AllApplyInfo);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox);

        label_4 = new QLabel(AllApplyInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_2 = new QComboBox(AllApplyInfo);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox_2);

        label_5 = new QLabel(AllApplyInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBox_3 = new QComboBox(AllApplyInfo);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        sizePolicy1.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox_3);

        pushButton = new QPushButton(AllApplyInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(65, 0));
        pushButton->setMaximumSize(QSize(65, 16777215));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(AllApplyInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);


        verticalLayout_3->addWidget(frame_2);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 15);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AllApplyInfo);

        QMetaObject::connectSlotsByName(AllApplyInfo);
    } // setupUi

    void retranslateUi(QWidget *AllApplyInfo)
    {
        AllApplyInfo->setWindowTitle(QApplication::translate("AllApplyInfo", "Form", nullptr));
        label_2->setText(QApplication::translate("AllApplyInfo", "\344\273\216", nullptr));
        label_3->setText(QApplication::translate("AllApplyInfo", "\350\207\263", nullptr));
        label->setText(QApplication::translate("AllApplyInfo", "\346\216\222\345\272\217\357\274\232", nullptr));
        label_4->setText(QApplication::translate("AllApplyInfo", "\351\242\204\347\272\246\347\212\266\346\200\201", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("AllApplyInfo", "\345\276\205\345\256\241\346\211\271", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("AllApplyInfo", "\350\277\207\346\234\237", nullptr));

        label_5->setText(QApplication::translate("AllApplyInfo", "\345\256\241\346\211\271\347\212\266\346\200\201", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("AllApplyInfo", "\345\256\241\346\211\271\351\200\232\350\277\207", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("AllApplyInfo", "\345\276\205\345\256\241\346\240\270", nullptr));

        pushButton->setText(QApplication::translate("AllApplyInfo", "\347\241\256\345\256\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AllApplyInfo", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AllApplyInfo", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AllApplyInfo", "\345\256\241\346\211\271\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AllApplyInfo", "\351\242\204\347\272\246\347\224\262\346\226\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AllApplyInfo", "\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("AllApplyInfo", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("AllApplyInfo", "\351\242\204\347\272\246\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("AllApplyInfo", "\344\277\235\345\257\206\347\272\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("AllApplyInfo", "\351\242\204\347\272\246\347\220\206\347\224\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("AllApplyInfo", "\351\242\204\347\272\246\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("AllApplyInfo", "\347\224\237\346\210\220\346\226\207\344\273\266\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllApplyInfo: public Ui_AllApplyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLAPPLYINFO_H
