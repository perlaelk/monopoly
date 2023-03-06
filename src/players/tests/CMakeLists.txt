cmake_minimum_required(VERSION 3.10)

set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/UserTest.cpp
  )

add_executable(playerstest ${SOURCE})

include_directories("${GTEST_INCLUDE_DIRS}")
#include_directories("${PLAYERS_INCLUDE_DIRS}")

target_link_libraries(playerstest PUBLIC
    players
    ${GTEST_LIBRARY_PATH}
	${GTEST_MAIN_LIBRARY_PATH}
)

add_test(
	NAME playerstests
    COMMAND playerstest
)

