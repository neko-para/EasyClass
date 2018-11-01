#-------------------------------------------------
#
# Project created by QtCreator 2018-11-01T20:50:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EasyClass
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        render.cpp \
    tool.cpp \
    drawtool.cpp \
    glrender.cpp

HEADERS  += render.h \
    tool.h \
    drawtool.h \
    glrender.h

FORMS    += render.ui \
    tool.ui \
    drawtool.ui
