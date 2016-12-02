#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T11:44:17
#
#-------------------------------------------------

QT       += core gui

QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Championship
TEMPLATE = app

QMAKE_CXX = clang++

CONFIG += c++14

SOURCES += main.cpp\
        mainwindow.cpp \
    participant.cpp \
    date.cpp \
    event.cpp \
    sportywindow.cpp \
    organizingwindow.cpp \
    regeventwindow.cpp \
    modeventwindow.cpp \
    regpartwindow.cpp \
    vieweventwindow.cpp \
    modpartwindow.cpp \
    searchpartwindow.cpp \
    peopleregwindow.cpp \
    bydatewindow.cpp \
    backup.cpp

HEADERS  += mainwindow.h \
    participant.h \
    date.h \
    event.h \
    sportywindow.h \
    organizingwindow.h \
    regeventwindow.h \
    modeventwindow.h \
    regpartwindow.h \
    vieweventwindow.h \
    definition.h \
    modpartwindow.h \
    searchpartwindow.h \
    peopleregwindow.h \
    bydatewindow.h \
    backup.h

FORMS    += mainwindow.ui \
    sportywindow.ui \
    organizingwindow.ui \
    regeventwindow.ui \
    modeventwindow.ui \
    regpartwindow.ui \
    vieweventwindow.ui \
    modpartwindow.ui \
    searchpartwindow.ui \
    peopleregwindow.ui \
    bydatewindow.ui

RESOURCES += \
    img/logo.qrc \
    img/fondo1.qrc \
    img/logo-big.qrc

LIBS += -L"$$_PRO_FILE_PWD_/3rdparty/Librerias/aleph" \
       -lAleph -lm -lgsl -lgslcblas -lgmp -lmpfr -lasprintf -lpthread -lc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Librerias/aleph/release/ -lAleph
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Librerias/aleph/debug/ -lAleph
else:unix: LIBS += -L$$PWD/../../../Librerias/aleph/ -lAleph

INCLUDEPATH += $$PWD/../../../Librerias/aleph
DEPENDPATH += $$PWD/../../../Librerias/aleph

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../Librerias/aleph/release/libAleph.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../Librerias/aleph/debug/libAleph.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../Librerias/aleph/release/Aleph.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../Librerias/aleph/debug/Aleph.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../Librerias/aleph/libAleph.a
