#pragma once

#include <string>
#include <vector>
#include "Karta.h"

using namespace std;

class Igrac {
public:
    Igrac();

    void setIme(const string& novoIme);
    void vuci(const Karta& karta);
    void pokaziRuku() const;
    void provjeriBodove();
    int getBodovi() const;
    string getIme() const;

private:
    string ime;
    vector<Karta> ruka;
    int bodovi;
};
