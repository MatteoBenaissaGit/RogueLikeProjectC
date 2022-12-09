//
// Created by mbenaissa on 09/12/2022.
//

#include "GameManager.h"
#include "DungeonGeneration/Dungeon.h"
#include <iostream>

void GameManager::launch_game() {
    Dungeon dungeon;
    dungeon.rooms.push_back(current_room);
    dungeon.rooms.push_back(dungeon.CreateRoomNextTo(current_room));
    current_room.DisplayChoices();
}
