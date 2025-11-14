cmake_minimum_required(VERSION 3.10.2)
project("edgeviewer")

add_library(edgeviewer SHARED
            native-lib.cpp
            opencv_processor.cpp)

# If you want to link OpenCV as a static or imported library, set OpenCV_DIR or include paths here.
# By default, we expect OpenCV .so to be placed in app/src/main/jniLibs/<abi>/

find_library(log-lib log)

target_include_directories(edgeviewer PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(edgeviewer ${log-lib})
