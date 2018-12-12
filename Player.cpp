#include <iostream>
#include <string>
#include "Player.h"

Player::Player(){
  name = "No Name";
  health = 10;
}

Player::setName(string userName){
  name = userName;
}
Player::setHealth(int userHealth){
  health = userHealth;
}

