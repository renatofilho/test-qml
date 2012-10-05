cmake_minimum_required(VERSION 2.8)

include(FindPkgConfig)
find_package(Qt5Core REQUIRED)
find_package(Qt5Qml REQUIRED)
find_package(Qt5Gui REQUIRED)

add_subdirectory(qml)

#set_target_properties(${SMALL_APP} PROPERTIES COMPILE_FLAGS -fPIC)
