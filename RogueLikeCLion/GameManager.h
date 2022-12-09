//
// Created by mbenaissa on 09/12/2022.
//

#ifndef ROGUELIKECLION_GAMEMANAGER_H
#define ROGUELIKECLION_GAMEMANAGER_H


#include "Character/Player.h"
#include "DungeonGeneration/Room.h"

class GameManager {
public :
    Room current_room;
    Player player;
    void launch_game();
};


#endif //ROGUELIKECLION_GAMEMANAGER_H
