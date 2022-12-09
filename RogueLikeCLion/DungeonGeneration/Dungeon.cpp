//
// Created by mbenaissa on 09/12/2022.
//

#include "Dungeon.h"

Room Dungeon::CreateRoomNextTo(Room room) {
    //create a room1
    Room new_room;
    //create a door from room1 to room
    Door door_to_room;
    door_to_room.room_it_lead_to = &room;
    door_to_room.direction = "Gauche";
    new_room.AddDoor(door_to_room);
    //create a door from room to room1
    Door door_to_new_room;
    door_to_room.room_it_lead_to = &new_room;
    door_to_room.direction = "Droite";
    room.AddDoor(door_to_new_room);

    return new_room;
}
