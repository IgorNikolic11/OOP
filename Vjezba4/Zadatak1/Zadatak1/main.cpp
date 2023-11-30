#include "recurrencecounter.h"

int main() {
    string main = "Ovo abc je abc test abc";
    string target = "abc";

    int num = numOfRecurrences(main, target);

    cout << "Main: " << main << endl << "Target: " << target << endl;
    cout << "Num of recurrences: " << num << endl;

    return 0;
}
