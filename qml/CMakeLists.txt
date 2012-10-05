set(small_qml_SRCS
    small_object.cpp
    plugin.cpp
    )

set(small_qml_MOC_HDRS
    small_object.h
    plugin.h
    )

qt5_wrap_cpp(small_qml_MOC_SRCS ${small_qml_MOC_HDRS})

# Build
add_library(small_qml SHARED ${small_qml_SRCS} ${small_qml_MOC_SRCS})

include_directories(
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Qml_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${CMAKE_CURRENT_BINARY_DIR}
    )

target_link_libraries(small_qml
    ${Qt5Core_LIBRARIES}
    ${Qt5Qml_LIBRARIES}
    ${Qt5Gui_LIBRARIES}
    )
