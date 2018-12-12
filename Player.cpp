#include <iostream>
#include <string>
#include "Player.h"

Player::Player(){ // default constructor 
  name = "No Name";
  health = 10;
}
Player::setName(string userName){ 
  name = userName;
}
Player::setHealth(int userHealth){
  health = userHealth;
}
Player::setWeapon(int userWeapon){
  currentWeapon = userWeapon;
}
Player::setDamage(int userDamage){ // damage from player's weapon 
  weaponDamage = userDamage;
}



Player::getName() const{
  return name;
}
Player::getHealth() const{
  return health;
}
Player::getWeapon() const{
  return currentWeapon;
}
Player::getDamage() const{
  return weaponDamage;
}
