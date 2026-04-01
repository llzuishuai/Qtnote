cmake_minimum_required(VERSION 3.19)
project(ex08_objectTree LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(ex08_objectTree
    WIN32 MACOSX_BUNDLE
    main.cpp
    widget.cpp
    widget.h
)

target_link_libraries(ex08_objectTree
    PRIVATE
        Qt::Core
        Qt::Widgets
)

target_compile_definitions(ex08_objectTree PRIVATE QT_NO_DEBUG_OUTPUT)

include(GNUInstallDirs)

install(TARGETS ex08_objectTree
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET ex08_objectTree
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
