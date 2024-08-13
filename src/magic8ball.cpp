#include <iostream>
#include <cstdlib>
#include <time.h>

#include "../include/magic8ball.h"

using namespace std;
int count = 0;

Magic8Ball::Magic8Ball() {
    srand(time(0));
}

void Magic8Ball::response() {
    int index = rand() % 20;
    cout << responses[index] << endl << endl;
}