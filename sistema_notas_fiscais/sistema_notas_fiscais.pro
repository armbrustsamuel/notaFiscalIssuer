TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_MAC_SDK = macosx10.11

SOURCES += main.cpp \
    vendor.cpp \
    user.cpp \
    product.cpp \
    order.cpp \
    customer.cpp \
    notafiscal.cpp \
    itemproduct.cpp

HEADERS += \
    order.h \
    user.h \
    customer.h \
    vendor.h \
    product.h \
    notafiscal.h \
    itemproduct.h \
    main.h
