#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <conio.h>
#include <algorithm>
#include <limits>

#include "farmer/Player.h"
#include "villagers/Lewis.h"

using namespace std;

void slowPrint(const string&);
void verySlowPrint(const string&);
void fastPrint(const string&);
void testPrint(const string&);

int main() {
    system("cls");

    cout << "Escape the Valley - Press Enter to begin";
    char ch = _getch();
    if (ch != '\r') {
        exit(0);
    } else {
        system("cls");
    }
    
    // fast
    testPrint("You are on a train headed towards some town that you can't remember the name of, even though you're going there right now.");
    
    bool repeatRing = true;

    while (repeatRing) {
        for (int i = 0; i < 3; i++) {
            // slow
            testPrint("Bzzzzzt...");
            this_thread::sleep_for(chrono::milliseconds(100));
        }    
        
        while (true) {
            cout << "Will you answer it? [Yes or No] ";
            string answer;  
            getline(cin, answer);
            if (answer == "Yes" || answer == "yes") {
                repeatRing = false;
                break;
            } else if (answer == "No" || answer == "no") {
                cout << "You ignored the call." << endl;
                this_thread::sleep_for(chrono::milliseconds(1000));
                // verySlow
                testPrint("...");
                this_thread::sleep_for(chrono::milliseconds(1500));
                break;
            } else {
                continue;
            }
        }
    }

    // fast
    testPrint("?: Hello? Is this... uh... sorry, what's your name? ");

    string playerName;
    cin >> playerName;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Player farmer(playerName);

    vector<string> lewisPhoneCall = lewis.phoneCall(farmer);
    // fast
    testPrint(lewisPhoneCall[0]);

    while (true) {
        cout << "[Yes or No] ";
        string correct;
        getline(cin, correct);
        if (correct == "Yes" || correct == "yes") {
            break;
        } else if (correct == "No" || correct == "no") {
            // fast
            testPrint(lewisPhoneCall[1]);
            string correctName;
            cin >> correctName;
            farmer.setName(correctName);
            lewisPhoneCall = lewis.phoneCall(farmer);
            break;
        } else {
            continue;
        }
    }

    // fast
    testPrint(lewisPhoneCall[2]);
    testPrint(lewisPhoneCall[3]);
    testPrint(lewisPhoneCall[4]);

    return 0;
}

void slowPrint(const string& text) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
}

void verySlowPrint(const string& text) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    cout << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
}

void fastPrint(const string& text) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(50));
    }

    cout << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
}

void testPrint(const string& text) {
    cout << text << endl;
}