#include "Mac.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>

Mac::Mac() {
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 11; j++) {
            deck.push_back(Karta(j, i));
        }
    }
    shuffle();
}

void Mac::shuffle() {
    srand(unsigned(time(NULL)));
    random_shuffle(deck.begin(), deck.end());
}

Karta Mac::podijeli() {
    Karta karta = deck.back();
    deck.pop_back();
    return karta;
}
