#pragma once

#include <string>

using namespace std;

class Season {
    private:
    string name;
    int year = 1;

    public:
    Season() { }

    Season(string);

    int getYear();

    string toString();

    // void newYear();
};