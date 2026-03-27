cmake_minimum_required(VERSION 3.16)  # cmake需要的最小版本号

project(exp03_cmake VERSION 0.1 LANGUAGES CXX)            #工程信息 支持的语言

set(CMAKE_AUTOUIC ON)                                     #UIC的开关 自动完成ui文件生成对应.h文件过程
set(CMAKE_AUTOMOC ON)                                     #MOC的开关 元对象系统的头文件生成对应的.cpp文件
set(CMAKE_AUTORCC ON)                                     #RCC的开关 支持QRC文件生成对应的.cpp文件 资源管理的映射

set(CMAKE_CXX_STANDARD 17)                                #C++的编译标准选项
set(CMAKE_CXX_STANDARD_REQUIRED ON)                       #需要编译器支持C++17的标准

#通过cmake来查找第三方库的包信息  最终生成Qt6的变量名
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        widget.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(exp03_cmake
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET exp03_cmake APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(exp03_cmake SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(exp03_cmake
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(exp03_cmake PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.exp03_cmake)
endif()
set_target_properties(exp03_cmake PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS exp03_cmake
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(exp03_cmake)
endif()
