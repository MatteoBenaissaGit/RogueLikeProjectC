//
// Created by mbenaissa on 09/12/2022.
//

#ifndef ROGUELIKECLION_ROOM_H
#define ROGUELIKECLION_ROOM_H


#include "Door.h"
#include "../Items/Item.h"
#include "../Character/Enemy.h"
#include <vector>

class Door;

class Room {
public :
    Room();
    int x_size, y_size;
    vector<Door> doors;
    vector<Item> items;
    vector<Enemy> enemies;
    bool have_bed;
    void AddDoor(Door);
    void DisplayChoices();
private :
    void CreateRoom();
};


#endif //ROGUELIKECLION_ROOM_H
