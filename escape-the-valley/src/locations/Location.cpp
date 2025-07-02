#include "locations/Location.h"

using namespace std;

Location::Location(string locationName) {
    name = locationName;
    isCurrentLocation = false;
}

void Location::setCurrentLocation(Location* farmerLocation) {
    isCurrentLocation = true;
    currentLocation = farmerLocation;
}

void Location::setTargetLocation(Location* nextLocation) {
    targetLocation = nextLocation;
}

void Location::setRelativeLocations(Location* northLoc, Location* eastLoc, Location* southLoc, Location* westLoc) {
    string locationUp = "";
    string locationRight = "";
    string locationDown = "";
    string locationLeft = "";

    if (northLoc != nullptr) {
        locationUp = "Up: " + northLoc->toString();
        relativeLocations.push_back(locationUp);
    }
    if (eastLoc != nullptr) {
        locationRight = "Right: " + eastLoc->toString();
        relativeLocations.push_back(locationRight);
    }
    if (southLoc != nullptr) {
        locationDown = "Down: " + southLoc->toString();
        relativeLocations.push_back(locationDown);
    }
    if (westLoc != nullptr) {
        locationLeft = "Left: " + westLoc->toString();
        relativeLocations.push_back(locationLeft);
    } 
}

string Location::getLocationName() {
    return name;
}

Location* Location::getCurrentLocation() {
    return currentLocation;
}

vector<string> Location::getRelativeLocations() {
    return relativeLocations;
}

void Location::switchingLocations() {
    this->isCurrentLocation = false;
    targetLocation->isCurrentLocation = true;
}

string Location::toString() {
    return this->name;
}