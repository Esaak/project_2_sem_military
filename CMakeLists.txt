cmake_minimum_required(VERSION 3.17)
project(military)

set(CMAKE_CXX_STANDARD 20)

add_executable(military main.cpp military.cpp military.h planes.cpp planes.h tanks.cpp tanks.h ships.cpp ships.h Creature.cpp Creature.h aircraft_carrier.cpp aircraft_carrier.h destroyer.cpp destroyer.h boat.cpp boat.h attack_aircraft.cpp attack_aircraft.h bomber_aircraft.cpp bomber_aircraft.h fighter_aircraft.cpp fighter_aircraft.h heavy_tank.cpp heavy_tank.h medium_tank.cpp medium_tank.h light_tank.cpp light_tank.h)