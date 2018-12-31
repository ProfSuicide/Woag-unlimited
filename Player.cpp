#include "Player.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;


Player::Player() // default constructor
{
    name = "stranger";
    health = 100;
}
Player::Player(string userName, int userHealth)
{
    name = userName;
    health = userHealth;
}
void Player::setName(string userName){
    name = userName;
}

void Player::setHealth(int updateHealth){ // updates player's health, updateHealth parameter is the damage amount
    health -= updateHealth;
}
//-------- getter functions ------------
string Player::getName() const
{
    return name;
}
int Player::getHealth() const{
    return health;
}
