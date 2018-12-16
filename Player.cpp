#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player(){ // default constructor 
  name = "stranger";
  health = 100;
}
void Player::setName(string userName){ 
  name = userName;
}
void Player::setHealth(int userHealth){
  health = userHealth;
}
void Player::setWeapon(int userWeapon){
  currentWeapon = userWeapon;
}
void Player::setDamage(int damageAmount){ // damage from player's weapon 
  weaponDamage = damageAmount;
}



string Player::getName() const{
  return name;
}
int Player::getHealth() const{
  return health;
}
int Player::getWeapon() const{
  return currentWeapon;
}
int Player::getDamage() const{
  return weaponDamage;
}
