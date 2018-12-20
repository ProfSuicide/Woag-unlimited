#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player
{
    public:
        Player();                                // default constructor
        Player(string userName, int userHealth); // overloaded constructor
        void setName(string userName);
        void setResponse(string userResponse);   // stores any answers from the user
        void setHealth(int updateHealth);        // updates health when player takes damage
        void setWeapon(int userWeapon);
        void setDamage(int damageAmount);
        string getName() const;              // returns name
        string getResponse() const;          // returns response
        int getHealth() const;               // returns health
        int getWeapon() const;               // returns currentWeapon
        int getDamage() const;               // returns weaponDamage
        bool playerShield;
    private:
        string name;
        string response;
        int health;
        int currentWeapon;
        int weaponDamage;
};

#endif // PLAYER_H
