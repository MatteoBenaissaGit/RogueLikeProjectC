cmake_minimum_required(VERSION 3.24)
project(RogueLikeCLion)

set(CMAKE_CXX_STANDARD 17)

add_executable(RogueLikeCLion main.cpp
        DungeonGeneration/Door.cpp
        DungeonGeneration/Door.h
        DungeonGeneration/Door.cpp
        DungeonGeneration/Door.h
        DungeonGeneration/Room.cpp
        DungeonGeneration/Room.h
        Items/Item.cpp
        Items/Item.h
        Character/Enemy.cpp
        Character/Enemy.h
        GameManager.cpp
        GameManager.h
        Character/Character.cpp
        Character/Character.h
        Character/Player.cpp
        Character/Player.h DungeonGeneration/Dungeon.cpp DungeonGeneration/Dungeon.h)
