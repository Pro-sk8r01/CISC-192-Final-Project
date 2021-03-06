/******************************************************************************
* app.h
* CS 281 - 0798, Fall 2020
*
* Common include file for App code files
*******************************************************************************
*/
#ifndef APP_H
#define APP_H

// constants
#define PLAYER_DEFEATED -1
#define PLAYER_LIVES     3

// classes used
#include "Room.h"
#include "Player.h"
#include "Treasure.h"
#include "Weapon.h"
#include "Bogie.h"
#include "MagicWord.h"

// app.cpp: global variables
extern Room* g_pWelcomeCenter;
extern Room* g_pClothingStore;
extern Room* g_pMovieTheater;
extern Room* g_pCandyShop;
extern Room* g_pFoodCourt;

// app_init_rooms.cpp: custom Room initialization functions
Room* initWelcomeCenter();
Room* initClothingStore();
Room* initMovieTheater();
Room* initCandyShop();
Room* initFoodCourt();

// app_init_map.cpp: custom Room map initialization functions
void initRoomMap();

// app_player.cpp: Player initialization and management functions
bool grabTreasure(Player* pP, Room* pR, std::vector<std::string>& msgQ);
bool dropTreasure(Player* pP, Room* pR, std::vector<std::string>& msgQ);
bool grabWeapon(Player* pP, Room* pR, std::vector<std::string>& msgQ);
bool dropWeapon(Player* pP, Room* pR, std::vector<std::string>& msgQ);
char defendSelf(Player* pP, Room* pR, std::vector<std::string>& msgQ);
bool guessMagicWord(Player* pP, Room* pR, std::vector<std::string>& msgQ);
bool lookAllDirections(Room* pR, std::vector<std::string>& msgQ);
Room* movePlayer(Player* pP, Room* pR, int direction, std::vector<std::string>& msgQ);
bool visitRoom(Player* pP, Room* pR, std::vector<std::string>& msgQ);


// app_util.cpp: Room initialization and management functions
int getInventory(Container* pR, std::vector<std::string>& msgQ);
// for app exit message display
bool getInfo(Player* pP, Room* pR, std::vector<std::string>& msgQ);
// for handling I)nfo command
bool getAllInfo(Player* pP, Room* pR, std::vector<std::string>& msgQ);

#endif
