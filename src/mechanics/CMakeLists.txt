set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/Dice.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Dice.hpp
  )


# Declare the library
add_library(mechanics STATIC ${SOURCE})

target_include_directories(mechanics PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(tests)
