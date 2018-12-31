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
        void setHealth(int userHealth);          // between 1-100
        void print();
        string getName() const;                  // returns name
        int getHealth() const;                   // returns health
        string inventory[3];
    private:
        string name;
        int health;
};

#endif // PLAYER_H
