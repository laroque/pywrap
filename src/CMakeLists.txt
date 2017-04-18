cmake_minimum_required(VERSION 2.8)

project(BoostPythonHelloWorld)

find_package( PythonLibs 2.7 REQUIRED )
include_directories( ${PYTHON_INCLUDE_DIRS} )

find_package( Boost COMPONENTS python REQUIRED )
include_directories( ${Boost_INCLUDE_DIR} )

# a library of just the C++ stuff, this is like the existing katydid libs
add_library( talkc SHARED greet.cpp depart.cpp talk_data.cpp )
add_library( usrc SHARED data_user.cpp )

# a python library
add_library( talkpy SHARED talkpy.cpp )
target_link_libraries( talkpy ${Boost_LIBRARIES} talkc )
set_target_properties( talkpy PROPERTIES PREFIX "" )

# another lib
add_library( usrpy SHARED usrpy.cpp )
target_link_libraries( usrpy ${Boost_LIBRARIES} usrc talkc)
set_target_properties( usrpy PROPERTIES PREFIX "" )
