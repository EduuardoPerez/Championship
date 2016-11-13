/********************************************************************************
** Form generated from reading UI file 'regeventwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEVENTWINDOW_H
#define UI_REGEVENTWINDOW_H

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

class Ui_RegEventWindow
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *pbRegresar;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_31;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_32;
    QPushButton *pbSalir;
    QSpacerItem *horizontalSpacer_33;
    QSpacerItem *horizontalSpacer_34;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_27;
    QLabel *nombreEventotl_2;
    QLineEdit *nombreventole_2;
    QSpacerItem *horizontalSpacer_35;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_29;
    QSpacerItem *horizontalSpacer_36;
    QLabel *label_13;
    QDateEdit *fechIniciode_2;
    QSpacerItem *horizontalSpacer_37;
    QLabel *label_14;
    QDateEdit *fechFinde_2;
    QSpacerItem *horizontalSpacer_38;
    QHBoxLayout *horizontalLayout_30;
    QLabel *valorinscripciontl_2;
    QLineEdit *valorinscripciontle_2;
    QSpacerItem *horizontalSpacer_39;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_31;
    QHBoxLayout *horizontalLayout_32;
    QLabel *horaeventotl_2;
    QLineEdit *horaeventole_2;
    QSpacerItem *horizontalSpacer_40;
    QHBoxLayout *horizontalLayout_33;
    QLabel *lugareventotl_2;
    QLineEdit *lugareventole_2;
    QSpacerItem *verticalSpacer_13;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_35;
    QSpacerItem *horizontalSpacer_41;
    QLabel *label_15;
    QDateEdit *fechIniciomaterialde_2;
    QSpacerItem *horizontalSpacer_42;
    QLabel *label_16;
    QDateEdit *fechFinmaterialde_2;
    QSpacerItem *horizontalSpacer_43;
    QSpacerItem *horizontalSpacer_44;
    QHBoxLayout *horizontalLayout_36;
    QLabel *horainimaterialtl_2;
    QLineEdit *horainimaterialle_2;
    QSpacerItem *horizontalSpacer_45;
    QHBoxLayout *horizontalLayout_37;
    QLabel *horafinmaterialtl_2;
    QLineEdit *horafinmaterialle_2;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *horizontalLayout_38;
    QHBoxLayout *horizontalLayout_39;
    QLabel *lugarmaterialtl_2;
    QLineEdit *lugarmaterialle_2;
    QSpacerItem *horizontalSpacer_46;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_47;
    QPushButton *examinarpb_2;
    QSpacerItem *horizontalSpacer_48;
    QLabel *dirImgtl_2;
    QSpacerItem *verticalSpacer_15;
    QHBoxLayout *horizontalLayout_41;
    QLabel *descripciontl_2;
    QSpacerItem *horizontalSpacer_49;
    QLineEdit *descripcionle_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_42;
    QSpacerItem *horizontalSpacer_53;
    QPushButton *pbRegistrar;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *horizontalSpacer_50;
    QSpacerItem *horizontalSpacer_51;
    QSpacerItem *horizontalSpacer_52;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_17;

    void setupUi(QDialog *RegEventWindow)
    {
        if (RegEventWindow->objectName().isEmpty())
            RegEventWindow->setObjectName(QStringLiteral("RegEventWindow"));
        RegEventWindow->resize(800, 500);
        layoutWidget = new QWidget(RegEventWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 791, 491));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_27);

        pbRegresar = new QPushButton(layoutWidget);
        pbRegresar->setObjectName(QStringLiteral("pbRegresar"));
        pbRegresar->setEnabled(true);

        horizontalLayout_25->addWidget(pbRegresar);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_28);


        verticalLayout_6->addLayout(horizontalLayout_25);


        horizontalLayout_24->addLayout(verticalLayout_6);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_29);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_30);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_31);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_32);

        pbSalir = new QPushButton(layoutWidget);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));

        horizontalLayout_26->addWidget(pbSalir);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_33);


        verticalLayout_7->addLayout(horizontalLayout_26);


        horizontalLayout_24->addLayout(verticalLayout_7);


        gridLayout_4->addLayout(horizontalLayout_24, 3, 0, 1, 5);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_34, 0, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        nombreEventotl_2 = new QLabel(layoutWidget);
        nombreEventotl_2->setObjectName(QStringLiteral("nombreEventotl_2"));

        horizontalLayout_27->addWidget(nombreEventotl_2);

        nombreventole_2 = new QLineEdit(layoutWidget);
        nombreventole_2->setObjectName(QStringLiteral("nombreventole_2"));

        horizontalLayout_27->addWidget(nombreventole_2);


        gridLayout_5->addLayout(horizontalLayout_27, 0, 0, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_35, 0, 1, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_28->addWidget(label_5);


        verticalLayout_9->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_36);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_29->addWidget(label_13);

        fechIniciode_2 = new QDateEdit(layoutWidget);
        fechIniciode_2->setObjectName(QStringLiteral("fechIniciode_2"));
        fechIniciode_2->setCalendarPopup(true);

        horizontalLayout_29->addWidget(fechIniciode_2);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_37);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_29->addWidget(label_14);

        fechFinde_2 = new QDateEdit(layoutWidget);
        fechFinde_2->setObjectName(QStringLiteral("fechFinde_2"));
        fechFinde_2->setCalendarPopup(true);

        horizontalLayout_29->addWidget(fechFinde_2);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_38);


        verticalLayout_9->addLayout(horizontalLayout_29);


        gridLayout_5->addLayout(verticalLayout_9, 0, 2, 2, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        valorinscripciontl_2 = new QLabel(layoutWidget);
        valorinscripciontl_2->setObjectName(QStringLiteral("valorinscripciontl_2"));

        horizontalLayout_30->addWidget(valorinscripciontl_2);

        valorinscripciontle_2 = new QLineEdit(layoutWidget);
        valorinscripciontle_2->setObjectName(QStringLiteral("valorinscripciontle_2"));

        horizontalLayout_30->addWidget(valorinscripciontle_2);


        gridLayout_5->addLayout(horizontalLayout_30, 1, 0, 1, 1);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_39, 1, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_5);

        verticalSpacer_12 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_12);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        horaeventotl_2 = new QLabel(layoutWidget);
        horaeventotl_2->setObjectName(QStringLiteral("horaeventotl_2"));

        horizontalLayout_32->addWidget(horaeventotl_2);

        horaeventole_2 = new QLineEdit(layoutWidget);
        horaeventole_2->setObjectName(QStringLiteral("horaeventole_2"));

        horizontalLayout_32->addWidget(horaeventole_2);


        horizontalLayout_31->addLayout(horizontalLayout_32);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_40);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        lugareventotl_2 = new QLabel(layoutWidget);
        lugareventotl_2->setObjectName(QStringLiteral("lugareventotl_2"));

        horizontalLayout_33->addWidget(lugareventotl_2);

        lugareventole_2 = new QLineEdit(layoutWidget);
        lugareventole_2->setObjectName(QStringLiteral("lugareventole_2"));

        horizontalLayout_33->addWidget(lugareventole_2);


        horizontalLayout_31->addLayout(horizontalLayout_33);


        verticalLayout_8->addLayout(horizontalLayout_31);

        verticalSpacer_13 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_13);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_34->addWidget(label_6);


        verticalLayout_10->addLayout(horizontalLayout_34);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_41);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_35->addWidget(label_15);

        fechIniciomaterialde_2 = new QDateEdit(layoutWidget);
        fechIniciomaterialde_2->setObjectName(QStringLiteral("fechIniciomaterialde_2"));
        fechIniciomaterialde_2->setCalendarPopup(true);

        horizontalLayout_35->addWidget(fechIniciomaterialde_2);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_42);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_35->addWidget(label_16);

        fechFinmaterialde_2 = new QDateEdit(layoutWidget);
        fechFinmaterialde_2->setObjectName(QStringLiteral("fechFinmaterialde_2"));
        fechFinmaterialde_2->setCalendarPopup(true);

        horizontalLayout_35->addWidget(fechFinmaterialde_2);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_43);


        verticalLayout_10->addLayout(horizontalLayout_35);


        gridLayout_6->addLayout(verticalLayout_10, 0, 0, 2, 1);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_44, 0, 1, 1, 1);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        horainimaterialtl_2 = new QLabel(layoutWidget);
        horainimaterialtl_2->setObjectName(QStringLiteral("horainimaterialtl_2"));

        horizontalLayout_36->addWidget(horainimaterialtl_2);

        horainimaterialle_2 = new QLineEdit(layoutWidget);
        horainimaterialle_2->setObjectName(QStringLiteral("horainimaterialle_2"));

        horizontalLayout_36->addWidget(horainimaterialle_2);


        gridLayout_6->addLayout(horizontalLayout_36, 0, 2, 1, 1);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_45, 1, 1, 1, 1);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horafinmaterialtl_2 = new QLabel(layoutWidget);
        horafinmaterialtl_2->setObjectName(QStringLiteral("horafinmaterialtl_2"));

        horizontalLayout_37->addWidget(horafinmaterialtl_2);

        horafinmaterialle_2 = new QLineEdit(layoutWidget);
        horafinmaterialle_2->setObjectName(QStringLiteral("horafinmaterialle_2"));

        horizontalLayout_37->addWidget(horafinmaterialle_2);


        gridLayout_6->addLayout(horizontalLayout_37, 1, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout_6);

        verticalSpacer_14 = new QSpacerItem(17, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_14);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        lugarmaterialtl_2 = new QLabel(layoutWidget);
        lugarmaterialtl_2->setObjectName(QStringLiteral("lugarmaterialtl_2"));

        horizontalLayout_39->addWidget(lugarmaterialtl_2);

        lugarmaterialle_2 = new QLineEdit(layoutWidget);
        lugarmaterialle_2->setObjectName(QStringLiteral("lugarmaterialle_2"));

        horizontalLayout_39->addWidget(lugarmaterialle_2);


        horizontalLayout_38->addLayout(horizontalLayout_39);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_46);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_40->addWidget(label_7);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_47);

        examinarpb_2 = new QPushButton(layoutWidget);
        examinarpb_2->setObjectName(QStringLiteral("examinarpb_2"));

        horizontalLayout_40->addWidget(examinarpb_2);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_48);

        dirImgtl_2 = new QLabel(layoutWidget);
        dirImgtl_2->setObjectName(QStringLiteral("dirImgtl_2"));

        horizontalLayout_40->addWidget(dirImgtl_2);


        horizontalLayout_38->addLayout(horizontalLayout_40);


        verticalLayout_8->addLayout(horizontalLayout_38);

        verticalSpacer_15 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_15);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        descripciontl_2 = new QLabel(layoutWidget);
        descripciontl_2->setObjectName(QStringLiteral("descripciontl_2"));

        horizontalLayout_41->addWidget(descripciontl_2);

        horizontalSpacer_49 = new QSpacerItem(48, 17, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_49);

        descripcionle_2 = new QLineEdit(layoutWidget);
        descripcionle_2->setObjectName(QStringLiteral("descripcionle_2"));

        horizontalLayout_41->addWidget(descripcionle_2);


        verticalLayout_8->addLayout(horizontalLayout_41);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        horizontalSpacer_53 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_53);

        pbRegistrar = new QPushButton(layoutWidget);
        pbRegistrar->setObjectName(QStringLiteral("pbRegistrar"));

        horizontalLayout_42->addWidget(pbRegistrar);


        verticalLayout_8->addLayout(horizontalLayout_42);

        verticalSpacer_16 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_16);


        gridLayout_4->addLayout(verticalLayout_8, 2, 0, 1, 5);

        horizontalSpacer_50 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_50, 0, 0, 1, 1);

        horizontalSpacer_51 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_51, 0, 3, 1, 1);

        horizontalSpacer_52 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_52, 0, 4, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setPointSize(32);
        label_8->setFont(font);

        gridLayout_4->addWidget(label_8, 0, 1, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(verticalSpacer_17, 1, 1, 1, 1);


        retranslateUi(RegEventWindow);
        QObject::connect(pbSalir, SIGNAL(clicked()), RegEventWindow, SLOT(close()));
        QObject::connect(pbRegresar, SIGNAL(clicked()), RegEventWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(RegEventWindow);
    } // setupUi

    void retranslateUi(QDialog *RegEventWindow)
    {
        RegEventWindow->setWindowTitle(QApplication::translate("RegEventWindow", "Evento", 0));
        pbRegresar->setText(QApplication::translate("RegEventWindow", "Regresar", 0));
        pbSalir->setText(QApplication::translate("RegEventWindow", "Salir", 0));
        nombreEventotl_2->setText(QApplication::translate("RegEventWindow", "Nombre del Evento: ", 0));
        label_5->setText(QApplication::translate("RegEventWindow", "                                           Fechas en las que se realizar\303\241 el evento\n"
"(si el evento se realizar\303\241 en un solo d\303\255a seleccione 01/01/0000 como fecha fin)", 0));
        label_13->setText(QApplication::translate("RegEventWindow", "Inicio: ", 0));
        fechIniciode_2->setDisplayFormat(QApplication::translate("RegEventWindow", "dd/MM/yyyy", 0));
        label_14->setText(QApplication::translate("RegEventWindow", "Fin: ", 0));
        fechFinde_2->setDisplayFormat(QApplication::translate("RegEventWindow", "dd/MM/yyyy", 0));
        valorinscripciontl_2->setText(QApplication::translate("RegEventWindow", "Valor de la inscripci\303\263n (Bs.)", 0));
        horaeventotl_2->setText(QApplication::translate("RegEventWindow", "Hora de inicio del evento: ", 0));
        lugareventotl_2->setText(QApplication::translate("RegEventWindow", "Lugar donde se realizara el evento: ", 0));
        label_6->setText(QApplication::translate("RegEventWindow", "             Fechas en las que se entregar\303\241 el material necesario para el evento\n"
"(si el evento se realizar\303\241 en un solo d\303\255a seleccione 01/01/0000 como fecha fin)", 0));
        label_15->setText(QApplication::translate("RegEventWindow", "Inicio: ", 0));
        fechIniciomaterialde_2->setDisplayFormat(QApplication::translate("RegEventWindow", "dd/MM/yyyy", 0));
        label_16->setText(QApplication::translate("RegEventWindow", "Fin: ", 0));
        fechFinmaterialde_2->setDisplayFormat(QApplication::translate("RegEventWindow", "dd/MM/yyyy", 0));
        horainimaterialtl_2->setText(QApplication::translate("RegEventWindow", "Hora de inicio de la entrega del material: ", 0));
        horafinmaterialtl_2->setText(QApplication::translate("RegEventWindow", "Hora de fin de la entrega del material: ", 0));
        lugarmaterialtl_2->setText(QApplication::translate("RegEventWindow", "Lugar donde se realizar\303\241 la entrega del material: ", 0));
        label_7->setText(QApplication::translate("RegEventWindow", "Incluir una imagen referente al evento:", 0));
        examinarpb_2->setText(QApplication::translate("RegEventWindow", "Examinar", 0));
        dirImgtl_2->setText(QString());
        descripciontl_2->setText(QApplication::translate("RegEventWindow", "Descripcion del evento:", 0));
        pbRegistrar->setText(QApplication::translate("RegEventWindow", "Registrar", 0));
        label_8->setText(QApplication::translate("RegEventWindow", "Registrar Evento", 0));
    } // retranslateUi

};

namespace Ui {
    class RegEventWindow: public Ui_RegEventWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEVENTWINDOW_H
