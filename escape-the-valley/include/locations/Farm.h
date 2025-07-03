#pragma once

#include "Location.h"

class Farm : public Location {
    private:
    std::string name;

    public:
    Farm() : Location("Farm") { }

    void setName(std::string);

    std::string getName();
};