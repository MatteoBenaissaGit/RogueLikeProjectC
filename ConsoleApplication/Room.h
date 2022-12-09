#pragma once
/*#include <vector>

#include "Bed.h"
#include "Door.h"
#include "Enemy.h"
#include "Object.h"
using namespace std;

class Room
{
public:
    int x_size;
    int y_size;
    vector<Door> doors;
    vector<Object> objects;
    vector<Enemy> enemies;
    Bed bed;
    void AddDoor(Door);
    void DisplayChoices();
    Room(int);

private:
    void CreateRoom(int);
};
