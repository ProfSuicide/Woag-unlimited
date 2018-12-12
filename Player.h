#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;
using namespace sf;

class Player{
  public:
  void setName(string userName);
  void setHealth(int userHealth);
  void setWeapon(int userWeapon);
  void setDamage(int userDamage);
  
  
  
  
  
  private:
  string name;
  int health;
  int currentWeapon;
  int weaponDamage;
  
  
};

  
#endif
