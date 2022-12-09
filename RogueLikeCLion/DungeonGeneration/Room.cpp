//
// Created by mbenaissa on 09/12/2022.
//

#include "Room.h"
#include <iostream>
using namespace std;

void Room::AddDoor(Door door) {
    doors.push_back(door);
}

void Room::DisplayChoices() {
    cout << "Choose a door : " << endl;
    for(Door door : doors){
        cout << door.direction << endl;
    }
}

void Room::CreateRoom() {
    srand(time(NULL)); //seed random
    x_size = rand() % 5 + 1;
    y_size = rand() % 5 + 1;
    have_bed = rand() % 10  >= 5;

    string result = "Room created, size = " + to_string(x_size) + " : " + to_string(y_size) + ", bed : " + to_string(have_bed);
    cout << result << endl;
}

Room::Room(){
    srand(time(NULL));
    CreateRoom();
}
