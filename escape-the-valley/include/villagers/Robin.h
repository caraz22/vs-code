#pragma once

#include "Villager.h"
#include "farmer/Player.h"
#include "locations/Farm.h"

class Robin : public Villager {
    public:
    Robin();

    std::vector<std::string> introCutscene(Player, Farm);
};

extern Robin robin;