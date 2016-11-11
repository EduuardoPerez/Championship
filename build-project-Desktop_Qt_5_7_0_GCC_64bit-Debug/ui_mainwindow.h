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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *salirpb;
    QPushButton *registrarEventopb;
    QTableWidget *tableWidget;
    QPushButton *verEventopb;

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
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 341, 55));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 441, 351));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/fondo1/fondo1.jpg")));
        label_2->setScaledContents(true);
        salirpb = new QPushButton(centralWidget);
        salirpb->setObjectName(QStringLiteral("salirpb"));
        salirpb->setGeometry(QRect(620, 440, 80, 20));
        registrarEventopb = new QPushButton(centralWidget);
        registrarEventopb->setObjectName(QStringLiteral("registrarEventopb"));
        registrarEventopb->setGeometry(QRect(610, 400, 99, 20));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(520, 90, 201, 241));
        tableWidget->setAutoFillBackground(false);
        tableWidget->setDragEnabled(false);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setRowCount(1);
        verEventopb = new QPushButton(centralWidget);
        verEventopb->setObjectName(QStringLiteral("verEventopb"));
        verEventopb->setGeometry(QRect(518, 330, 201, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(salirpb, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Championship", 0));
        label->setText(QApplication::translate("MainWindow", "Championship", 0));
        label_2->setText(QString());
        salirpb->setText(QApplication::translate("MainWindow", "Salir", 0));
        registrarEventopb->setText(QApplication::translate("MainWindow", "Registrar Evento", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Eventos", 0));
        verEventopb->setText(QApplication::translate("MainWindow", "Ver Evento", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
