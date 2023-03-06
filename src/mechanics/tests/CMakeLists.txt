cmake_minimum_required(VERSION 3.10)

set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/DiceTest.cpp
  )

add_executable(mechanicstest ${SOURCE})

include_directories("${GTEST_INCLUDE_DIRS}")

target_link_libraries(mechanicstest PUBLIC
    mechanics
    ${GTEST_LIBRARY_PATH}
	${GTEST_MAIN_LIBRARY_PATH}
)

add_test(
	NAME mechanicstests
    COMMAND mechanicstest
)

