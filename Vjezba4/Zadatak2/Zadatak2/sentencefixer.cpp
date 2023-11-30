#include "sentencefixer.h"

string fix(const string& sentence) {
    string correction = "";

    for (char c : sentence) {
        if (ispunct(c)) {
            if (correction.back() == ' ') {
                correction.pop_back();
            }

            correction += c;

            if ((c + 1) != ' ') {
                correction += ' ';
            }
        }
        else if ((c == ' ' && !ispunct(correction.back()) && correction.back() != ' ') || (c != ' ' && !ispunct(c))) {
            correction += c;
        }
        else if (c == ' ' && correction.back() != ' ') {
            correction += c;
        }
    }

    return correction;
}
