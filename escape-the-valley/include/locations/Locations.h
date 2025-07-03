#pragma once

#include "Location.h"

class BusStop: public Location {
    public:
    BusStop() : Location("Bus Stop") { }
};

class Town : public Location {
    public:
    Town() : Location("Pelican Town") { }
};

class Forest : public Location {
    public:
    Forest() : Location("Cindersap Forest") { }
};

class Beach : public Location {
    public:
    Beach() : Location("Beach") { }
};

class Mountain : public Location {
    public:
    Mountain() : Location("Mountain") { }
};