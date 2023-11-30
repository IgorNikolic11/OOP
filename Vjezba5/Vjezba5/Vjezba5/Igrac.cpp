#include "Igrac.h"
#include <iostream>

Igrac::Igrac() : bodovi(0) {}

void Igrac::setIme(const string& novoIme) {
    ime = novoIme;
}

void Igrac::vuci(const Karta& karta) {
    ruka.push_back(karta);
}

void Igrac::pokaziRuku() const {
    cout << ime << ":" << endl;
    for (const auto& karta : ruka) {
        karta.pokazi();
    }
}

void Igrac::provjeriBodove() {

    int brojBrojac[11] = { 0 };
    int napolitana[4] = { 0 };

    for (const auto& karta : ruka) {
        brojBrojac[karta.getBroj()]++;
        if (karta.getBroj() >= 1 && karta.getBroj() <= 3) {
            napolitana[karta.getZog()]++;
        }
    }

    for (int i = 1; i <= 3; i++) {
        if (brojBrojac[i] == 3) {
            bodovi += 3;
        }
        if (brojBrojac[i] == 4) {
            bodovi += 4;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (napolitana[i] == 3) {
            bodovi += 3;
        }
    }
}

int Igrac::getBodovi() const {
    return bodovi;
}

string Igrac::getIme() const {
    return ime;
}
