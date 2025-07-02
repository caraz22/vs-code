#pragma once

#include "Villager.h"
#include "farmer/Player.h"

class Lewis : public Villager {
    public:
    Lewis();

    std::vector<std::string> phoneCall(Player);
    std::vector<std::string> introCutscene(Player farmer);
};

extern Lewis lewis;
