/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *img_label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editRadius;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_result;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCalc;
    QPushButton *btnExit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(437, 284);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        img_label = new QLabel(Widget);
        img_label->setObjectName("img_label");
        img_label->setMaximumSize(QSize(200, 100));
        img_label->setPixmap(QPixmap(QString::fromUtf8(":/img/myabc/2.png")));
        img_label->setScaledContents(true);

        horizontalLayout_3->addWidget(img_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        editRadius = new QLineEdit(Widget);
        editRadius->setObjectName("editRadius");

        horizontalLayout->addWidget(editRadius);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_result = new QLabel(Widget);
        label_result->setObjectName("label_result");

        horizontalLayout_2->addWidget(label_result);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnCalc = new QPushButton(Widget);
        btnCalc->setObjectName("btnCalc");

        horizontalLayout_2->addWidget(btnCalc);

        btnExit = new QPushButton(Widget);
        btnExit->setObjectName("btnExit");

        horizontalLayout_2->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Widget);
        QObject::connect(btnExit, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        img_label->setText(QString());
        label->setText(QCoreApplication::translate("Widget", "\345\234\206\347\232\204\345\215\212\345\276\204\357\274\232", nullptr));
        label_result->setText(QCoreApplication::translate("Widget", "\351\235\242\347\247\257\357\274\232", nullptr));
        btnCalc->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        btnExit->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
