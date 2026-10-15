TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        catalogue.cpp \
        dvd.cpp \
        livre.cpp \
        main.cpp \
        media.cpp

HEADERS += \
    catalogue.h \
    dvd.h \
    livre.h \
    media.h
