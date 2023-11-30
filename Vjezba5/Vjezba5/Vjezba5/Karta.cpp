#include "Karta.h"

Karta::Karta(int broj, int zog) : broj(broj), zog(zog) {}

void Karta::pokazi() const {
    if (broj >= 8 && broj <= 10) {
        cout << broj + 3;
    }
    else {
        cout << broj;
    }
    switch (zog) {
    case 0: cout << "S"; break;
    case 1: cout << "B"; break;
    case 2: cout << "K"; break;
    case 3: cout << "D"; break;
    }
    cout << endl;
}

int Karta::getBroj() const {
    return broj;
}

int Karta::getZog() const {
    return zog;
}
