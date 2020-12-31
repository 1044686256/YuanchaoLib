TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Exception.cpp \
        main.cpp \
    Object.cpp

HEADERS += \
    Exception.h \
    SmartPointer.h \
    Object.h \
    List.h \
    SeqList.h

OTHER_FILES += \
    README.md
