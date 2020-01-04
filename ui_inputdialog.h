/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputDialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton_input;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_InventoryLimit;
    QLineEdit *lineEdit_ProductionLimit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_D1;
    QLineEdit *lineEdit_D2;
    QLineEdit *lineEdit_D3;
    QLineEdit *lineEdit_D4;
    QLineEdit *lineEdit_D5;
    QLineEdit *lineEdit_D6;
    QLineEdit *lineEdit_D7;
    QLineEdit *lineEdit_D8;
    QLineEdit *lineEdit_D9;
    QLineEdit *lineEdit_D10;
    QLineEdit *lineEdit_D11;
    QLineEdit *lineEdit_D12;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_C1;
    QLineEdit *lineEdit_C2;
    QLineEdit *lineEdit_C3;
    QLineEdit *lineEdit_C4;
    QLineEdit *lineEdit_C5;
    QLineEdit *lineEdit_C6;
    QLineEdit *lineEdit_C7;
    QLineEdit *lineEdit_C8;
    QLineEdit *lineEdit_C9;
    QLineEdit *lineEdit_C10;
    QLineEdit *lineEdit_C11;
    QLineEdit *lineEdit_C12;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_I1;
    QLineEdit *lineEdit_I2;
    QLineEdit *lineEdit_I3;
    QLineEdit *lineEdit_I4;
    QLineEdit *lineEdit_I5;
    QLineEdit *lineEdit_I6;
    QLineEdit *lineEdit_I7;
    QLineEdit *lineEdit_I8;
    QLineEdit *lineEdit_I9;
    QLineEdit *lineEdit_I10;
    QLineEdit *lineEdit_I11;
    QLineEdit *lineEdit_I12;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_O1;
    QLineEdit *lineEdit_O2;
    QLineEdit *lineEdit_O3;
    QLineEdit *lineEdit_O4;
    QLineEdit *lineEdit_O5;
    QLineEdit *lineEdit_O6;
    QLineEdit *lineEdit_O7;
    QLineEdit *lineEdit_O8;
    QLineEdit *lineEdit_O9;
    QLineEdit *lineEdit_O10;
    QLineEdit *lineEdit_O11;
    QLineEdit *lineEdit_O12;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName(QString::fromUtf8("InputDialog"));
        InputDialog->resize(321, 603);
        textBrowser = new QTextBrowser(InputDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 321, 151));
        pushButton_input = new QPushButton(InputDialog);
        pushButton_input->setObjectName(QString::fromUtf8("pushButton_input"));
        pushButton_input->setGeometry(QRect(180, 150, 131, 51));
        widget = new QWidget(InputDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 150, 161, 56));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEdit_InventoryLimit = new QLineEdit(widget);
        lineEdit_InventoryLimit->setObjectName(QString::fromUtf8("lineEdit_InventoryLimit"));

        verticalLayout_3->addWidget(lineEdit_InventoryLimit);

        lineEdit_ProductionLimit = new QLineEdit(widget);
        lineEdit_ProductionLimit->setObjectName(QString::fromUtf8("lineEdit_ProductionLimit"));

        verticalLayout_3->addWidget(lineEdit_ProductionLimit);


        horizontalLayout_2->addLayout(verticalLayout_3);

        widget1 = new QWidget(InputDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 210, 321, 390));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_D1 = new QLineEdit(widget1);
        lineEdit_D1->setObjectName(QString::fromUtf8("lineEdit_D1"));

        verticalLayout->addWidget(lineEdit_D1);

        lineEdit_D2 = new QLineEdit(widget1);
        lineEdit_D2->setObjectName(QString::fromUtf8("lineEdit_D2"));

        verticalLayout->addWidget(lineEdit_D2);

        lineEdit_D3 = new QLineEdit(widget1);
        lineEdit_D3->setObjectName(QString::fromUtf8("lineEdit_D3"));

        verticalLayout->addWidget(lineEdit_D3);

        lineEdit_D4 = new QLineEdit(widget1);
        lineEdit_D4->setObjectName(QString::fromUtf8("lineEdit_D4"));

        verticalLayout->addWidget(lineEdit_D4);

        lineEdit_D5 = new QLineEdit(widget1);
        lineEdit_D5->setObjectName(QString::fromUtf8("lineEdit_D5"));

        verticalLayout->addWidget(lineEdit_D5);

        lineEdit_D6 = new QLineEdit(widget1);
        lineEdit_D6->setObjectName(QString::fromUtf8("lineEdit_D6"));

        verticalLayout->addWidget(lineEdit_D6);

        lineEdit_D7 = new QLineEdit(widget1);
        lineEdit_D7->setObjectName(QString::fromUtf8("lineEdit_D7"));

        verticalLayout->addWidget(lineEdit_D7);

        lineEdit_D8 = new QLineEdit(widget1);
        lineEdit_D8->setObjectName(QString::fromUtf8("lineEdit_D8"));

        verticalLayout->addWidget(lineEdit_D8);

        lineEdit_D9 = new QLineEdit(widget1);
        lineEdit_D9->setObjectName(QString::fromUtf8("lineEdit_D9"));

        verticalLayout->addWidget(lineEdit_D9);

        lineEdit_D10 = new QLineEdit(widget1);
        lineEdit_D10->setObjectName(QString::fromUtf8("lineEdit_D10"));

        verticalLayout->addWidget(lineEdit_D10);

        lineEdit_D11 = new QLineEdit(widget1);
        lineEdit_D11->setObjectName(QString::fromUtf8("lineEdit_D11"));

        verticalLayout->addWidget(lineEdit_D11);

        lineEdit_D12 = new QLineEdit(widget1);
        lineEdit_D12->setObjectName(QString::fromUtf8("lineEdit_D12"));

        verticalLayout->addWidget(lineEdit_D12);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_C1 = new QLineEdit(widget1);
        lineEdit_C1->setObjectName(QString::fromUtf8("lineEdit_C1"));

        verticalLayout_2->addWidget(lineEdit_C1);

        lineEdit_C2 = new QLineEdit(widget1);
        lineEdit_C2->setObjectName(QString::fromUtf8("lineEdit_C2"));

        verticalLayout_2->addWidget(lineEdit_C2);

        lineEdit_C3 = new QLineEdit(widget1);
        lineEdit_C3->setObjectName(QString::fromUtf8("lineEdit_C3"));

        verticalLayout_2->addWidget(lineEdit_C3);

        lineEdit_C4 = new QLineEdit(widget1);
        lineEdit_C4->setObjectName(QString::fromUtf8("lineEdit_C4"));

        verticalLayout_2->addWidget(lineEdit_C4);

        lineEdit_C5 = new QLineEdit(widget1);
        lineEdit_C5->setObjectName(QString::fromUtf8("lineEdit_C5"));

        verticalLayout_2->addWidget(lineEdit_C5);

        lineEdit_C6 = new QLineEdit(widget1);
        lineEdit_C6->setObjectName(QString::fromUtf8("lineEdit_C6"));

        verticalLayout_2->addWidget(lineEdit_C6);

        lineEdit_C7 = new QLineEdit(widget1);
        lineEdit_C7->setObjectName(QString::fromUtf8("lineEdit_C7"));

        verticalLayout_2->addWidget(lineEdit_C7);

        lineEdit_C8 = new QLineEdit(widget1);
        lineEdit_C8->setObjectName(QString::fromUtf8("lineEdit_C8"));

        verticalLayout_2->addWidget(lineEdit_C8);

        lineEdit_C9 = new QLineEdit(widget1);
        lineEdit_C9->setObjectName(QString::fromUtf8("lineEdit_C9"));

        verticalLayout_2->addWidget(lineEdit_C9);

        lineEdit_C10 = new QLineEdit(widget1);
        lineEdit_C10->setObjectName(QString::fromUtf8("lineEdit_C10"));

        verticalLayout_2->addWidget(lineEdit_C10);

        lineEdit_C11 = new QLineEdit(widget1);
        lineEdit_C11->setObjectName(QString::fromUtf8("lineEdit_C11"));

        verticalLayout_2->addWidget(lineEdit_C11);

        lineEdit_C12 = new QLineEdit(widget1);
        lineEdit_C12->setObjectName(QString::fromUtf8("lineEdit_C12"));

        verticalLayout_2->addWidget(lineEdit_C12);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        lineEdit_I1 = new QLineEdit(widget1);
        lineEdit_I1->setObjectName(QString::fromUtf8("lineEdit_I1"));

        verticalLayout_4->addWidget(lineEdit_I1);

        lineEdit_I2 = new QLineEdit(widget1);
        lineEdit_I2->setObjectName(QString::fromUtf8("lineEdit_I2"));

        verticalLayout_4->addWidget(lineEdit_I2);

        lineEdit_I3 = new QLineEdit(widget1);
        lineEdit_I3->setObjectName(QString::fromUtf8("lineEdit_I3"));

        verticalLayout_4->addWidget(lineEdit_I3);

        lineEdit_I4 = new QLineEdit(widget1);
        lineEdit_I4->setObjectName(QString::fromUtf8("lineEdit_I4"));

        verticalLayout_4->addWidget(lineEdit_I4);

        lineEdit_I5 = new QLineEdit(widget1);
        lineEdit_I5->setObjectName(QString::fromUtf8("lineEdit_I5"));

        verticalLayout_4->addWidget(lineEdit_I5);

        lineEdit_I6 = new QLineEdit(widget1);
        lineEdit_I6->setObjectName(QString::fromUtf8("lineEdit_I6"));

        verticalLayout_4->addWidget(lineEdit_I6);

        lineEdit_I7 = new QLineEdit(widget1);
        lineEdit_I7->setObjectName(QString::fromUtf8("lineEdit_I7"));

        verticalLayout_4->addWidget(lineEdit_I7);

        lineEdit_I8 = new QLineEdit(widget1);
        lineEdit_I8->setObjectName(QString::fromUtf8("lineEdit_I8"));

        verticalLayout_4->addWidget(lineEdit_I8);

        lineEdit_I9 = new QLineEdit(widget1);
        lineEdit_I9->setObjectName(QString::fromUtf8("lineEdit_I9"));

        verticalLayout_4->addWidget(lineEdit_I9);

        lineEdit_I10 = new QLineEdit(widget1);
        lineEdit_I10->setObjectName(QString::fromUtf8("lineEdit_I10"));

        verticalLayout_4->addWidget(lineEdit_I10);

        lineEdit_I11 = new QLineEdit(widget1);
        lineEdit_I11->setObjectName(QString::fromUtf8("lineEdit_I11"));

        verticalLayout_4->addWidget(lineEdit_I11);

        lineEdit_I12 = new QLineEdit(widget1);
        lineEdit_I12->setObjectName(QString::fromUtf8("lineEdit_I12"));

        verticalLayout_4->addWidget(lineEdit_I12);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        lineEdit_O1 = new QLineEdit(widget1);
        lineEdit_O1->setObjectName(QString::fromUtf8("lineEdit_O1"));

        verticalLayout_5->addWidget(lineEdit_O1);

        lineEdit_O2 = new QLineEdit(widget1);
        lineEdit_O2->setObjectName(QString::fromUtf8("lineEdit_O2"));

        verticalLayout_5->addWidget(lineEdit_O2);

        lineEdit_O3 = new QLineEdit(widget1);
        lineEdit_O3->setObjectName(QString::fromUtf8("lineEdit_O3"));

        verticalLayout_5->addWidget(lineEdit_O3);

        lineEdit_O4 = new QLineEdit(widget1);
        lineEdit_O4->setObjectName(QString::fromUtf8("lineEdit_O4"));

        verticalLayout_5->addWidget(lineEdit_O4);

        lineEdit_O5 = new QLineEdit(widget1);
        lineEdit_O5->setObjectName(QString::fromUtf8("lineEdit_O5"));

        verticalLayout_5->addWidget(lineEdit_O5);

        lineEdit_O6 = new QLineEdit(widget1);
        lineEdit_O6->setObjectName(QString::fromUtf8("lineEdit_O6"));

        verticalLayout_5->addWidget(lineEdit_O6);

        lineEdit_O7 = new QLineEdit(widget1);
        lineEdit_O7->setObjectName(QString::fromUtf8("lineEdit_O7"));

        verticalLayout_5->addWidget(lineEdit_O7);

        lineEdit_O8 = new QLineEdit(widget1);
        lineEdit_O8->setObjectName(QString::fromUtf8("lineEdit_O8"));

        verticalLayout_5->addWidget(lineEdit_O8);

        lineEdit_O9 = new QLineEdit(widget1);
        lineEdit_O9->setObjectName(QString::fromUtf8("lineEdit_O9"));

        verticalLayout_5->addWidget(lineEdit_O9);

        lineEdit_O10 = new QLineEdit(widget1);
        lineEdit_O10->setObjectName(QString::fromUtf8("lineEdit_O10"));

        verticalLayout_5->addWidget(lineEdit_O10);

        lineEdit_O11 = new QLineEdit(widget1);
        lineEdit_O11->setObjectName(QString::fromUtf8("lineEdit_O11"));

        verticalLayout_5->addWidget(lineEdit_O11);

        lineEdit_O12 = new QLineEdit(widget1);
        lineEdit_O12->setObjectName(QString::fromUtf8("lineEdit_O12"));

        verticalLayout_5->addWidget(lineEdit_O12);


        horizontalLayout->addLayout(verticalLayout_5);


        retranslateUi(InputDialog);

        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QApplication::translate("InputDialog", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("InputDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-weight:600;\">Input Coefficients:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">i = 1...12</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">Inventory Limit: Inv</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">Monthly Prodution Limit: Pro</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">Every Months Demands: Di</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">Every Months Production Cost per Unit: Ci</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">Every Months Inventory Cost per Unit: Ii</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-weight:600;\">Every Months Other Forms Cost per Unit: Oi</span></p></body></html>", nullptr));
        pushButton_input->setText(QApplication::translate("InputDialog", "Input", nullptr));
        label_5->setText(QApplication::translate("InputDialog", "Inv", nullptr));
        label_6->setText(QApplication::translate("InputDialog", "Pro", nullptr));
        label->setText(QApplication::translate("InputDialog", "Di", nullptr));
        label_3->setText(QApplication::translate("InputDialog", "Ci", nullptr));
        label_2->setText(QApplication::translate("InputDialog", "Ii", nullptr));
        label_4->setText(QApplication::translate("InputDialog", "Oi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H
