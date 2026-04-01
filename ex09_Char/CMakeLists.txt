cmake_minimum_required(VERSION 3.19)
project(ex09_Char LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(ex09_Char
    main.cpp
)

target_link_libraries(ex09_Char
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS ex09_Char
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
