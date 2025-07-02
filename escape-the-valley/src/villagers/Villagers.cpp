#include "villagers/Villager.h"

using namespace std;

Villager::Villager(string villagerName, bool isMarriageable) {
    name = villagerName;
    marriageable = isMarriageable;
}

void Villager::setHomeAddress(int addressNum, string street) {
    homeAddress = to_string(addressNum) + " " + street;
}

void Villager::setBirthday(Season seasonOfBirth, int dayOfBirth) {
    birthSeason = seasonOfBirth;
    birthDay = dayOfBirth;
}

void Villager::setIntroDialogue(string villagerDialogue) {
    introDialogue = villagerDialogue;
}

string Villager::getName() {
    return name;
}

string Villager::getBirthday() {
    string birthday = birthSeason.toString() + " " + to_string(birthDay);
    return birthday;
}

string Villager::getHomeAddress() {
    return homeAddress;
}

bool Villager::getMarriageable() {
    return marriageable;
}

string Villager::getIntroDialogue() {
    return introDialogue;
}

string Villager::speak(string dialogue) {
    return name + ": " + dialogue;
}