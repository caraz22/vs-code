#pragma

#include "Villager.h"
#include "farmer/Player.h"

class Robin : public Villager {
    public:
    Robin();

    std::vector<std::string> introCutscene(Player);
};

extern Robin robin;