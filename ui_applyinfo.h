/********************************************************************************
** Form generated from reading UI file 'applyinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYINFO_H
#define UI_APPLYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplyInfo
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLineEdit *lineEdit_person;
    QLabel *label_9;
    QComboBox *ApplyAComBox;
    QLabel *label_15;
    QLabel *label_10;
    QLineEdit *ApplyNameliEdit;
    QComboBox *securityComBox;
    QComboBox *ApplyTypeComBox;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *lineEdit_reason;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_address;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *burnPassword;
    QLineEdit *filePasswordEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *addFileButton;
    QPushButton *addPathButton;
    QPushButton *clearButton;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *totalSizeEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_burnDataOnly;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *applyButton;

    void setupUi(QWidget *ApplyInfo)
    {
        if (ApplyInfo->objectName().isEmpty())
            ApplyInfo->setObjectName(QString::fromUtf8("ApplyInfo"));
        ApplyInfo->resize(1087, 547);
        verticalLayout_2 = new QVBoxLayout(ApplyInfo);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ApplyInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(12);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 0));
        label_13->setFont(font);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("border:none"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 0, 2, 1, 1);

        lineEdit_person = new QLineEdit(frame);
        lineEdit_person->setObjectName(QString::fromUtf8("lineEdit_person"));

        gridLayout->addWidget(lineEdit_person, 0, 5, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 0));
        label_9->setMaximumSize(QSize(16777215, 16777215));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("border:none"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        ApplyAComBox = new QComboBox(frame);
        ApplyAComBox->addItem(QString());
        ApplyAComBox->addItem(QString());
        ApplyAComBox->setObjectName(QString::fromUtf8("ApplyAComBox"));
        sizePolicy.setHeightForWidth(ApplyAComBox->sizePolicy().hasHeightForWidth());
        ApplyAComBox->setSizePolicy(sizePolicy);
        ApplyAComBox->setMinimumSize(QSize(0, 0));
        ApplyAComBox->setMaximumSize(QSize(1000, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        ApplyAComBox->setFont(font1);
        ApplyAComBox->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView { min-height: 30px}\n"
""));
        ApplyAComBox->setMaxVisibleItems(5);
        ApplyAComBox->setIconSize(QSize(25, 25));

        gridLayout->addWidget(ApplyAComBox, 1, 3, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("border:none"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 1, 2, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("SimSun"));
        font2.setPointSize(12);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("border:none"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        ApplyNameliEdit = new QLineEdit(frame);
        ApplyNameliEdit->setObjectName(QString::fromUtf8("ApplyNameliEdit"));
        sizePolicy.setHeightForWidth(ApplyNameliEdit->sizePolicy().hasHeightForWidth());
        ApplyNameliEdit->setSizePolicy(sizePolicy);
        ApplyNameliEdit->setMinimumSize(QSize(0, 0));
        ApplyNameliEdit->setMaximumSize(QSize(1000, 30));
        ApplyNameliEdit->setFont(font);
        ApplyNameliEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(ApplyNameliEdit, 0, 1, 1, 1);

        securityComBox = new QComboBox(frame);
        securityComBox->addItem(QString());
        securityComBox->addItem(QString());
        securityComBox->addItem(QString());
        securityComBox->setObjectName(QString::fromUtf8("securityComBox"));
        sizePolicy.setHeightForWidth(securityComBox->sizePolicy().hasHeightForWidth());
        securityComBox->setSizePolicy(sizePolicy);
        securityComBox->setMinimumSize(QSize(0, 0));
        securityComBox->setMaximumSize(QSize(1000, 30));
        securityComBox->setFont(font);
        securityComBox->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView { min-height: 90px; }\n"
""));
        securityComBox->setIconSize(QSize(25, 25));

        gridLayout->addWidget(securityComBox, 0, 3, 1, 1);

        ApplyTypeComBox = new QComboBox(frame);
        ApplyTypeComBox->addItem(QString());
        ApplyTypeComBox->addItem(QString());
        ApplyTypeComBox->addItem(QString());
        ApplyTypeComBox->setObjectName(QString::fromUtf8("ApplyTypeComBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ApplyTypeComBox->sizePolicy().hasHeightForWidth());
        ApplyTypeComBox->setSizePolicy(sizePolicy1);
        ApplyTypeComBox->setMinimumSize(QSize(0, 0));
        ApplyTypeComBox->setMaximumSize(QSize(1000, 30));
        ApplyTypeComBox->setFont(font1);
        ApplyTypeComBox->setStyleSheet(QString::fromUtf8("QComboBox QAbstractItemView { min-height: 90px; }\n"
""));

        gridLayout->addWidget(ApplyTypeComBox, 1, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(90, 32));
        label_6->setMaximumSize(QSize(80, 32));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("border:none"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 1, 4, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMinimumSize(QSize(90, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border:none"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        lineEdit_reason = new QLineEdit(frame);
        lineEdit_reason->setObjectName(QString::fromUtf8("lineEdit_reason"));

        gridLayout->addWidget(lineEdit_reason, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(frame);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        horizontalLayout_3->addWidget(dateTimeEdit);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(90, 30));
        label_8->setMaximumSize(QSize(80, 30));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("border:none"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_8);

        lineEdit_address = new QLineEdit(frame);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));
        lineEdit_address->setMinimumSize(QSize(400, 0));

        horizontalLayout_3->addWidget(lineEdit_address);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(11, -1, -1, -1);
        burnPassword = new QLabel(frame);
        burnPassword->setObjectName(QString::fromUtf8("burnPassword"));
        burnPassword->setMinimumSize(QSize(140, 30));
        burnPassword->setMaximumSize(QSize(140, 30));
        burnPassword->setFont(font);

        horizontalLayout_4->addWidget(burnPassword);

        filePasswordEdit = new QLineEdit(frame);
        filePasswordEdit->setObjectName(QString::fromUtf8("filePasswordEdit"));
        filePasswordEdit->setMinimumSize(QSize(284, 30));
        filePasswordEdit->setMaximumSize(QSize(284, 30));

        horizontalLayout_4->addWidget(filePasswordEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        addFileButton = new QPushButton(frame);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
        addFileButton->setMinimumSize(QSize(180, 30));
        addFileButton->setMaximumSize(QSize(180, 30));
        addFileButton->setFont(font);
        addFileButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-color: rgb(170, 170, 170);\n"
"background: #076B63;\n"
"border-radius: 4px;"));

        horizontalLayout_4->addWidget(addFileButton);

        addPathButton = new QPushButton(frame);
        addPathButton->setObjectName(QString::fromUtf8("addPathButton"));
        addPathButton->setMinimumSize(QSize(180, 30));
        addPathButton->setMaximumSize(QSize(180, 30));
        addPathButton->setFont(font);
        addPathButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-color: rgb(170, 170, 170);\n"
"background: #076B63;\n"
"border-radius: 4px;"));

        horizontalLayout_4->addWidget(addPathButton);

        clearButton = new QPushButton(frame);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(80, 30));
        clearButton->setMaximumSize(QSize(80, 30));
        clearButton->setFont(font);
        clearButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-color: rgb(170, 170, 170);\n"
"background: #076B63;\n"
"border-radius: 4px;"));

        horizontalLayout_4->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font3;
        font3.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font3);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font3);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font3);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(0, 201));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->horizontalHeader()->setMinimumSectionSize(52);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setMinimumSize(QSize(120, 30));
        label_7->setMaximumSize(QSize(120, 30));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("border:none"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_7);

        totalSizeEdit = new QLineEdit(frame);
        totalSizeEdit->setObjectName(QString::fromUtf8("totalSizeEdit"));
        sizePolicy1.setHeightForWidth(totalSizeEdit->sizePolicy().hasHeightForWidth());
        totalSizeEdit->setSizePolicy(sizePolicy1);
        totalSizeEdit->setMinimumSize(QSize(100, 0));
        totalSizeEdit->setMaximumSize(QSize(100, 30));
        totalSizeEdit->setFont(font);
        totalSizeEdit->setStyleSheet(QString::fromUtf8(""));
        totalSizeEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(totalSizeEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(140, 0));
        label_2->setMaximumSize(QSize(140, 16777215));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_2->addWidget(label_2);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8("border-width:1px;\n"
"border-radius:2px;\n"
"border-style:solid;\n"
"border-color: rgb(170, 170, 170);\n"
"background-color: rgb(255, 255, 255);"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_burnDataOnly = new QLabel(frame);
        label_burnDataOnly->setObjectName(QString::fromUtf8("label_burnDataOnly"));
        label_burnDataOnly->setFont(font);
        label_burnDataOnly->setStyleSheet(QString::fromUtf8("color: rgb(255, 25, 48);\n"
"border:none;"));

        horizontalLayout_2->addWidget(label_burnDataOnly);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        applyButton = new QPushButton(frame);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setMinimumSize(QSize(120, 30));
        applyButton->setMaximumSize(QSize(120, 30));
        applyButton->setFont(font);
        applyButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-color: rgb(170, 170, 170);\n"
"background: #076B63;\n"
"border-radius: 4px;"));

        horizontalLayout->addWidget(applyButton);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ApplyInfo);

        securityComBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ApplyInfo);
    } // setupUi

    void retranslateUi(QWidget *ApplyInfo)
    {
        ApplyInfo->setWindowTitle(QApplication::translate("ApplyInfo", "Form", nullptr));
        label_13->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\345\257\206\347\272\247\357\274\232</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\351\242\204\347\272\246\347\261\273\345\236\213\357\274\232</p></body></html>", nullptr));
        ApplyAComBox->setItemText(0, QApplication::translate("ApplyInfo", "\345\206\265\345\207\257\351\224\213", nullptr));
        ApplyAComBox->setItemText(1, QApplication::translate("ApplyInfo", "\347\216\213\351\235\231", nullptr));

        label_15->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\351\242\204\347\272\246\347\224\262\346\226\271\357\274\232</p></body></html>", nullptr));
        label_10->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\351\242\204\347\272\246\345\220\215\347\247\260\357\274\232</p></body></html>", nullptr));
        ApplyNameliEdit->setText(QString());
        securityComBox->setItemText(0, QApplication::translate("ApplyInfo", "\345\210\235\347\272\247", nullptr));
        securityComBox->setItemText(1, QApplication::translate("ApplyInfo", "\344\270\255\347\272\247", nullptr));
        securityComBox->setItemText(2, QApplication::translate("ApplyInfo", "\351\253\230\347\272\247", nullptr));

        ApplyTypeComBox->setItemText(0, QApplication::translate("ApplyInfo", "\346\203\263\344\275\240\344\272\206", nullptr));
        ApplyTypeComBox->setItemText(1, QApplication::translate("ApplyInfo", "\346\237\245\345\262\227", nullptr));
        ApplyTypeComBox->setItemText(2, QApplication::translate("ApplyInfo", "\346\227\240\350\201\212\350\247\201\350\247\201", nullptr));

        label_6->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\347\224\263\350\257\267\345\216\237\345\233\240\357\274\232</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\347\224\263\350\257\267\344\272\272\357\274\232</p></body></html>", nullptr));
        label->setText(QApplication::translate("ApplyInfo", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_8->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\344\275\215\347\275\256\357\274\232</p></body></html>", nullptr));
        burnPassword->setText(QApplication::translate("ApplyInfo", "<html><head/><body><p align=\"center\">\346\226\207\344\273\266\347\224\237\346\210\220\345\257\206\347\240\201\357\274\232</p></body></html>", nullptr));
        addFileButton->setText(QApplication::translate("ApplyInfo", "\346\267\273\345\212\240\347\224\263\350\257\267\346\226\207\344\273\266", nullptr));
        addPathButton->setText(QApplication::translate("ApplyInfo", "\347\224\237\346\210\220\347\224\263\350\257\267\346\226\207\344\273\266", nullptr));
        clearButton->setText(QApplication::translate("ApplyInfo", "\346\270\205\347\251\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ApplyInfo", "\346\226\207\344\273\266\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ApplyInfo", "\345\244\247\345\260\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ApplyInfo", "\346\235\245\346\272\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ApplyInfo", "\345\210\240\351\231\244", nullptr));
        label_7->setText(QApplication::translate("ApplyInfo", "\346\226\207\344\273\266\346\200\273\345\244\247\345\260\217\357\274\232", nullptr));
        label_2->setText(QString());
        label_burnDataOnly->setText(QApplication::translate("ApplyInfo", "\345\275\223\345\211\215\346\226\207\344\273\266\347\224\237\346\210\220\347\212\266\346\200\201\357\274\232", nullptr));
        applyButton->setText(QApplication::translate("ApplyInfo", "\347\224\263\350\257\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplyInfo: public Ui_ApplyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYINFO_H
