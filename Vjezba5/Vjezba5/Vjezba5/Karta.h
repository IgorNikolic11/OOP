#pragma once

#include <iostream>

using namespace std;

class Karta {
public:
    Karta(int broj, int zog);

    void pokazi() const;
    int getBroj() const;
    int getZog() const;

private:
    int broj;
    int zog;
};
