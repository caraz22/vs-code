#pragma once

#include <string>
#include <vector>

#include "seasons/Season.h"

class Villager {
    private:
    std::string name;
    Season birthSeason;
    int birthDay;
    std::string homeAddress;
    bool marriageable;
    std::vector<Villager> family;
    std::string introDialogue;

    public:
    Villager() { }

    Villager(std::string, bool);

    // void setBirthday(Season, int);
    void setHomeAddress(int, std::string);
    void setBirthday(Season, int);
    void setIntroDialogue(std::string);
    
    std::string getName();
    std::string getBirthday();
    std::string getHomeAddress();
    bool getMarriageable();
    std::string getIntroDialogue();

    std::string speak(std::string);
};