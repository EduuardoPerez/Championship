/********************************************************************************
** Form generated from reading UI file 'vieweventwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEVENTWINDOW_H
#define UI_VIEWEVENTWINDOW_H

#include <QtCore/QDate>
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewEventWindow
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QDateEdit *deDateBeg;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_10;
    QDateEdit *deDateFin;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbVer;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *deDateBegEv;
    QLabel *label_4;
    QDateEdit *deDateFinEv;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pbInscribirse;
    QSpacerItem *verticalSpacer_8;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbModificar;
    QLineEdit *leModificar;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *leBuscar;
    QPushButton *pbBuscar;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QPushButton *pbVerPer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *leEventName;
    QSpacerItem *verticalSpacer;
    QTextBrowser *tbInfo;
    QSpacerItem *verticalSpacer_2;
    QLabel *lePicture;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pbSalir;
    QPushButton *pbRegresar;
    QDateEdit *deCurrDate;

    void setupUi(QDialog *ViewEventWindow)
    {
        if (ViewEventWindow->objectName().isEmpty())
            ViewEventWindow->setObjectName(QStringLiteral("ViewEventWindow"));
        ViewEventWindow->resize(800, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewEventWindow->setWindowIcon(icon);
        layoutWidget = new QWidget(ViewEventWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 741, 451));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_14, 1, 3, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        deDateBeg = new QDateEdit(layoutWidget);
        deDateBeg->setObjectName(QStringLiteral("deDateBeg"));
        deDateBeg->setCalendarPopup(true);

        horizontalLayout_6->addWidget(deDateBeg);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        deDateFin = new QDateEdit(layoutWidget);
        deDateFin->setObjectName(QStringLiteral("deDateFin"));
        deDateFin->setCalendarPopup(true);

        horizontalLayout_6->addWidget(deDateFin);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pbVer = new QPushButton(layoutWidget);
        pbVer->setObjectName(QStringLiteral("pbVer"));

        horizontalLayout_6->addWidget(pbVer);


        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_2, 1, 4, 1, 2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_12, 0, 4, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        gridLayout_3->addLayout(verticalLayout_4, 1, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        deDateBegEv = new QDateEdit(layoutWidget);
        deDateBegEv->setObjectName(QStringLiteral("deDateBegEv"));
        deDateBegEv->setEnabled(true);
        deDateBegEv->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        deDateBegEv->setCalendarPopup(false);
        deDateBegEv->setDate(QDate(2000, 1, 1));

        horizontalLayout_2->addWidget(deDateBegEv);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        deDateFinEv = new QDateEdit(layoutWidget);
        deDateFinEv->setObjectName(QStringLiteral("deDateFinEv"));
        deDateFinEv->setEnabled(true);
        deDateFinEv->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        deDateFinEv->setCalendarPopup(false);
        deDateFinEv->setDate(QDate(2000, 1, 1));

        horizontalLayout_2->addWidget(deDateFinEv);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        pbInscribirse = new QPushButton(layoutWidget);
        pbInscribirse->setObjectName(QStringLiteral("pbInscribirse"));

        horizontalLayout_8->addWidget(pbInscribirse);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);


        verticalLayout_6->addLayout(verticalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbModificar = new QPushButton(layoutWidget);
        pbModificar->setObjectName(QStringLiteral("pbModificar"));

        horizontalLayout->addWidget(pbModificar);

        leModificar = new QLineEdit(layoutWidget);
        leModificar->setObjectName(QStringLiteral("leModificar"));

        horizontalLayout->addWidget(leModificar);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 2);

        leBuscar = new QLineEdit(layoutWidget);
        leBuscar->setObjectName(QStringLiteral("leBuscar"));

        gridLayout_2->addWidget(leBuscar, 1, 0, 1, 1);

        pbBuscar = new QPushButton(layoutWidget);
        pbBuscar->setObjectName(QStringLiteral("pbBuscar"));

        gridLayout_2->addWidget(pbBuscar, 1, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        pbVerPer = new QPushButton(layoutWidget);
        pbVerPer->setObjectName(QStringLiteral("pbVerPer"));

        horizontalLayout_4->addWidget(pbVerPer);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        gridLayout_3->addLayout(verticalLayout_7, 0, 5, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(18, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 1, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(18, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 1, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        leEventName = new QLabel(layoutWidget);
        leEventName->setObjectName(QStringLiteral("leEventName"));
        leEventName->setSizeIncrement(QSize(20, 20));
        QFont font;
        font.setPointSize(32);
        leEventName->setFont(font);

        verticalLayout_3->addWidget(leEventName);

        verticalSpacer = new QSpacerItem(30, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        tbInfo = new QTextBrowser(layoutWidget);
        tbInfo->setObjectName(QStringLiteral("tbInfo"));

        verticalLayout_3->addWidget(tbInfo);

        verticalSpacer_2 = new QSpacerItem(30, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);

        lePicture = new QLabel(layoutWidget);
        lePicture->setObjectName(QStringLiteral("lePicture"));
        lePicture->setFrameShape(QFrame::WinPanel);
        lePicture->setFrameShadow(QFrame::Plain);
        lePicture->setLineWidth(1);
        lePicture->setScaledContents(true);

        verticalLayout_3->addWidget(lePicture);


        gridLayout_3->addLayout(verticalLayout_3, 0, 1, 1, 3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));

        gridLayout_3->addLayout(horizontalLayout_9, 2, 4, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        pbSalir = new QPushButton(layoutWidget);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));

        horizontalLayout_10->addWidget(pbSalir);


        gridLayout_3->addLayout(horizontalLayout_10, 3, 5, 1, 1);

        pbRegresar = new QPushButton(layoutWidget);
        pbRegresar->setObjectName(QStringLiteral("pbRegresar"));

        gridLayout_3->addWidget(pbRegresar, 3, 2, 1, 1);

        deCurrDate = new QDateEdit(ViewEventWindow);
        deCurrDate->setObjectName(QStringLiteral("deCurrDate"));
        deCurrDate->setEnabled(false);
        deCurrDate->setGeometry(QRect(690, 0, 110, 22));
        layoutWidget->raise();
        deCurrDate->raise();

        retranslateUi(ViewEventWindow);
        QObject::connect(pbRegresar, SIGNAL(clicked()), ViewEventWindow, SLOT(close()));
        QObject::connect(pbSalir, SIGNAL(clicked()), ViewEventWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(ViewEventWindow);
    } // setupUi

    void retranslateUi(QDialog *ViewEventWindow)
    {
        ViewEventWindow->setWindowTitle(QApplication::translate("ViewEventWindow", "Championship", 0));
        label_8->setText(QApplication::translate("ViewEventWindow", "Ingrese una fecha-inicio y una fecha-fin\n"
"para ver los participantes inscritos en ese perido", 0));
        label_9->setText(QApplication::translate("ViewEventWindow", "Inicio: ", 0));
        deDateBeg->setDisplayFormat(QApplication::translate("ViewEventWindow", "dd/MM/yyyy", 0));
        label_10->setText(QApplication::translate("ViewEventWindow", "Fin: ", 0));
        deDateFin->setDisplayFormat(QApplication::translate("ViewEventWindow", "dd/MM/yyyy", 0));
        pbVer->setText(QApplication::translate("ViewEventWindow", "Ver", 0));
        label_3->setText(QApplication::translate("ViewEventWindow", "El evento se realizar\303\241", 0));
        label_2->setText(QApplication::translate("ViewEventWindow", "Desde", 0));
        deDateBegEv->setDisplayFormat(QApplication::translate("ViewEventWindow", "dd/MM/yyyy", 0));
        label_4->setText(QApplication::translate("ViewEventWindow", "Hasta", 0));
        deDateFinEv->setDisplayFormat(QApplication::translate("ViewEventWindow", "dd/MM/yyyy", 0));
        pbInscribirse->setText(QApplication::translate("ViewEventWindow", "Inscribirse", 0));
        label_5->setText(QApplication::translate("ViewEventWindow", "        Si desea modificar la informaci\303\263n de\n"
"un participante ingrese su n\303\272mero de c\303\251dula", 0));
        pbModificar->setText(QApplication::translate("ViewEventWindow", "Modificar", 0));
        label_7->setText(QApplication::translate("ViewEventWindow", "                 Si desea ver la informaci\303\263n de\n"
"un participante ingrese su n\303\272mero de c\303\251dula", 0));
        pbBuscar->setText(QApplication::translate("ViewEventWindow", "Buscar", 0));
        label_6->setText(QApplication::translate("ViewEventWindow", "Personas Inscritas", 0));
        pbVerPer->setText(QApplication::translate("ViewEventWindow", "Ver Personas Inscritas", 0));
        leEventName->setText(QString());
        tbInfo->setHtml(QApplication::translate("ViewEventWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", 0));
        lePicture->setText(QString());
        pbSalir->setText(QApplication::translate("ViewEventWindow", "Salir", 0));
        pbRegresar->setText(QApplication::translate("ViewEventWindow", "Regresar", 0));
        deCurrDate->setDisplayFormat(QApplication::translate("ViewEventWindow", "d/M/yyyy", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewEventWindow: public Ui_ViewEventWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEVENTWINDOW_H
