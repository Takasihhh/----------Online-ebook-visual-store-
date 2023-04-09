#-------------------------------------------------
#
# Project created by QtCreator 2023-04-03T20:08:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OEVS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
        SDK/MaterialSDK/components/qtmaterialappbar.cpp \
        SDK/MaterialSDK/components/qtmaterialautocomplete.cpp \
        SDK/MaterialSDK/components/qtmaterialautocomplete_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialavatar.cpp \
        SDK/MaterialSDK/components/qtmaterialbadge.cpp \
        SDK/MaterialSDK/components/qtmaterialcheckbox.cpp \
        SDK/MaterialSDK/components/qtmaterialcircularprogress.cpp \
        SDK/MaterialSDK/components/qtmaterialcircularprogress_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialdialog.cpp \
        SDK/MaterialSDK/components/qtmaterialdialog_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialdrawer.cpp \
        SDK/MaterialSDK/components/qtmaterialdrawer_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialfab.cpp \
        SDK/MaterialSDK/components/qtmaterialflatbutton.cpp \
        SDK/MaterialSDK/components/qtmaterialflatbutton_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialiconbutton.cpp \
        SDK/MaterialSDK/components/qtmateriallist.cpp \
        SDK/MaterialSDK/components/qtmateriallistitem.cpp \
        SDK/MaterialSDK/components/qtmaterialmenu.cpp \
        SDK/MaterialSDK/components/qtmaterialmenu_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialpaper.cpp \
        SDK/MaterialSDK/components/qtmaterialprogress.cpp \
        SDK/MaterialSDK/components/qtmaterialprogress_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialradiobutton.cpp \
        SDK/MaterialSDK/components/qtmaterialraisedbutton.cpp \
        SDK/MaterialSDK/components/qtmaterialscrollbar.cpp \
        SDK/MaterialSDK/components/qtmaterialscrollbar_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialslider.cpp \
        SDK/MaterialSDK/components/qtmaterialslider_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialsnackbar.cpp \
        SDK/MaterialSDK/components/qtmaterialsnackbar_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialtable.cpp \
        SDK/MaterialSDK/components/qtmaterialtabs.cpp \
        SDK/MaterialSDK/components/qtmaterialtabs_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialtextfield.cpp \
        SDK/MaterialSDK/components/qtmaterialtextfield_internal.cpp \
        SDK/MaterialSDK/components/qtmaterialtoggle.cpp \
        SDK/MaterialSDK/components/qtmaterialtoggle_internal.cpp \
        main.cpp \
    widget.cpp \
    loginui.cpp \
    mainwindow.cpp \
    booklistslot.cpp \
    bookbutton.cpp

