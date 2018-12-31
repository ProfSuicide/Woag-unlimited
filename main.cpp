//File: project4.cpp
//Name: Jake Dunbar, Alex Furlong, Ryan Gonzalez
//Date: 12/19/2018
//Course: CompSci 1
//Description:  This program will 
//Usage:  Entertainment
#include <iostream>
#include <cstdlib>
#include <fstream> // allows us to read files
#include <Windows.h>
#include <string>
#include "Player.h"
#include "StoryText.h"

using namespace std;

class Game : public StoryText, public Player { // derived game class that inherits StoryText & Player classes
    public:
        void RunGame();
};

void Game::RunGame(){
    int damageReduction;
    int playerChoice;
    int damagedodge;
    string playerName;
    string userResponse;
    int userWeapon;
    bool answer = false;                // boolean for user to begin quest
    int battleTurn = 1;                 // switches turn between user & enemy in battle
    bool battleActive = true;           // boolean to start or end battle
    int enemyLand, enemyDamage;         // for the enemy's dice rolls
    int playerLand, playerDamage;       // for the user's dice rolls

    StoryText text;                     // creates object to output text
    Player enemy("The Sorcerer", 10);   // creates player object for the Sorcerer

    text.print("------------ The Mysterious Town Of Stratusberg --------\n\n"); // feel free to change the title if u guys want to
    text.print("Enter your character's name: ");
    cin >> playerName;
    cout << endl;

    Player Robin(playerName, 25); // creates player object
    Robin.setName(playerName);

    system("cls");                 // clears the screen

    text.print("\n1482 A.D. --- ");
    text.print(Robin.getName());
    text.readFile("text/Intro.txt");
    text.readFile("text/Quest.txt");

    while(answer == false)
    {
        cout << "\nEnter 'yes' or 'no': ";
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
            text.print("wot the hek, not an option...\n");
        }
    }

    if(answer == true){ // rest of the game runs
        text.print("Time to prepare for the quest & go see the local Weapon Smith! ...\n");
        Sleep(2000);
        system("cls");
        text.readFile("text/WeaponSmith.txt");
        text.print("Time to explore this so called Inn of Stratusberg! ...");
        Sleep(2000);
        system("cls");
        text.readFile("text/Inn.txt");
        text.print("A good 7 hours of sloooop later ...");
        Sleep(2000);
        system("cls");
        text.readFile("text/Journey.txt");
        text.print(Robin.getName());
        text.readFile("text/Sorcerer.txt");
        // battle commences yo
        text.print("---------- Battle with The Sorcerer Rules ----------\n\n");
        text.print("- Each player will roll a dice twice with the chance of landing a number between 1-20\n");
        text.print("- First roll: If you get a high enough roll you can land your move, however if you roll a small number you won't land your move\n");
        text.print("- Second roll: Like the first roll, the same concept applies, except depending on your roll, you can either inflict a high or low amount of damage\n");
        text.print("- Lose all your health you lose the game! oof good luck!");
        Sleep(500);
        system("cls");
        while(battleActive == true){

            if(battleTurn == 1){ // enemy turn

                text.print("The Sorcerer attacks!");
                Sleep(2000);
                cout << endl << endl;
                enemyLand = rand() % 20 + 1;

                if(enemyLand == 20){
                    text.print("The Sorcerer lands a critical!");
                    Sleep(2000);
                    cout << endl << endl;
                    enemyDamage = (rand() % 10 + 4) * 2;
                }
                else if((enemyLand >= 10) && (enemyLand <= 19)){
                    text.print("The Sorcerer lands a hit!");
                    Sleep(2000);
                    cout << endl << endl;
                    enemyDamage = rand() % 10 + 4;
                }
                else if((enemyLand <= 9) && (enemyLand >= 1)){
                    text.print("The Sorcerer misses!");
                    Sleep(2000);
                    cout << endl << endl;
                }
                if(enemyLand == 1){
                    text.print("The Sorcerer misses horribly! How sad.");
                    Sleep(2000);
                    cout << endl << endl;
                }

                if(enemyLand >= 10){
                    cout << "Would you like to dodge(1) or block(2)?" << endl;
                    cin >> playerChoice;
                    if((playerChoice!=1) && (playerChoice!=2)){
                        while((playerChoice!=1) && (playerChoice!=2)){
                            cout << "That is not a valid option, please try again. Would you like to dodge(1) or block(2)?";
                            cin >> playerChoice;
                        }
                    }

                if(playerChoice == 1){
                    cout << "You attempt to dodge!\n\n";
                    Sleep(2000);
                    damagedodge = rand() % 20 + 1;

                    if(damagedodge >= enemyLand){
                        cout << "You succeed!\n\n";
                        Sleep(2000);
                        enemyDamage = 0;
                        Robin.setHealth(enemyDamage);
                    }
                    if(damagedodge < enemyLand){
                        cout << "You failed\n\n";
                        Robin.setHealth(enemyDamage);
                        cout << "You take " << enemyDamage << " damage.\n\n";
                        Sleep(2000);
                    }
                }
                if(playerChoice == 2){
                    cout << "\nYou block!\n\n";
                    Sleep(2000);
                    damageReduction = rand() % 5 + 1;
                    cout << "You blocked " << damageReduction << " damage!\n\n";
                    Sleep(2000);
                    enemyDamage -= damageReduction;
                    if(enemyDamage < 0){
                        enemyDamage = 0;
                    }
                    Robin.setHealth(enemyDamage);
                }
                }
                cout << "You have " << Robin.getHealth() << " health left.\n\n";
                Sleep(2000);
                if(enemy.getHealth() <= 0){ // checks if enemy lost the battle
                    text.readFile("text/Win.txt");
                    battleActive = false;
                    break;
                }

                battleTurn = 2; // switches turn back to user
        }

            else if(battleTurn == 2){ // player turn
                text.print("Time to attack!");
                Sleep(2000);
                cout << endl << endl;
                playerLand = rand() % 20 + 1;

                if(playerLand == 20){
                    text.print("You landed a critical!");
                    Sleep(2000);
                    cout << endl << endl;
                    playerDamage = (rand() % 10 + 4) * 2;
                    cout << "You deal " << playerDamage << " damage.\n\n";
                    Sleep(2000);
                    enemy.setHealth(playerDamage);
                }
                else if((playerLand >= 10) && (playerLand <= 19)){
                    text.print("You landed a hit!");
                    Sleep(2000);
                    cout << endl << endl;
                    playerDamage = rand() % 10 + 4;
                    cout << "You deal " << playerDamage << " damage.\n\n";
                    Sleep(500);
                    enemy.setHealth(playerDamage);
                }
                else if((playerLand <= 9) && (playerLand >= 1)){
                    text.print("You missed!");
                    Sleep(500);
                    cout << endl << endl;
                }
                else if(playerLand == 1){
                    text.print("You missed horribly!");
                    Sleep(2000);
                    cout << endl << endl;
                }
                // if statements to check for user's health & if they lost the battle
                if(Robin.getHealth() <= 0){
                    text.readFile("text/Lose.txt");
                    text.print("\n\n... THE END ...\n\n");
                    Sleep(2000);
                    battleActive = false;
                    break;
                }
                cout << "The Sorcerer has " << enemy.getHealth() << " health left.\n\n";
                battleTurn = 1; // switches turn back to user
            }
        }
    }
}

int main()
{
    Game game;   // creates object that runs the game
    game.RunGame();

    return 0;
}
