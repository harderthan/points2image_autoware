# by harderthan, kheo1772@gmail.com
###----------------------------------------
cmake_minimum_required(VERSION 2.8.3)
project(points2image)
add_compile_options(-std=c++11)

find_package(OpenCV REQUIRED)

find_package(catkin REQUIRED roscpp rosbag roslib)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

set(SOURCES
    src/points2image.cpp
    src/main.cpp
)

add_executable(${PROJECT_NAME}_node ${SOURCES})
target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
  ${OpenCV_LIBRARIES}
)
