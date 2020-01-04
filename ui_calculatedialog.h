/********************************************************************************
** Form generated from reading UI file 'calculatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATEDIALOG_H
#define UI_CALCULATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculateDialog
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_opt_value;
    QLabel *label_output1;
    QLabel *label_output2;
    QLabel *label_output3;
    QLabel *label_output4;
    QLabel *label_output5;
    QLabel *label_output6;
    QLabel *label_output7;
    QLabel *label_output8;
    QLabel *label_output9;
    QLabel *label_output10;
    QLabel *label_output11;
    QLabel *label_output12;

    void setupUi(QDialog *CalculateDialog)
    {
        if (CalculateDialog->objectName().isEmpty())
            CalculateDialog->setObjectName(QString::fromUtf8("CalculateDialog"));
        CalculateDialog->resize(255, 497);
        pushButton = new QPushButton(CalculateDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 440, 161, 51));
        textBrowser = new QTextBrowser(CalculateDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 10, 256, 111));
        splitter = new QSplitter(CalculateDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(40, 130, 181, 306));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);

        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_opt_value = new QLabel(layoutWidget);
        label_opt_value->setObjectName(QString::fromUtf8("label_opt_value"));

        verticalLayout_2->addWidget(label_opt_value);

        label_output1 = new QLabel(layoutWidget);
        label_output1->setObjectName(QString::fromUtf8("label_output1"));

        verticalLayout_2->addWidget(label_output1);

        label_output2 = new QLabel(layoutWidget);
        label_output2->setObjectName(QString::fromUtf8("label_output2"));

        verticalLayout_2->addWidget(label_output2);

        label_output3 = new QLabel(layoutWidget);
        label_output3->setObjectName(QString::fromUtf8("label_output3"));

        verticalLayout_2->addWidget(label_output3);

        label_output4 = new QLabel(layoutWidget);
        label_output4->setObjectName(QString::fromUtf8("label_output4"));

        verticalLayout_2->addWidget(label_output4);

        label_output5 = new QLabel(layoutWidget);
        label_output5->setObjectName(QString::fromUtf8("label_output5"));

        verticalLayout_2->addWidget(label_output5);

        label_output6 = new QLabel(layoutWidget);
        label_output6->setObjectName(QString::fromUtf8("label_output6"));

        verticalLayout_2->addWidget(label_output6);

        label_output7 = new QLabel(layoutWidget);
        label_output7->setObjectName(QString::fromUtf8("label_output7"));

        verticalLayout_2->addWidget(label_output7);

        label_output8 = new QLabel(layoutWidget);
        label_output8->setObjectName(QString::fromUtf8("label_output8"));

        verticalLayout_2->addWidget(label_output8);

        label_output9 = new QLabel(layoutWidget);
        label_output9->setObjectName(QString::fromUtf8("label_output9"));

        verticalLayout_2->addWidget(label_output9);

        label_output10 = new QLabel(layoutWidget);
        label_output10->setObjectName(QString::fromUtf8("label_output10"));

        verticalLayout_2->addWidget(label_output10);

        label_output11 = new QLabel(layoutWidget);
        label_output11->setObjectName(QString::fromUtf8("label_output11"));

        verticalLayout_2->addWidget(label_output11);

        label_output12 = new QLabel(layoutWidget);
        label_output12->setObjectName(QString::fromUtf8("label_output12"));

        verticalLayout_2->addWidget(label_output12);

        splitter->addWidget(layoutWidget);

        retranslateUi(CalculateDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), CalculateDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(CalculateDialog);
    } // setupUi

    void retranslateUi(QDialog *CalculateDialog)
    {
        CalculateDialog->setWindowTitle(QApplication::translate("CalculateDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("CalculateDialog", "Finish", nullptr));
        textBrowser->setHtml(QApplication::translate("CalculateDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:36pt; font-weight:600;\">Computation Completed!</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("CalculateDialog", "Optimal Cost:", nullptr));
        label_2->setText(QApplication::translate("CalculateDialog", "X1:", nullptr));
        label_3->setText(QApplication::translate("CalculateDialog", "X2:", nullptr));
        label_4->setText(QApplication::translate("CalculateDialog", "X3:", nullptr));
        label_5->setText(QApplication::translate("CalculateDialog", "X4:", nullptr));
        label_6->setText(QApplication::translate("CalculateDialog", "X5:", nullptr));
        label_7->setText(QApplication::translate("CalculateDialog", "X6:", nullptr));
        label_8->setText(QApplication::translate("CalculateDialog", "X7:", nullptr));
        label_9->setText(QApplication::translate("CalculateDialog", "X8:", nullptr));
        label_10->setText(QApplication::translate("CalculateDialog", "X9:", nullptr));
        label_11->setText(QApplication::translate("CalculateDialog", "X10:", nullptr));
        label_12->setText(QApplication::translate("CalculateDialog", "X11:", nullptr));
        label_13->setText(QApplication::translate("CalculateDialog", "X12:", nullptr));
        label_opt_value->setText(QString());
        label_output1->setText(QString());
        label_output2->setText(QString());
        label_output3->setText(QString());
        label_output4->setText(QString());
        label_output5->setText(QString());
        label_output6->setText(QString());
        label_output7->setText(QString());
        label_output8->setText(QString());
        label_output9->setText(QString());
        label_output10->setText(QString());
        label_output11->setText(QString());
        label_output12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CalculateDialog: public Ui_CalculateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATEDIALOG_H
