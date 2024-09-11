QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    changelesson.cpp \
    deletestudent.cpp \
    lesson.cpp \
    lessonchoose.cpp \
    lessonrank.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    mustlesson.cpp \
    optionallesson.cpp \
    search.cpp \
    slesson.cpp \
    student.cpp

HEADERS += \
    add.h \
    changelesson.h \
    deletestudent.h \
    lesson.h \
    lessonchoose.h \
    lessonrank.h \
    login.h \
    mainwindow.h \
    mustlesson.h \
    optionallesson.h \
    search.h \
    slesson.h \
    student.h

FORMS += \
    add.ui \
    changelesson.ui \
    deletestudent.ui \
    lessonchoose.ui \
    lessonrank.ui \
    login.ui \
    mainwindow.ui \
    mustlesson.ui \
    optionallesson.ui \
    search.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
win32-msvc* {
    QMAKE_CXXFLAGS += /source-charset:utf-8 /execution-charset:utf-8
}
