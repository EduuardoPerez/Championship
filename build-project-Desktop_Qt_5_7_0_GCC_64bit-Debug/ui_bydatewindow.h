/********************************************************************************
** Form generated from reading UI file 'bydatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BYDATEWINDOW_H
#define UI_BYDATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ByDateWindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_9;
    QDateEdit *deDateBeg;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_10;
    QDateEdit *deDateFin;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QTextBrowser *tbInfo;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pbDescargar;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pbRegresar;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *pbSalir;
    QSpacerItem *horizontalSpacer_27;

    void setupUi(QDialog *ByDateWindow)
    {
        if (ByDateWindow->objectName().isEmpty())
            ByDateWindow->setObjectName(QStringLiteral("ByDateWindow"));
        ByDateWindow->resize(800, 500);
        widget = new QWidget(ByDateWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 731, 471));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setPointSize(32);
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font1;
        font1.setPointSize(18);
        label_9->setFont(font1);

        horizontalLayout_6->addWidget(label_9);

        deDateBeg = new QDateEdit(widget);
        deDateBeg->setObjectName(QStringLiteral("deDateBeg"));
        deDateBeg->setEnabled(true);

        horizontalLayout_6->addWidget(deDateBeg);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_6->addWidget(label_10);

        deDateFin = new QDateEdit(widget);
        deDateFin->setObjectName(QStringLiteral("deDateFin"));
        deDateFin->setEnabled(true);

        horizontalLayout_6->addWidget(deDateFin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        tbInfo = new QTextBrowser(widget);
        tbInfo->setObjectName(QStringLiteral("tbInfo"));

        horizontalLayout_3->addWidget(tbInfo);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        pbDescargar = new QPushButton(widget);
        pbDescargar->setObjectName(QStringLiteral("pbDescargar"));

        horizontalLayout_4->addWidget(pbDescargar);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_22);

        pbRegresar = new QPushButton(widget);
        pbRegresar->setObjectName(QStringLiteral("pbRegresar"));
        pbRegresar->setEnabled(true);

        horizontalLayout->addWidget(pbRegresar);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_23);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_24);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_25);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_26);

        pbSalir = new QPushButton(widget);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));

        horizontalLayout->addWidget(pbSalir);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_27);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);


        retranslateUi(ByDateWindow);
        QObject::connect(pbRegresar, SIGNAL(clicked()), ByDateWindow, SLOT(close()));
        QObject::connect(pbSalir, SIGNAL(clicked()), ByDateWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(ByDateWindow);
    } // setupUi

    void retranslateUi(QDialog *ByDateWindow)
    {
        ByDateWindow->setWindowTitle(QApplication::translate("ByDateWindow", "Championship", 0));
        label_8->setText(QApplication::translate("ByDateWindow", "Personas Inscritas", 0));
        label_9->setText(QApplication::translate("ByDateWindow", "Desde:", 0));
        deDateBeg->setDisplayFormat(QApplication::translate("ByDateWindow", "dd/MM/yyyy", 0));
        label_10->setText(QApplication::translate("ByDateWindow", "hasta:", 0));
        deDateFin->setDisplayFormat(QApplication::translate("ByDateWindow", "dd/MM/yyyy", 0));
        pbDescargar->setText(QApplication::translate("ByDateWindow", "Descargar", 0));
        pbRegresar->setText(QApplication::translate("ByDateWindow", "Regresar", 0));
        pbSalir->setText(QApplication::translate("ByDateWindow", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class ByDateWindow: public Ui_ByDateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BYDATEWINDOW_H
