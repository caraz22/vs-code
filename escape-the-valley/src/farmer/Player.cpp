#include "farmer/Player.h"

Player::Player(string farmerName) {
    name = farmerName;
}

string Player::getName() {
    return name;
}

int Player::getAmountOfGold() {
    return amountOfGold;
}

void Player::adjustGold(int gold, bool profit) {
    if (profit) {
        amountOfGold += gold;
    } else {
        amountOfGold -= gold;
    }
}