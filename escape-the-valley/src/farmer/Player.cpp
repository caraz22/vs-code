#include <string>
#include "farmer/Player.h"

using namespace std;

Player::Player(string farmerName) {
    name = farmerName;
}

void Player::setName(string farmerName) {
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