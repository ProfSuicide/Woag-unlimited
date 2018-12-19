//File: project4.cpp
//Name: Jake Dunbar, Alex Furlong, Ryan Gonzalez
//Date: 12/19/2018
//Course: CompSci 1
//Description:  This program will 
//Usage:  Entertainment
#include "StoryText.h"
#include "Player.h"
#include <iostream>
#include <fstream> // allows us to read files 
#include <string>
#include <time.h>
#include <cstlib>
#include <windows.h>

using namespace std;

int main()
{
    srand (time(NULL));
    string playerName;
    string userResponse;
    bool answer = false;
    string enemyName="Sorcerer";
    int enemyDamage=rand() % 10 + 4;
    int enemyHealth=150;

    const int weaponSize=3;
    int weapon[weaponSize];
    weapon[0]=0;
    weapon[1]=0;
    weapon[2]=0;
    //Enemy Class 
    Player Enemy(Sorcerer, 150)
    Enemy.setName(enemyName);
    Enemy.setDamage(enemyDamage);
    Enemy.setHealth(enemyHealth);
    
    
    
    
    int weaponLand=rand() % 20 + 1; 
    int enemyLand=rand() % 20 + 1; 

    StoryText text; // creates object to output text

    text.print("------------ RPG Game --------\n\n"); // feel free to change the title & formatting if u want to
    text.print("Enter your character's name: ");
    cin >> playerName;
    cout << endl;

    Player Robin(playerName, 100); // creates player object
    Robin.setName(playerName);

    system("cls"); // clears the screen

    text.print("\n1482 A.D. --- "); 
    text.print(Robin.getName());
    text.readFile("text/Intro.txt"); 
    text.readFile("text/Quest.txt"); 

    while(answer == false)
    {
        cout << "Enter 'yes' or 'no': ";
        cin >> userResponse;

        if(userResponse == "yes")
        {
            text.readFile("text/QuestAccepted.txt");
            answer = true;
        }
        else if(userResponse == "no")
        {
            text.readFile("text/QuestDeclined.txt");
            answer = true;
        }
        else
        {
            text.print("wot the hek, not an option...");
        }
    }

    if(answer == true)
    {
        // 1. go to weaponsmith intro
        // 2. go to the Inn intro
        // 3. go to the sorcerer
        Robin.playerRoll();
    }
  
  return 0;
}
