#ifndef STORYTEXT_H
#define STORYTEXT_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <Windows.h>


using namespace std;

class StoryText
{
    public:
        StoryText();                    // default constructor
        void readFile(string fileName); // function that reads files 
        void print(string str);         // time delay function

    private:
        string file;
};

#endif // STORYTEXT_H
