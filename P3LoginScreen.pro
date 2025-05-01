QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = P3LoginScreen
TEMPLATE = app

SOURCES += main.cpp \
           loginwindow.cpp

HEADERS += loginwindow.h

FORMS += loginwindow.ui
