#include "seasons/Season.h"

using namespace std;

Season::Season(string seasonName) {
    name = seasonName;
}

int Season::getYear() {
    return year;
}

string Season::toString() {
    return name;
}

// void Season::newYear() { }