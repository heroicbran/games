#ifndef ROOMS_H
#define ROOMS_H

//#include "objects.h"
using namespace std;

struct Room
{
  int id;
  string room_name = "none";
  string background = "none";      //Drawn image for background;
  vector<Wall> wall_list;
  vector<Door> door_list; //Key = id, value = state
  vector<Mob> player_list; //All players in room
  //vector<Tile>tile_list;
  //vector<Misc>misc_list; //for monster spawners, etc.
  vector<Item> item_list; //Key = name, value = quantity available
  bool change_lock = false;  //Lock to keep room updates from happening

  MSGPACK_DEFINE_ARRAY(id, room_name, background, wall_list, door_list, player_list, item_list, change_lock);  //Note: Needed to make RPC function with custom type.

  Room()
  {}

  Room(string n) : room_name(n)
  {}

};

#endif
//Room_Lite Struct
