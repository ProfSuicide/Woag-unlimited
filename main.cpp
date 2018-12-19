//File: project4.cpp
//Name: Jake Dunbar, Alex Furlong, Ryan Gonzalez
//Date: 12/19/2018
//Course: CompSci 1
//Description:  This program will 
//Usage:  Entertainment

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <cstlib>
#include <Windows.h>

using namespace std;

void print(string str) // print function to output text with a time delay for each character
{
    for (int i = 0; i < str.size(); ++i)
    {
        cout << str[i];
        Sleep(50);
    }
}

void playerQuestAccepted(){
  cout << "Oh thank you so much helping me! \nYou should take a look around town before you head out on your journey!" << endl;
}
void playerQuestDenied(){
  cout << "You will save the princess for me! \nYou will fight the sorcerer and you will either succeed or die trying!" << endl;
}

void weaponsmithIntro(){
  cout << "Aye! I’ve heard the good news. You’re here to help us save the princess. "<< endl;
  cout << "My name is Grimbow and I can’t begin to tell you how grateful we are for \nyou to help us get this Dagan the Duke out of our town!" << endl;
  cout << "He strolls into town a fortnite ago and demands free food and shelter along with help saving the princess. " << endl;
  
}

int main()
{
  const int weaponSize=3;
  int weapon[weaponSize];
  weapon[0]=0;
  weapon[1]=0;
  weapon[2]=0;
  
  return 0;
}
