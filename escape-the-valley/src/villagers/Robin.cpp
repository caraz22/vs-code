#include <iostream>
#include <vector>

#include "villagers/Robin.h"

using namespace std;

Robin robin;

Robin::Robin()
    : Villager ("Robin", "Fall 21") { }

vector<string> Robin::introCutscene(Player farmer, Farm theFarm) {
    vector<string> cutsceneLines;

    string line1busStop = "Hello! You must be " + farmer.getName();
    string line2pt1busStop = "I'm Robin, the local carpenter. Mayor Lewis sent me here to fetch you and show you the way to your new home.";
    string line2pt2busStop = "He's there right now, tidying things up for your arrival";
    string line3busStop = "The farm's right over here, if you'll follow me.";

    string line1nameFarm = "This is your farm. Did you want to give it a name or just use your own name? ";
    string line2nameFarm = "Alrighty then, this is " + theFarm.getName() + ".";

    string line1onFarm = "What's the matter?";
    string line2onFarm = "Sure, it's a bit overgrown, but there's some good soil underneath that mess!";
    string line3onFarm = "With a little dedication you'll have it cleaned up in no time.";
    string line4onFarm = "...Andd here we are, your new home.";

    string line1withLewis = "Rustic? That's one way to put it...";
    string line2withLewis = "'Crusty' might be a little more apt, though.";
    string line3withLewis = "Hmmph.";

    cutsceneLines.push_back(line1busStop);
    cutsceneLines.push_back(line2pt1busStop);
    cutsceneLines.push_back(line2pt2busStop);
    cutsceneLines.push_back(line3busStop);
    cutsceneLines.push_back(line1nameFarm);
    cutsceneLines.push_back(line2nameFarm);
    cutsceneLines.push_back(line1onFarm);
    cutsceneLines.push_back(line2onFarm);
    cutsceneLines.push_back(line3onFarm);
    cutsceneLines.push_back(line4onFarm);
    cutsceneLines.push_back(line1withLewis);
    cutsceneLines.push_back(line2withLewis);
    cutsceneLines.push_back(line3withLewis);

    return cutsceneLines;
}