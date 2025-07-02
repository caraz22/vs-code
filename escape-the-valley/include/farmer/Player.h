#pragma once

#include <string>

class Player {
    private:
    std::string name;
    int amountOfGold = 0;

    public:
    Player() { }
    
    Player(std::string);

    void setName(std::string);

    std::string getName();
    int getAmountOfGold();

    void adjustGold(int, bool);
};