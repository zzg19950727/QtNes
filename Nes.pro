#-------------------------------------------------
#
# Project created by QtCreator 2017-12-22T17:18:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nes
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewidget.cpp \
    fce.cpp \
    common.cpp \
    cpu-addressing.cpp \
    cpu.cpp \
    hal.cpp \
    memory.cpp \
    mmc.cpp \
    ppu.cpp \
    psg.cpp

HEADERS  += mainwindow.h \
    common.h \
    cpu.h \
    cpu-internal.h \
    fce.h \
    hal.h \
    memory.h \
    mmc.h \
    nes.h \
    ppu.h \
    ppu-internal.h \
    psg.h \
    gamewidget.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
