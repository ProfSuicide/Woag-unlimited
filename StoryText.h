#ifndef STORYTEXT_H
#define STORYTEXT_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <windows.h>


using namespace std;

class StoryText
{
    public:
        StoryText();
        void readFile(string fileName);
        void print(string str);

    private:
        string file;
};

#endif // STORYTEXT_H
