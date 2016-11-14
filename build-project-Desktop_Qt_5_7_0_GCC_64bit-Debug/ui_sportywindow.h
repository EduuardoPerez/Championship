/********************************************************************************
** Form generated from reading UI file 'sportywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPORTYWINDOW_H
#define UI_SPORTYWINDOW_H

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

class Ui_SportyWindow
{
public:
    QTableWidget *qtEventList;
    QPushButton *pbVerEvento;
    QLabel *qlTitulo;
    QPushButton *pbSalir;
    QPushButton *pbRegresar;

    void setupUi(QDialog *SportyWindow)
    {
        if (SportyWindow->objectName().isEmpty())
            SportyWindow->setObjectName(QStringLiteral("SportyWindow"));
        SportyWindow->resize(800, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SportyWindow->setWindowIcon(icon);
        qtEventList = new QTableWidget(SportyWindow);
        if (qtEventList->columnCount() < 2)
            qtEventList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        qtEventList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        qtEventList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        qtEventList->setObjectName(QStringLiteral("qtEventList"));
        qtEventList->setGeometry(QRect(100, 140, 600, 241));
        qtEventList->setAutoFillBackground(false);
        qtEventList->setDragEnabled(false);
        qtEventList->setAlternatingRowColors(false);
        qtEventList->setRowCount(0);
        qtEventList->setColumnCount(2);
        pbVerEvento = new QPushButton(SportyWindow);
        pbVerEvento->setObjectName(QStringLiteral("pbVerEvento"));
        pbVerEvento->setGeometry(QRect(100, 380, 600, 20));
        qlTitulo = new QLabel(SportyWindow);
        qlTitulo->setObjectName(QStringLiteral("qlTitulo"));
        qlTitulo->setGeometry(QRect(160, 40, 471, 55));
        QFont font;
        font.setPointSize(40);
        qlTitulo->setFont(font);
        pbSalir = new QPushButton(SportyWindow);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));
        pbSalir->setGeometry(QRect(660, 460, 80, 20));
        pbRegresar = new QPushButton(SportyWindow);
        pbRegresar->setObjectName(QStringLiteral("pbRegresar"));
        pbRegresar->setGeometry(QRect(60, 460, 80, 20));

        retranslateUi(SportyWindow);
        QObject::connect(pbSalir, SIGNAL(clicked()), SportyWindow, SLOT(close()));
        QObject::connect(pbRegresar, SIGNAL(clicked()), SportyWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(SportyWindow);
    } // setupUi

    void retranslateUi(QDialog *SportyWindow)
    {
        SportyWindow->setWindowTitle(QApplication::translate("SportyWindow", "Championship", 0));
        QTableWidgetItem *___qtablewidgetitem = qtEventList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SportyWindow", "Evento", 0));
        QTableWidgetItem *___qtablewidgetitem1 = qtEventList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SportyWindow", "Fecha de Inicio del Evento", 0));
        pbVerEvento->setText(QApplication::translate("SportyWindow", "Ver Evento", 0));
        qlTitulo->setText(QApplication::translate("SportyWindow", "Eventos Disponibles", 0));
        pbSalir->setText(QApplication::translate("SportyWindow", "Salir", 0));
        pbRegresar->setText(QApplication::translate("SportyWindow", "Regresar", 0));
    } // retranslateUi

};

namespace Ui {
    class SportyWindow: public Ui_SportyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORTYWINDOW_H
