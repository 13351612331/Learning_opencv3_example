CMAKE_MINIMUM_REQUIRED(VERSION 3.22)
PROJECT(Learning_OpenCV)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(2_1_load_image 2_1_load_image.cpp)
target_link_libraries(2_1_load_image ${OpenCV_LIBRARIES})

add_executable(2_2_load_image 2_2_load_image.cpp)
target_link_libraries(2_2_load_image ${OpenCV_LIBRARIES})

add_executable(2_3_load_video 2_3_load_video.cpp)
target_link_libraries(2_3_load_video ${OpenCV_LIBRARIES})