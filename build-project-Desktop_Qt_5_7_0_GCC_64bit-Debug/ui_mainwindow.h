/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *qlTitulo;
    QLabel *qlImg;
    QPushButton *pbSalir;
    QPushButton *pbOrganizador;
    QPushButton *pbDeportista;
    QDateEdit *deCurrDate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qlTitulo = new QLabel(centralWidget);
        qlTitulo->setObjectName(QStringLiteral("qlTitulo"));
        qlTitulo->setGeometry(QRect(110, 20, 341, 55));
        QFont font;
        font.setPointSize(40);
        qlTitulo->setFont(font);
        qlImg = new QLabel(centralWidget);
        qlImg->setObjectName(QStringLiteral("qlImg"));
        qlImg->setGeometry(QRect(50, 90, 441, 351));
        qlImg->setPixmap(QPixmap(QString::fromUtf8(":/fondo1/fondo1.jpg")));
        qlImg->setScaledContents(true);
        pbSalir = new QPushButton(centralWidget);
        pbSalir->setObjectName(QStringLiteral("pbSalir"));
        pbSalir->setGeometry(QRect(650, 460, 80, 20));
        pbOrganizador = new QPushButton(centralWidget);
        pbOrganizador->setObjectName(QStringLiteral("pbOrganizador"));
        pbOrganizador->setGeometry(QRect(580, 320, 99, 20));
        pbDeportista = new QPushButton(centralWidget);
        pbDeportista->setObjectName(QStringLiteral("pbDeportista"));
        pbDeportista->setGeometry(QRect(590, 250, 80, 20));
        deCurrDate = new QDateEdit(centralWidget);
        deCurrDate->setObjectName(QStringLiteral("deCurrDate"));
        deCurrDate->setEnabled(false);
        deCurrDate->setGeometry(QRect(690, 0, 110, 22));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pbSalir, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Championship", 0));
        qlTitulo->setText(QApplication::translate("MainWindow", "Championship", 0));
        qlImg->setText(QString());
        pbSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        pbOrganizador->setText(QApplication::translate("MainWindow", "Organizador", 0));
        pbDeportista->setText(QApplication::translate("MainWindow", "Deportista", 0));
        deCurrDate->setDisplayFormat(QApplication::translate("MainWindow", "d/M/yyyy", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
