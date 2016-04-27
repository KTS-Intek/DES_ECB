QT += core
QT -= gui

CONFIG += c++11

TARGET = des-1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    descifrecb.cpp

HEADERS += \
    descifrecb.h
