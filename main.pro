TEMPLATE = app
TARGET = main
QT += webenginewidgets

SOURCES += \
    main.cpp

# install
target.path = $$PWD/bin
INSTALLS += target
