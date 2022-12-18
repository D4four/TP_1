QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BookC.cpp \
    BookStore.cpp \
    OfficeC.cpp \
    StudBookC.cpp \
    book.cpp \
    choose.cpp \
    create.cpp \
    edit.cpp \
    editbook.cpp \
    editoffice.cpp \
    editstudbook.cpp \
    keeper.cpp \
    logi.cpp \
    main.cpp \
    mainwindow.cpp \
    office.cpp \
    signin.cpp \
    spisok.cpp \
    studbook.cpp \
    view.cpp

HEADERS += \
    BookC.h \
    BookStore.h \
    OfficeC.h \
    StudBookC.h \
    book.h \
    choose.h \
    create.h \
    edit.h \
    editbook.h \
    editoffice.h \
    editstudbook.h \
    includes.h \
    keeper.h \
    list.h \
    logi.h \
    mainwindow.h \
    office.h \
    signin.h \
    spisok.h \
    studbook.h \
    view.h

FORMS += \
    book.ui \
    choose.ui \
    create.ui \
    edit.ui \
    editbook.ui \
    editoffice.ui \
    editstudbook.ui \
    logi.ui \
    mainwindow.ui \
    office.ui \
    signin.ui \
    spisok.ui \
    studbook.ui \
    view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
