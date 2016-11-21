/********************************************************************************
** Form generated from reading UI file 'modpartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODPARTWINDOW_H
#define UI_MODPARTWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModPartWindow
{
public:
    QDateEdit *deCurrDate;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_124;
    QSpacerItem *verticalSpacer_35;
    QSpacerItem *horizontalSpacer_119;
    QSpacerItem *horizontalSpacer_103;
    QSpacerItem *horizontalSpacer_122;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_63;
    QSpacerItem *horizontalSpacer_104;
    QHBoxLayout *horizontalLayout_64;
    QLabel *fechaeventotl_5;
    QDateEdit *deDateBegEv;
    QSpacerItem *horizontalSpacer_105;
    QSpacerItem *horizontalSpacer_106;
    QSpacerItem *horizontalSpacer_107;
    QSpacerItem *horizontalSpacer_108;
    QHBoxLayout *horizontalLayout_53;
    QSpacerItem *horizontalSpacer_93;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_29;
    QHBoxLayout *horizontalLayout_54;
    QSpacerItem *horizontalSpacer_94;
    QHBoxLayout *horizontalLayout_55;
    QLabel *cedulatl_5;
    QLineEdit *leId;
    QSpacerItem *verticalSpacer_30;
    QHBoxLayout *horizontalLayout_56;
    QSpacerItem *horizontalSpacer_95;
    QHBoxLayout *horizontalLayout_57;
    QLabel *nombretl_5;
    QLineEdit *leName;
    QSpacerItem *verticalSpacer_31;
    QHBoxLayout *horizontalLayout_58;
    QSpacerItem *horizontalSpacer_96;
    QHBoxLayout *horizontalLayout_59;
    QLabel *apellidotl_5;
    QLineEdit *leLastName;
    QSpacerItem *verticalSpacer_32;
    QHBoxLayout *horizontalLayout_60;
    QSpacerItem *horizontalSpacer_97;
    QHBoxLayout *horizontalLayout_61;
    QLabel *fechanacimientotl_5;
    QDateEdit *deBornDate;
    QSpacerItem *horizontalSpacer_99;
    QSpacerItem *horizontalSpacer_98;
    QSpacerItem *verticalSpacer_33;
    QHBoxLayout *horizontalLayout_62;
    QSpacerItem *horizontalSpacer_100;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_101;
    QPushButton *pbExaminar;
    QSpacerItem *horizontalSpacer_102;
    QLabel *leDirPic;
    QSpacerItem *verticalSpacer_34;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_36;
    QSpacerItem *horizontalSpacer_116;
    QLabel *lePicture;
    QSpacerItem *horizontalSpacer_117;
    QSpacerItem *verticalSpacer_37;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_65;
    QSpacerItem *horizontalSpacer_109;
    QSpacerItem *horizontalSpacer_110;
    QSpacerItem *horizontalSpacer_128;
    QSpacerItem *horizontalSpacer_111;
    QSpacerItem *horizontalSpacer_112;
    QSpacerItem *horizontalSpacer_113;
    QSpacerItem *horizontalSpacer_127;
    QSpacerItem *horizontalSpacer_114;
    QPushButton *pbGuardar;
    QSpacerItem *horizontalSpacer_126;
    QSpacerItem *horizontalSpacer_125;
    QSpacerItem *horizontalSpacer_115;
    QSpacerItem *horizontalSpacer_123;
    QSpacerItem *horizontalSpacer_121;
    QSpacerItem *horizontalSpacer_129;
    QPushButton *pbSalir;
    QSpacerItem *horizontalSpacer_120;
    QSpacerItem *horizontalSpacer_131;
    QSpacerItem *horizontalSpacer_132;
    QPushButton *pbRegresar;
    QSpacerItem *horizontalSpacer_133;
    QSpacerItem *horizontalSpacer_118;
    QSpacerItem *horizontalSpacer_130;
    QLabel *leEventName;

    void setupUi(QDialog *ModPartWindow)
    {
        if (ModPartWindow->objectName().isEmpty())
            ModPartWindow->setObjectName(QStringLiteral("ModPartWindow"));
        ModPartWindow->resize(800, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModPartWindow->setWindowIcon(icon);
        deCurrDate = new QDateEdit(ModPartWindow);
        deCurrDate->setObjectName(QStringLiteral("deCurrDate"));
        deCurrDate->setEnabled(false);
        deCurrDate->setGeometry(QRect(690, 0, 110, 22));
        layoutWidget = new QWidget(ModPartWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 781, 461));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_124 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_124, 3, 0, 1, 1);

        verticalSpacer_35 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_35, 2, 2, 1, 1);

        horizontalSpacer_119 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_119, 3, 3, 1, 1);

        horizontalSpacer_103 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_103, 0, 14, 1, 1);

        horizontalSpacer_122 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_122, 3, 6, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_63 = new QHBoxLayout();
        horizontalLayout_63->setObjectName(QStringLiteral("horizontalLayout_63"));
        horizontalSpacer_104 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_104);

        horizontalLayout_64 = new QHBoxLayout();
        horizontalLayout_64->setObjectName(QStringLiteral("horizontalLayout_64"));
        fechaeventotl_5 = new QLabel(layoutWidget);
        fechaeventotl_5->setObjectName(QStringLiteral("fechaeventotl_5"));

        horizontalLayout_64->addWidget(fechaeventotl_5);

        deDateBegEv = new QDateEdit(layoutWidget);
        deDateBegEv->setObjectName(QStringLiteral("deDateBegEv"));
        deDateBegEv->setEnabled(true);

        horizontalLayout_64->addWidget(deDateBegEv);


        horizontalLayout_63->addLayout(horizontalLayout_64);

        horizontalSpacer_105 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_105);

        horizontalSpacer_106 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_106);

        horizontalSpacer_107 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_107);

        horizontalSpacer_108 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_108);


        gridLayout_2->addLayout(horizontalLayout_63, 0, 0, 1, 1);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        horizontalSpacer_93 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_53->addItem(horizontalSpacer_93);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer_29 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_29);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        horizontalSpacer_94 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_54->addItem(horizontalSpacer_94);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        cedulatl_5 = new QLabel(layoutWidget);
        cedulatl_5->setObjectName(QStringLiteral("cedulatl_5"));

        horizontalLayout_55->addWidget(cedulatl_5);

        leId = new QLineEdit(layoutWidget);
        leId->setObjectName(QStringLiteral("leId"));

        horizontalLayout_55->addWidget(leId);


        horizontalLayout_54->addLayout(horizontalLayout_55);


        verticalLayout_9->addLayout(horizontalLayout_54);

        verticalSpacer_30 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_30);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName(QStringLiteral("horizontalLayout_56"));
        horizontalSpacer_95 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_56->addItem(horizontalSpacer_95);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QStringLiteral("horizontalLayout_57"));
        nombretl_5 = new QLabel(layoutWidget);
        nombretl_5->setObjectName(QStringLiteral("nombretl_5"));

        horizontalLayout_57->addWidget(nombretl_5);

        leName = new QLineEdit(layoutWidget);
        leName->setObjectName(QStringLiteral("leName"));

        horizontalLayout_57->addWidget(leName);


        horizontalLayout_56->addLayout(horizontalLayout_57);


        verticalLayout_9->addLayout(horizontalLayout_56);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_31);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName(QStringLiteral("horizontalLayout_58"));
        horizontalSpacer_96 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_58->addItem(horizontalSpacer_96);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName(QStringLiteral("horizontalLayout_59"));
        apellidotl_5 = new QLabel(layoutWidget);
        apellidotl_5->setObjectName(QStringLiteral("apellidotl_5"));

        horizontalLayout_59->addWidget(apellidotl_5);

        leLastName = new QLineEdit(layoutWidget);
        leLastName->setObjectName(QStringLiteral("leLastName"));

        horizontalLayout_59->addWidget(leLastName);


        horizontalLayout_58->addLayout(horizontalLayout_59);


        verticalLayout_9->addLayout(horizontalLayout_58);

        verticalSpacer_32 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_32);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setObjectName(QStringLiteral("horizontalLayout_60"));
        horizontalSpacer_97 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_60->addItem(horizontalSpacer_97);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName(QStringLiteral("horizontalLayout_61"));
        fechanacimientotl_5 = new QLabel(layoutWidget);
        fechanacimientotl_5->setObjectName(QStringLiteral("fechanacimientotl_5"));

        horizontalLayout_61->addWidget(fechanacimientotl_5);

        deBornDate = new QDateEdit(layoutWidget);
        deBornDate->setObjectName(QStringLiteral("deBornDate"));
        deBornDate->setCalendarPopup(true);
        deBornDate->setDate(QDate(2000, 1, 1));

        horizontalLayout_61->addWidget(deBornDate);

        horizontalSpacer_99 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_61->addItem(horizontalSpacer_99);

        horizontalSpacer_98 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_61->addItem(horizontalSpacer_98);


        horizontalLayout_60->addLayout(horizontalLayout_61);


        verticalLayout_9->addLayout(horizontalLayout_60);

        verticalSpacer_33 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_33);

        horizontalLayout_62 = new QHBoxLayout();
        horizontalLayout_62->setObjectName(QStringLiteral("horizontalLayout_62"));
        horizontalSpacer_100 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_100);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_62->addWidget(label_8);

        horizontalSpacer_101 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_101);

        pbExaminar = new QPushButton(layoutWidget);
        pbExaminar->setObjectName(QStringLiteral("pbExaminar"));

        horizontalLayout_62->addWidget(pbExaminar);

        horizontalSpacer_102 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_102);

        leDirPic = new QLabel(layoutWidget);
        leDirPic->setObjectName(QStringLiteral("leDirPic"));

        horizontalLayout_62->addWidget(leDirPic);


        verticalLayout_9->addLayout(horizontalLayout_62);

        verticalSpacer_34 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_34);


        horizontalLayout_53->addLayout(verticalLayout_9);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_36 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_36, 0, 1, 1, 1);

        horizontalSpacer_116 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_116, 1, 0, 1, 1);

        lePicture = new QLabel(layoutWidget);
        lePicture->setObjectName(QStringLiteral("lePicture"));
        lePicture->setFrameShape(QFrame::WinPanel);
        lePicture->setScaledContents(true);

        gridLayout->addWidget(lePicture, 1, 1, 1, 1);

        horizontalSpacer_117 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_117, 1, 2, 1, 1);

        verticalSpacer_37 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_37, 2, 1, 1, 1);


        horizontalLayout_53->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout_53, 1, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setObjectName(QStringLiteral("horizontalLayout_65"));
        horizontalSpacer_109 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_109);

        horizontalSpacer_110 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_110);

        horizontalSpacer_128 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_128);

        horizontalSpacer_111 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_111);

        horizontalSpacer_112 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_112);

        horizontalSpacer_113 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_113);

        horizontalSpacer_127 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_127);

        horizontalSpacer_114 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_114);

        pbGuardar = new QPushButton(layoutWidget);
        pbGuardar->setObjectName(QStringLiteral("pbGuardar"));

        horizontalLayout_65->addWidget(pbGuardar);

        horizontalSpacer_126 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_126);

        horizontalSpacer_125 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_125);

        horizontalSpacer_115 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_115);


        verticalLayout_10->addLayout(horizontalLayout_65);


        gridLayout_2->addLayout(verticalLayout_10, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 15);

        horizontalSpacer_123 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_123, 3, 9, 1, 1);

        horizontalSpacer_121 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_121, 3, 5, 1, 1);

        horizontalSpacer_129 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_129, 3, 7, 1, 1);

        pbSalir = new QPushButton(layoutWidget);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));

        gridLayout_3->addWidget(pbSalir, 3, 13, 1, 1);

        horizontalSpacer_120 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_120, 3, 4, 1, 1);

        horizontalSpacer_131 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_131, 3, 10, 1, 1);

        horizontalSpacer_132 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_132, 3, 11, 1, 1);

        pbRegresar = new QPushButton(layoutWidget);
        pbRegresar->setObjectName(QStringLiteral("pbRegresar"));
        pbRegresar->setEnabled(true);

        gridLayout_3->addWidget(pbRegresar, 3, 1, 1, 1);

        horizontalSpacer_133 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_133, 3, 12, 1, 1);

        horizontalSpacer_118 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_118, 3, 2, 1, 1);

        horizontalSpacer_130 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_130, 3, 8, 1, 1);

        leEventName = new QLabel(layoutWidget);
        leEventName->setObjectName(QStringLiteral("leEventName"));
        leEventName->setSizeIncrement(QSize(20, 20));
        QFont font;
        font.setPointSize(32);
        leEventName->setFont(font);

        gridLayout_3->addWidget(leEventName, 0, 1, 1, 1);


        retranslateUi(ModPartWindow);
        QObject::connect(pbRegresar, SIGNAL(clicked()), ModPartWindow, SLOT(close()));
        QObject::connect(pbSalir, SIGNAL(clicked()), ModPartWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(ModPartWindow);
    } // setupUi

    void retranslateUi(QDialog *ModPartWindow)
    {
        ModPartWindow->setWindowTitle(QApplication::translate("ModPartWindow", "Championship", 0));
        deCurrDate->setDisplayFormat(QApplication::translate("ModPartWindow", "d/M/yyyy", 0));
        fechaeventotl_5->setText(QApplication::translate("ModPartWindow", "Fecha Inicio del Evento:", 0));
        deDateBegEv->setDisplayFormat(QApplication::translate("ModPartWindow", "dd/MM/yyyy", 0));
        cedulatl_5->setText(QApplication::translate("ModPartWindow", "C\303\251dula de identidad: ", 0));
        nombretl_5->setText(QApplication::translate("ModPartWindow", "Nombres: ", 0));
        apellidotl_5->setText(QApplication::translate("ModPartWindow", "Apellidos: ", 0));
        fechanacimientotl_5->setText(QApplication::translate("ModPartWindow", "Fecha de Nacimiento: ", 0));
        deBornDate->setDisplayFormat(QApplication::translate("ModPartWindow", "dd/MM/yyyy", 0));
        label_8->setText(QApplication::translate("ModPartWindow", "Registrar foto del participante: ", 0));
        pbExaminar->setText(QApplication::translate("ModPartWindow", "Examinar", 0));
        leDirPic->setText(QString());
        lePicture->setText(QString());
        pbGuardar->setText(QApplication::translate("ModPartWindow", "Guardar Cambios", 0));
        pbSalir->setText(QApplication::translate("ModPartWindow", "Salir", 0));
        pbRegresar->setText(QApplication::translate("ModPartWindow", "Regresar", 0));
        leEventName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModPartWindow: public Ui_ModPartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODPARTWINDOW_H
