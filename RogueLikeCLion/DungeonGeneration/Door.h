//
// Created by mbenaissa on 09/12/2022.
//

#ifndef ROGUELIKECLION_DOOR_H
#define ROGUELIKECLION_DOOR_H

using namespace std;
#include <string>
#include "Room.h"

class Room;

class Door {
public:
    Door();
    string direction;
    bool is_exit_door{};
    Room *room_it_lead_to;
};


#endif //ROGUELIKECLION_DOOR_H
