// James Montis
// DS 2437 Q: Roman Numeral to integer convert

// header files should be romanType.h for the main class file
// whatDigit.h is the roman number to integer converter function file

// main has limited input validation but the first character has to at least
// resemble a roman numeral or will loop

#include <iostream>
#include <string>
#include "whatDigit.h"
#include "romanType.h"

using namespace std;

int main() {
    romanType r;
    string num;
    cout << "\n\n******************************************\n";
    cout << "\tWelcome to Roman Number Converter\n";
    cout << "\tEnter a roman number to be converted\n";
    cout << "\tExample: 'MCM' followed by a return\n";
    cout << "******************************************\n>";
    cin >> num;
    while (num[0]!=77 && num[0]!=68 && num[0]!=67 && num[0]!=76 && num[0]!=88 &&
            num[0]!=86 && num[0]!=73) {
        cout << "...That does not look like a roman numeral, try again..\n>";
        cin.clear();
        cin >> num;
    }
    cout << r.romanify(num);
    // test
    // MDCLXVI = 1666
    // MCXIV = 1114
    // CCCLIX = 100+100+100+50+9 = 359

    return 0;
}
