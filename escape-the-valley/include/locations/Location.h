#pragma once

#include <string>

using namespace std;

class Location {
    private:
    string name;
    // Location* currentLocation;

    public:
    Location() { }

    Location(string);

    // void setCurrentLocation(Location*);
    string getLocationName();

};