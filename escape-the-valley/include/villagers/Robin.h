#pragma

#include "Villager.h"
#include "farmer/Player.h"

class Robin : public Villager {
    public:
    Robin();

    vector<string> introCutscene(Player);
};

extern Robin robin;