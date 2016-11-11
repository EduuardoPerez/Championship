#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T11:44:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    participant.cpp \
    date.cpp

HEADERS  += mainwindow.h \
    participant.h \
    date.h

FORMS    += mainwindow.ui

RESOURCES += \
    img/logo.qrc \
    img/fondo1.qrc
