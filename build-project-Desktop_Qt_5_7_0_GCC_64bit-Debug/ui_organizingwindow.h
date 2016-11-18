/********************************************************************************
** Form generated from reading UI file 'organizingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZINGWINDOW_H
#define UI_ORGANIZINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OrganizingWindow
{
public:
    QPushButton *pbSalir;
    QPushButton *pbRegresar;
    QLabel *qlTitulo;
    QTableWidget *qtEventList;
    QPushButton *pbModificar;
    QPushButton *pbEliminar;
    QPushButton *pbRegistrar;

    void setupUi(QDialog *OrganizingWindow)
    {
        if (OrganizingWindow->objectName().isEmpty())
            OrganizingWindow->setObjectName(QStringLiteral("OrganizingWindow"));
        OrganizingWindow->setEnabled(true);
        OrganizingWindow->resize(800, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrganizingWindow->setWindowIcon(icon);
        pbSalir = new QPushButton(OrganizingWindow);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));
        pbSalir->setGeometry(QRect(660, 450, 80, 20));
        pbRegresar = new QPushButton(OrganizingWindow);
        pbRegresar->setObjectName(QStringLiteral("pbRegresar"));
        pbRegresar->setGeometry(QRect(60, 450, 80, 20));
        qlTitulo = new QLabel(OrganizingWindow);
        qlTitulo->setObjectName(QStringLiteral("qlTitulo"));
        qlTitulo->setGeometry(QRect(200, 20, 391, 55));
        QFont font;
        font.setPointSize(40);
        qlTitulo->setFont(font);
        qtEventList = new QTableWidget(OrganizingWindow);
        if (qtEventList->columnCount() < 2)
            qtEventList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        qtEventList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        qtEventList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        qtEventList->setObjectName(QStringLiteral("qtEventList"));
        qtEventList->setEnabled(true);
        qtEventList->setGeometry(QRect(100, 130, 600, 241));
        qtEventList->setAutoFillBackground(false);
        qtEventList->setDragEnabled(false);
        qtEventList->setAlternatingRowColors(false);
        qtEventList->setRowCount(0);
        qtEventList->setColumnCount(2);
        pbModificar = new QPushButton(OrganizingWindow);
        pbModificar->setObjectName(QStringLiteral("pbModificar"));
        pbModificar->setGeometry(QRect(100, 370, 300, 20));
        pbEliminar = new QPushButton(OrganizingWindow);
        pbEliminar->setObjectName(QStringLiteral("pbEliminar"));
        pbEliminar->setGeometry(QRect(400, 370, 300, 20));
        pbRegistrar = new QPushButton(OrganizingWindow);
        pbRegistrar->setObjectName(QStringLiteral("pbRegistrar"));
        pbRegistrar->setGeometry(QRect(250, 410, 300, 20));

        retranslateUi(OrganizingWindow);
        QObject::connect(pbRegresar, SIGNAL(clicked()), OrganizingWindow, SLOT(close()));
        QObject::connect(pbSalir, SIGNAL(clicked()), OrganizingWindow, SLOT(close()));
        QObject::connect(pbRegistrar, SIGNAL(clicked()), OrganizingWindow, SLOT(close()));
        QObject::connect(pbModificar, SIGNAL(clicked()), OrganizingWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(OrganizingWindow);
    } // setupUi

    void retranslateUi(QDialog *OrganizingWindow)
    {
        OrganizingWindow->setWindowTitle(QApplication::translate("OrganizingWindow", "Championship", 0));
        pbSalir->setText(QApplication::translate("OrganizingWindow", "Salir", 0));
        pbRegresar->setText(QApplication::translate("OrganizingWindow", "Regresar", 0));
        qlTitulo->setText(QApplication::translate("OrganizingWindow", "Lista de Eventos", 0));
        QTableWidgetItem *___qtablewidgetitem = qtEventList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OrganizingWindow", "Evento", 0));
        QTableWidgetItem *___qtablewidgetitem1 = qtEventList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OrganizingWindow", "Fecha de Inicio del Evento", 0));
        pbModificar->setText(QApplication::translate("OrganizingWindow", "Modificar Evento", 0));
        pbEliminar->setText(QApplication::translate("OrganizingWindow", "Eliminar Evento", 0));
        pbRegistrar->setText(QApplication::translate("OrganizingWindow", "Registrar Evento", 0));
    } // retranslateUi

};

namespace Ui {
    class OrganizingWindow: public Ui_OrganizingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZINGWINDOW_H
