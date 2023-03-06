set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/User.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/User.hpp
  )

# Declare the library
add_library(players STATIC ${SOURCE})

target_include_directories(players PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(tests)
