#include <iostream>

#include "villagers/Robin.h"
#include "locations/Locations.h"

Robin robin;

Robin::Robin()
    : Villager ("Robin", "Fall 21") { }

vector<string> Robin::introCutscene(Player farmer) {
    vector<string> cutsceneLines;

    string line1busStop = "Hello! You must be " + farmer.getName();
    string line2pt1busStop = "I'm Robin, the local carpenter. Mayor Lewis sent me here to fetch you and show you the way to your new home.";
    string line2pt2busStop = "He's there right now, tidying things up for your arrival";
    string line3busStop = "The farm's right over here, if you'll follow me.";

    string line1nameFarm = "This is your farm. Did you want to give it a name or just use your own name? ";
    // string line2nameFarm = 

}