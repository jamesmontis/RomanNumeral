//
// Created by James Montis on 8/26/20.
//

#ifndef ROMAN2_WHATDIGIT_H
#define ROMAN2_WHATDIGIT_H


int whatDigit(char c) {
    switch (c) {
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
    }
}

#endif //ROMAN2_WHATDIGIT_H
