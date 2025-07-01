#pragma once

#include <string>
#include <vector>

#include "seasons/Season.h"

using namespace std;

class Villager {
    private:
    string name;
    Season birthSeason;
    int birthDay;
    string homeAddress;
    bool marriageable;
    vector<Villager> family;
    string introDialogue;

    public:
    Villager() { }

    Villager(string, bool);

    // void setBirthday(Season, int);
    void setHomeAddress(int, string);
    void setBirthday(Season, int);
    void setIntroDialogue(string);
    
    string getName();
    string getBirthday();
    string getHomeAddress();
    bool getMarriageable();
    string getIntroDialogue();

    string speak(string);
};