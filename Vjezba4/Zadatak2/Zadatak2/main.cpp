#include "sentencefixer.h"

int main() {
    string sentence = "Ja bih ,ako ikako mogu    ,    ovu recenicu napisala ispravno .";
    string correction = fix(sentence);

    cout << "Ispravna recenica: " << correction << endl;

    return 0;
}
