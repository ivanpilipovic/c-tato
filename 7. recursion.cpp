/*
    RECURSION

    -> funkcija koja poziva samu sebe
    -> sporije ali efikasnije rjesenje problema

*/

#include <iostream>

using namespace std;

int fakt(int num) {
    if (num == 1) {
        return 1;
    }

    else {
        return num * fakt(num-1); // vratit ce num i pomnoziti sa num-1 npr. 5 * 5-1 (4)
    }
}

int main () {

    cout << "Faktorije od 6 -> " << fakt(6);

    return 0;
}

/*

    Faktorijeli:

        oznaka -> !

        npr. 5! (citaj pet faktorijela) = 5*4*3*2*1 = 120
*/