#pragma once

#include <string>
#include <vector>

class Location {
    private:
    std::string name;
    Location* currentLocation;
    Location* targetLocation;
    bool isCurrentLocation;
    Location* northLoc;
    Location* eastLoc;
    Location* southLoc;
    Location* westLoc;
    std::vector<std::string> relativeLocations;

    public:
    Location() { }

    Location(std::string);

    void setCurrentLocation(Location*);
    void setTargetLocation(Location*);
    void setRelativeLocations(Location*, Location*, Location*, Location*);

    std::string getLocationName();
    Location* getCurrentLocation();
    std::vector<std::string> getRelativeLocations();

    void switchingLocations();    
    std::string toString();
};