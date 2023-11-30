#pragma once

#include <vector>
#include "Karta.h"

using namespace std;

class Mac {
public:
    Mac();

    void shuffle();
    Karta podijeli();

private:
    vector<Karta> deck;
};
