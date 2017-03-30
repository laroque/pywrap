cmake_minimum_required(VERSION 2.8)

project(BoostPythonHelloWorld)

find_package( PythonLibs 2.7 REQUIRED )
include_directories( ${PYTHON_INCLUDE_DIRS} )

find_package( Boost COMPONENTS python REQUIRED )
include_directories( ${Boost_INCLUDE_DIR} )

#add_library( greet SHARED greet.cpp )
#add_library( depart SHARED depart.cpp )

add_library( talkpy SHARED talkpy.cpp greet.cpp depart.cpp )
target_link_libraries( talkpy ${Boost_LIBRARIES} )#greet depart)
set_target_properties( talkpy PROPERTIES PREFIX "" )
