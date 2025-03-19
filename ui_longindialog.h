/********************************************************************************
** Form generated from reading UI file 'longindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LONGINDIALOG_H
#define UI_LONGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LonginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_normal;
    QPushButton *pushButton_contrl;
    QPushButton *pushButton_admin;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_account;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *LonginDialog)
    {
        if (LonginDialog->objectName().isEmpty())
            LonginDialog->setObjectName(QString::fromUtf8("LonginDialog"));
        LonginDialog->resize(447, 377);
        verticalLayout_2 = new QVBoxLayout(LonginDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_normal = new QPushButton(LonginDialog);
        pushButton_normal->setObjectName(QString::fromUtf8("pushButton_normal"));
        pushButton_normal->setMinimumSize(QSize(0, 80));

        horizontalLayout->addWidget(pushButton_normal);

        pushButton_contrl = new QPushButton(LonginDialog);
        pushButton_contrl->setObjectName(QString::fromUtf8("pushButton_contrl"));
        pushButton_contrl->setMinimumSize(QSize(0, 80));

        horizontalLayout->addWidget(pushButton_contrl);

        pushButton_admin = new QPushButton(LonginDialog);
        pushButton_admin->setObjectName(QString::fromUtf8("pushButton_admin"));
        pushButton_admin->setMinimumSize(QSize(0, 80));

        horizontalLayout->addWidget(pushButton_admin);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(LonginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_account = new QLineEdit(LonginDialog);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));
        lineEdit_account->setMinimumSize(QSize(400, 40));
        lineEdit_account->setMaximumSize(QSize(400, 40));

        horizontalLayout_4->addWidget(lineEdit_account);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        label = new QLabel(LonginDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_password = new QLineEdit(LonginDialog);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(400, 39));
        lineEdit_password->setMaximumSize(QSize(400, 40));

        horizontalLayout_3->addWidget(lineEdit_password);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_ok = new QPushButton(LonginDialog);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        horizontalLayout_2->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(LonginDialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout_2->addWidget(pushButton_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 5);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 5);
        verticalLayout->setStretch(5, 3);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LonginDialog);

        QMetaObject::connectSlotsByName(LonginDialog);
    } // setupUi

    void retranslateUi(QDialog *LonginDialog)
    {
        LonginDialog->setWindowTitle(QApplication::translate("LonginDialog", "Dialog", nullptr));
        pushButton_normal->setText(QApplication::translate("LonginDialog", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        pushButton_contrl->setText(QApplication::translate("LonginDialog", "\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton_admin->setText(QApplication::translate("LonginDialog", "\350\266\205\347\272\247\347\256\241\347\220\206\345\221\230", nullptr));
        label_2->setText(QApplication::translate("LonginDialog", "\350\264\246\346\210\267", nullptr));
        label->setText(QApplication::translate("LonginDialog", "\345\257\206\347\240\201", nullptr));
        pushButton_ok->setText(QApplication::translate("LonginDialog", "\347\231\273\345\275\225", nullptr));
        pushButton_cancel->setText(QApplication::translate("LonginDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LonginDialog: public Ui_LonginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LONGINDIALOG_H
