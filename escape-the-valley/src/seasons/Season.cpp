#include "seasons/Season.h"

Season::Season(string seasonName) {
    name = seasonName;
}

int Season::getYear() {
    return year;
}

// void Season::newYear() { }