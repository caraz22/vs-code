#include <iostream>

#include "villagers/Lewis.h"

Lewis lewis;

Lewis::Lewis()
    : Villager("Lewis", "Spring 7") { }

vector<string> Lewis::phoneCall(Player farmer) {
    vector<string> phoneCallLines;
    string line1 = "?: Ah right, " + farmer.getName() + ", just the person I wanted to speak to. Did I pronounce that correctly? ";
    string line2 = "?: Oh I'm sorry, could you repeat that for me then?";
    string line3 = "?: Great, " + farmer.getName() + ", got it.";
    string line4 = "Lewis: My name is Lewis, I'm the mayor of Pelican Town. I just wanted to let you know that I got our local carpenter to fix up your grandpa's old house.";
    string line5 = "Lewis: Anyways, we're all so excited to have a new face here in Stardew Valley! See you soon, bye.";

    phoneCallLines.push_back(line1);
    phoneCallLines.push_back(line2);
    phoneCallLines.push_back(line3);
    phoneCallLines.push_back(line4);
    phoneCallLines.push_back(line5);

    return phoneCallLines;
}