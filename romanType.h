//
// Created by James Montis on 8/26/20.
//

#ifndef ROMAN2_ROMANTYPE_H
#define ROMAN2_ROMANTYPE_H
#include <string>
using namespace std;

class romanType {
    string str;
    int total;
public:
    romanType() {
        total = 0;
    }

    romanType(string s) {
        str = s;
    }

    int romanify(const string num) {  // ex MDCLXVI
        int size = num.length();
        for (int i = 0; i < size; i++) {

            char curr = num[i];
            char next = num[i + 1];

            int x = whatDigit(curr);
            int y = whatDigit(next);
            cout << " x is :" << x << " y is :" << y << endl;
            if (y) {
                if (x >= y) {
                    total += x;
                } else {
                    total += (y - x);
                    i++;
                }
            } else {
                total += x;
            }
        }
        return total;
    }
};

#endif //ROMAN2_ROMANTYPE_H
