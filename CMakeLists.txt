
# CMake

cmake_minimum_required( VERSION 3.11 )
set_property( GLOBAL PROPERTY USE_FOLDERS ON )

if( NOT PROJECT_NAME )
  project( lbfgsb_c_lib VERSION 1.0.0 )
endif()

if( NOT CMAKE_CXX_STANDARD )
	set( CMAKE_CXX_STANDARD 14 )
endif()

if( MSVC ) # link runtime statically with MSVC
  foreach( type ${CMAKE_CONFIGURATION_TYPES} ${CMAKE_BUILD_TYPE} )
    string( TOUPPER ${type} TYPE )
    foreach( flags CMAKE_C_FLAGS_${TYPE} CMAKE_CXX_FLAGS_${TYPE} )
      get_property( help CACHE ${flags} PROPERTY HELPSTRING )
      string( REPLACE "/MD" "/MT" ${flags} "${${flags}}" )
      set( ${flags} "${${flags}}" CACHE STRING "${help}" FORCE )
    endforeach()
  endforeach()
endif()

add_subdirectory( src )

add_subdirectory( examples )


