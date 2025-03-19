QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11




# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0





SOURCES += \
    allapplyinfo.cpp \
    applyinfo.cpp \
    contrlpape.cpp \
    custmerbutton.cpp \
    longindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    mythread.cpp \
    personinfo.cpp \
    userapply.cpp

HEADERS += \
    allapplyinfo.h \
    applyinfo.h \
    contrlpape.h \
    custmerbutton.h \
    longindialog.h \
    mainwindow.h \
    mythread.h \
    personinfo.h \
    userapply.h

FORMS += \
    allapplyinfo.ui \
    applyinfo.ui \
    contrlpape.ui \
    longindialog.ui \
    mainwindow.ui \
    personinfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    PasswordFileReadWrite/images.qrc \
    images.qrc

DISTFILES +=
