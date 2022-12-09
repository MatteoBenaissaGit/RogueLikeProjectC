//
// Created by mbenaissa on 09/12/2022.
//

#ifndef ROGUELIKECLION_DUNGEON_H
#define ROGUELIKECLION_DUNGEON_H


#include "Room.h"

class Dungeon {
public :
    vector<Room> rooms;
    Room CreateRoomNextTo(Room);
};


#endif //ROGUELIKECLION_DUNGEON_H
