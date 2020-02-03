TEMPLATE = app
TARGET = main
QT += webenginewidgets webengine

SOURCES += \
    main.cpp

# install
target.path = $$PWD/bin
INSTALLS += target
