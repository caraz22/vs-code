#include "villagers/Villager.h"

Villager::Villager(string villagerName, bool isMarriageable) {
    name = villagerName;
    marriageable = isMarriageable;
}

// void Villager::setBirthday(Season birthSeason, int day) {
//     birthday = birthSeason.getName() + " " + to_string(day);
// }

void Villager::setHomeAddress(int addressNum, string street) {
    homeAddress = to_string(addressNum) + " " + street;
}

string Villager::getName() {
    return name;
}

string Villager::getBirthday() {
    return birthday;
}

string Villager::getHomeAddress() {
    return homeAddress;
}

bool Villager::getMarriageable() {
    return marriageable;
}