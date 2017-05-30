cmake_minimum_required(VERSION 3.8)
project(chatapp)

set(CMAKE_CXX_STANDARD 14)
#Qt required
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5PrintSupport REQUIRED)



set(SOURCE_FILES main.cpp Subject.cpp Subject.hpp Observer.cpp Observer.hpp ChatWindow.cpp ChatWindow.hpp Message.cpp Message.hpp User.cpp User.hpp UserMessage.cpp UserMessage.hpp Subject.cpp Subject.hpp ChatSession.cpp ChatSession.hpp)
add_executable(chatapp ${SOURCE_FILES})

qt5_use_modules(chatapp Core Widgets Gui PrintSupport)
