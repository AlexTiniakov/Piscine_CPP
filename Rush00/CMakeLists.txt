cmake_minimum_required( VERSION 3.9.0 )

project( FT_RETRO )

find_package( Curses REQUIRED )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories( ${CURSES_INCLUDE_DIR} )

add_executable( ft_retro	main.cpp
							Enemy.cpp
							Enemy.hpp
							Game.cpp
							Game.hpp
							Player.cpp
							Player.hpp
							Window.cpp
							Window.hpp
							BoundingBox.cpp
							BoundingBox.hpp
							GameEntity.cpp
							GameEntity.hpp
							Bullet.cpp
							Bullet.hpp
							Drawable.cpp
							Drawable.hpp
							List.hpp
							Timer.cpp
							Timer.hpp )

target_link_libraries( ft_retro ${CURSES_LIBRARIES} )
