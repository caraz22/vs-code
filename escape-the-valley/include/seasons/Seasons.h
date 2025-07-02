#pragma once

#include "Season.h"

class Spring : public Season {
    public:
    Spring() : Season("Spring") { }
};

class Summer : public Season {
    public:
    Summer() : Season("Summer") { }
};

class Fall : public Season {
    public:
    Fall() : Season("Fall") { }
};

class Winter : public Season {
    public:
    Winter() : Season("Winter") { }
};