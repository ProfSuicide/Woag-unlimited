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
    ifstream storyText;
    storyText.open(fileName);

    if(!storyText.is_open()) // closes the window if the file cannot be opened
    {
        exit(EXIT_FAILURE);
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
