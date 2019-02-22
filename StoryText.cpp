#include "StoryText.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

StoryText::StoryText()
{
    file = "blank";
}
void StoryText::readFile(string fileName)
{
    ifstream storyText;       // creates input file stream object 
    storyText.open(fileName); // opens file 

    if(!storyText.is_open())  // checks if the file is not opened
    {
        exit(EXIT_FAILURE);   // closes the window if the file not opened
    }

    char word[10000]; // if the file can be opened this will execute
    storyText >> word;
    while(storyText.good())
    {
        print(word);
        cout << " ";
        storyText >> word;
    }
    Sleep(5000);   // time delay for user to finish reading the text file
    system("cls"); // clears screen

}
void StoryText::print(string str) // print function to output text with a time delay for each character
{
    for (int i = 0; i < str.size(); ++i)
    {
        cout << str[i];
        Sleep(50);  // feel free to change this if you think the text outputs too slow or too fast
    }
}
