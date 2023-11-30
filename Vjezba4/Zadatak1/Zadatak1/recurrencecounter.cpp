#include "recurrencecounter.h"

int numOfRecurrences(const string& mainString, const string& targetString) {
    int num = 0;
    int position = mainString.find(targetString, 0);

    while (position != string::npos) {
        num++;
        position = mainString.find(targetString, position + 1);
    }

    return num;
}
