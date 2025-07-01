#pragma once

#include "Villager.h"
#include "../farmer/Player.h"

class Lewis : public Villager {
    public:
    Lewis();

    vector<string> phoneCall(Player);
};

extern Lewis lewis;
