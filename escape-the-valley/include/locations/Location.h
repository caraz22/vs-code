#pragma once

#include <string>
#include <vector>

using namespace std;

class Location {
    private:
    string name;
    Location* currentLocation;
    Location* targetLocation;
    bool isCurrentLocation;
    Location* northLoc;
    Location* eastLoc;
    Location* southLoc;
    Location* westLoc;
    vector<string> relativeLocations;

    public:
    Location() { }

    Location(string);

    void setCurrentLocation(Location*);
    void setTargetLocation(Location*);
    void setRelativeLocations(Location*, Location*, Location*, Location*);

    string getLocationName();
    Location* getCurrentLocation();
    vector<string> getRelativeLocations();

    void switchingLocations();    
    string toString();
};