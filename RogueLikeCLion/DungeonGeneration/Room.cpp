//
// Created by mbenaissa on 09/12/2022.
//

#include "Room.h"
#include <iostream>

void Room::AddDoor() {

}

void Room::DisplayChoices() {

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
    CreateRoom();
}
