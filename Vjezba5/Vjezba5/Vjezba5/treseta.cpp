#include <iostream>
#include <vector>
#include "Mac.h"
#include "Igrac.h"

using namespace std;

int main() {
    int numPlayers;

    cout << "Unesi igra li 2 ili 4 igraca: ";
    cin >> numPlayers;

    if (numPlayers != 2 && numPlayers != 4) {
        cout << "Broj igraca mora biti 2 ili 4" << endl;
        return 1;
    }

    Mac mac;
    vector<Igrac> igraci;

    for (int i = 1; i <= numPlayers; i++) {
        string playerName;
        cout << "Unesi ime igraca " << i << ": ";
        cin >> playerName;

        Igrac igrac;
        igrac.setIme(playerName);
        igraci.push_back(igrac);
    }

    for (int i = 0; i < 10; i++) {
        for (auto& igrac : igraci) {
            igrac.vuci(mac.podijeli());
        }
    }

    for (auto& igrac : igraci) {
        igrac.pokaziRuku();
        igrac.provjeriBodove();
        cout << "Bodovi " << igrac.getIme() << ": " << igrac.getBodovi() << endl;
    }

    return 0;
}
