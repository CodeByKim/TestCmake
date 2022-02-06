cmake_minimum_required (VERSION 3.8)

project ("CMakeProject1")

# set(Boost_INCLUDE_DIR C:/local/boost_1_78_0)
# set(Boost_LIBRARY_DIR C:/local/boost_1_78_0/stage/lib)

INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable (CMakeProject1 "CMakeProject1.cpp" 
							  "CMakeProject1.h" 
							  "Player/player.h" 
							  "Player/player.cpp")

# TARGET_LINK_LIBRARIES( CMakeProject1 LINK_PUBLIC ${Boost_LIBRARY_DIR} )