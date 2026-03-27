include(F:/QTproject/exp_04cmake6/build/Desktop_Qt_6_5_3_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/exp_04cmake6-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_ALL_MODULES_FOUND_VIA_FIND_PACKAGE "ZlibPrivate;EntryPointPrivate;Core;Gui;Widgets")

qt6_deploy_runtime_dependencies(
    EXECUTABLE F:/QTproject/exp_04cmake6/build/Desktop_Qt_6_5_3_MinGW_64_bit-Debug/exp_04cmake6.exe
    GENERATE_QT_CONF
)
