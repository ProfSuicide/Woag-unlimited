#ifndef PLAYER_H // header guard 
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;
using namespace sf; // this is for sfml 

class Player{
  public:
    void setName(string userName);
    void setHealth(int userHealth); // between 1-100 
    void setWeapon(int userWeapon);
    void setDamage(int damageAmount);
    string inventory[3];
  private:
    string name;
    int health;
    int currentWeapon;
    int weaponDamage; 
};  
#endif
