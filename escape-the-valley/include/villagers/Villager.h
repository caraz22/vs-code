#pragma once

#include <string>
#include <vector>

using namespace std;

class Villager {
    private:
    string name;
    string birthday;
    string homeAddress;
    bool marriageable;
    vector<Villager> family;
    string introDialogue;

    public:
    Villager();

    Villager(string, bool);

    // void setBirthday(Season, int);
    void setHomeAddress(int, string);
    void setIntroDialogue(string);
    
    string getName();
    string getBirthday();
    string getHomeAddress();
    bool getMarriageable();
    string getIntroDialogue();
};