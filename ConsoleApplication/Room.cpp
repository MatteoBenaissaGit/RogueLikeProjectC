/*#include "Room.h"
#include "Door.h"

#include <iostream>
#include <random>
using namespace std;

enum Direction{ UP, DOWN, LEFT, RIGHT, FRONT, BACK,};
string to_string(const Direction& direction) {
    switch (direction) {
    case UP:
        return "UP";
    case DOWN:
        return "DOWN";
    case LEFT:
        return "LEFT";
    case RIGHT:
        return "RIGHT";
    case FRONT: 
        return "FRONT";
    case BACK: 
        return "BACK";
    }
}

Room::Room(int number_of_doors)
{
    CreateRoom(number_of_doors);
}


void Room::CreateRoom(int number_of_doors)
{
    //room size
    x_size = rand() % 5 + 1;
    y_size = rand() % 5 + 1;

    //doors

    constexpr int num_values = static_cast<int>(Direction::BACK) + 1;
    for (int i = 0; i < number_of_doors; i++)
    {
        int random_number = rand() % num_values;
        Direction random_direction = static_cast<Direction>(random_number);
        Door door(*this, false, to_string(random_direction));

        AddDoor(door);
    }
}

void Room::AddDoor(Door door)
{
    doors.push_back(door);
}

void Room::DisplayChoices()
{
    for(Door door : doors)
    {
        cout << door.direction << endl;
    }
}
*/

