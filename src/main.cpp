#include <iostream>
#include <string>

#include "../include/magic8ball.h"

#define MAX_QUESTION_LENGTH 100

using namespace std;

int main() {
    string question = "";
    Magic8Ball magicBall;
    do {
        cout << "Ask a question or type 'Cancel' to quit program:" << endl;
        getline(cin, question);
        magicBall.response();
    } while (question != "Cancel" && question != "cancel");
    cout << "Quitting program..." << endl;
    return 0;
}