HEADERS += \
        SDK/MaterialSDK/components/qtmaterialappbar.h \
        SDK/MaterialSDK/components/qtmaterialappbar_p.h \
        SDK/MaterialSDK/components/qtmaterialautocomplete.h \
        SDK/MaterialSDK/components/qtmaterialautocomplete_internal.h \
        SDK/MaterialSDK/components/qtmaterialautocomplete_p.h \
        SDK/MaterialSDK/components/qtmaterialavatar.h \
        SDK/MaterialSDK/components/qtmaterialavatar_p.h \
        SDK/MaterialSDK/components/qtmaterialbadge.h \
        SDK/MaterialSDK/components/qtmaterialbadge_p.h \
        SDK/MaterialSDK/components/qtmaterialcheckbox.h \
        SDK/MaterialSDK/components/qtmaterialcheckbox_p.h \
        SDK/MaterialSDK/components/qtmaterialcircularprogress.h \
        SDK/MaterialSDK/components/qtmaterialcircularprogress_internal.h \
        SDK/MaterialSDK/components/qtmaterialcircularprogress_p.h \
        SDK/MaterialSDK/components/qtmaterialdialog.h \
        SDK/MaterialSDK/components/qtmaterialdialog_internal.h \
        SDK/MaterialSDK/components/qtmaterialdialog_p.h \
        SDK/MaterialSDK/components/qtmaterialdrawer.h \
        SDK/MaterialSDK/components/qtmaterialdrawer_internal.h \
        SDK/MaterialSDK/components/qtmaterialdrawer_p.h \
        SDK/MaterialSDK/components/qtmaterialfab.h \
        SDK/MaterialSDK/components/qtmaterialfab_p.h \
        SDK/MaterialSDK/components/qtmaterialflatbutton.h \
        SDK/MaterialSDK/components/qtmaterialflatbutton_internal.h \
        SDK/MaterialSDK/components/qtmaterialflatbutton_p.h \
        SDK/MaterialSDK/components/qtmaterialiconbutton.h \
        SDK/MaterialSDK/components/qtmaterialiconbutton_p.h \
        SDK/MaterialSDK/components/qtmateriallist.h \
        SDK/MaterialSDK/components/qtmateriallist_p.h \
        SDK/MaterialSDK/components/qtmateriallistitem.h \
        SDK/MaterialSDK/components/qtmateriallistitem_p.h \
        SDK/MaterialSDK/components/qtmaterialmenu.h \
        SDK/MaterialSDK/components/qtmaterialmenu_internal.h \
        SDK/MaterialSDK/components/qtmaterialmenu_p.h \
        SDK/MaterialSDK/components/qtmaterialpaper.h \
        SDK/MaterialSDK/components/qtmaterialpaper_p.h \
        SDK/MaterialSDK/components/qtmaterialprogress.h \
        SDK/MaterialSDK/components/qtmaterialprogress_internal.h \
        SDK/MaterialSDK/components/qtmaterialprogress_p.h \
        SDK/MaterialSDK/components/qtmaterialradiobutton.h \
        SDK/MaterialSDK/components/qtmaterialradiobutton_p.h \
        SDK/MaterialSDK/components/qtmaterialraisedbutton.h \
        SDK/MaterialSDK/components/qtmaterialraisedbutton_p.h \
        SDK/MaterialSDK/components/qtmaterialscrollbar.h \
        SDK/MaterialSDK/components/qtmaterialscrollbar_internal.h \
        SDK/MaterialSDK/components/qtmaterialscrollbar_p.h \
        SDK/MaterialSDK/components/qtmaterialslider.h \
        SDK/MaterialSDK/components/qtmaterialslider_internal.h \
        SDK/MaterialSDK/components/qtmaterialslider_p.h \
        SDK/MaterialSDK/components/qtmaterialsnackbar.h \
        SDK/MaterialSDK/components/qtmaterialsnackbar_internal.h \
        SDK/MaterialSDK/components/qtmaterialsnackbar_p.h \
        SDK/MaterialSDK/components/qtmaterialtable.h \
        SDK/MaterialSDK/components/qtmaterialtable_p.h \
        SDK/MaterialSDK/components/qtmaterialtabs.h \
        SDK/MaterialSDK/components/qtmaterialtabs_internal.h \
        SDK/MaterialSDK/components/qtmaterialtabs_p.h \
        SDK/MaterialSDK/components/qtmaterialtextfield.h \
        SDK/MaterialSDK/components/qtmaterialtextfield_internal.h \
        SDK/MaterialSDK/components/qtmaterialtextfield_p.h \
        SDK/MaterialSDK/components/qtmaterialtoggle.h \
        SDK/MaterialSDK/components/qtmaterialtoggle_internal.h \
        SDK/MaterialSDK/components/qtmaterialtoggle_p.h \
    widget.h \
    loginui.h \
    mainwindow.h \
    booklistslot.h \
    bookbutton.h

FORMS += \
        widget.ui \
    loginui.ui \
    mainwindow.ui \
    booklistslot.ui \
    bookbutton.ui

#import Material SDK(导入Material组件库的SDK)
LIBS += C:/Users/27412/Desktop/DataBasePrograming/----------Online-ebook-visual-store-/Project/OEVS/SDK/MaterialSDK/staticlib/libcomponents.a
INCLUDEPATH += C:/Users/27412/Desktop/DataBasePrograming/----------Online-ebook-visual-store-/Project/OEVS/SDK/MaterialSDK/components
PRE_TARGETDEPS += C:/Users/27412/Desktop/DataBasePrograming/----------Online-ebook-visual-store-/Project/OEVS/SDK/MaterialSDK/staticlib/libcomponents.a

//subdirs模板告诉qmake生成一个makefile，它可以进入到特定子目录并为这个目录中的项目文件生成makefile并且为它调用make。
SUBDIRS += \
    SDK/MaterialSDK/components/components.pro

RESOURCES += \
    Resource/qres.qrc
