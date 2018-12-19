#include "Player.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

Player::Player() // default constructor
{
    name = "stranger";
    health = 100;
}
Player::Player(string userName, int userHealth) // overloaded constructor
{
    name = userName;
    health = userHealth;
}
void Player::setName(string userName)
{
    name = userName;
}
void Player::setResponse(string userResponse)
{
    response = userResponse;
}
void Player::setHealth(int userHealth)
{
    health = userHealth;
}
void Player::setWeapon(int userWeapon)
{
    currentWeapon = userWeapon;
}
void Player::setDamage(int damageAmount) // damage from player's weapon
{
    weaponDamage = damageAmount;
}
void Player::playerRoll() // generates two random dice rolls between 1-20
{
    char x  = '1';
    srand(time(0));

    for(int i = 0; i < 2; ++i){
        int diceRoll = rand() % 20 + 1;
        cout <<"Roll number " << x << " was a " << diceRoll;
        cout << endl << endl;
        x++;
    }
}
//--------- getter functions ------------
string Player::getName() const
{
    return name;
}
string Player::getResponse() const
{
    return response;
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
