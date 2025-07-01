#pragma once

#include <string>

using namespace std;

class Player {
    private:
    string name;
    int amountOfGold;

    public:
    Player();
    
    Player(string);

    string getName();
    int getAmountOfGold();

    void adjustGold(int, bool);
};