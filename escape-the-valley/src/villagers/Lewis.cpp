#include <iostream>

#include "villagers/Lewis.h"

using namespace std;

Lewis lewis;

Lewis::Lewis()
    : Villager("Lewis", "Spring 7") { }

vector<string> Lewis::phoneCall(Player farmer) {
    vector<string> phoneCallLines;
    string line1 = "?: Ah right, " + farmer.getName() + ", just the person I wanted to speak to. Did I pronounce that correctly? ";
    string line2 = "?: Oh I'm sorry, could you repeat that for me then?";
    string line3 = "?: Great, " + farmer.getName() + ", got it.";
    string line4 = this->speak("My name is Lewis, I'm the mayor of Pelican Town. I just wanted to let you know that I got our local carpenter to fix up your grandpa's old house.");
    string line5 = this->speak("Anyways, we're all so excited to have a new face here in Stardew Valley! See you soon, bye.");

    phoneCallLines.push_back(line1);
    phoneCallLines.push_back(line2);
    phoneCallLines.push_back(line3);
    phoneCallLines.push_back(line4);
    phoneCallLines.push_back(line5);

    return phoneCallLines;
}

vector<string> Lewis::introCutscene(Player farmer) {
    vector<string> cutsceneLines;

    string line1 = "Ah, the new farmer!";
    string line2 = "Welcome! I'm Lewis, Mayor of Pelican Town.";
    string line3 = "You know, everyone's been asking about you.";
    string line4 = "It's not every day that someone new moves in. It's quite a big deal!";
    string line5 = "So... You're moving into your grandfather's old cottage.";
    string line6 = "It's a good house... very 'rustic'.";
    
    string line1withRobin = "Rude!";
    string line2withRobin = "Don't listen to her, " + farmer.getName() + ". She's just trying to make you dissatisfied so that you buy one of her house upgrades.";

    string closingLine1 = "Anyway... You must be tired from the long journey. You should get some rest.";
    string closingLine2 = "Tomorrow you ought to explore the town a bit and introduce yourself.";
    string closingLine3 = "The townspeople would appreciate that.";
    string closingLine4 = "Oh, I almost forgot. If you have anything to sell, just place it in this box here. I'll come by during the night to collect it.";
    string closingLine5 = "Well... Good luck!";

    cutsceneLines.push_back(line1);
    cutsceneLines.push_back(line2);
    cutsceneLines.push_back(line3);
    cutsceneLines.push_back(line4);
    cutsceneLines.push_back(line5);
    cutsceneLines.push_back(line6);
    cutsceneLines.push_back(line1withRobin);
    cutsceneLines.push_back(line2withRobin);
    cutsceneLines.push_back(closingLine1);
    cutsceneLines.push_back(closingLine2);
    cutsceneLines.push_back(closingLine3);
    cutsceneLines.push_back(closingLine4);
    cutsceneLines.push_back(closingLine5);

    return cutsceneLines;
}

void Villager::setIntroDialogue(string lewisIntroDial) {
    introDialogue = this->speak("So, how was your first night in the old cottage? Your grandpa used to complain about the rickety old bed. But I think, deep down, he actually loved that house.");
}