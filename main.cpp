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

int main()
{
  srand (time(NULL));
  const int weaponSize=3;
  int weapon[weaponSize];
  weapon[0]=0;
  weapon[1]=0;
  weapon[2]=0;
  int weaponland=rand() % 20 + 1;
  
  return 0;
}
