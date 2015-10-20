#-------------------------------------------------
#
# Project created by QtCreator 2015-10-16T13:38:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = launcher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        json_reader.cpp\
        json_value.cpp\
        json_writer.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
