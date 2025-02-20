cmake_minimum_required(VERSION 3.10)
project(multifile)
set(SOURCE_FILES main.cpp Route.cpp Transport.cpp PublicTransport.cpp PrivateTransport.cpp Bus.cpp Plane.cpp Taxi.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
