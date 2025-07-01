#include "locations/Location.h"

Location::Location(string locationName) {
    name = locationName;
}

string Location::getLocationName() {
    return name;
}