#pragma once

#include <string>

using namespace std;

class Player {
    private:
    string name;
    int amountOfGold = 0;

    public:
    Player() { }
    
    Player(string);

    void setName(string);

    string getName();
    int getAmountOfGold();

    void adjustGold(int, bool);
};