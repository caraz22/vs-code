#pragma once

#include <string>

class Season {
    private:
    std::string name;
    int year = 1;

    public:
    Season() { }

    Season(std::string);

    int getYear();

    std::string toString();

    // void newYear();
};