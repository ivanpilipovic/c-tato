/* 

    LOOPS

    while I am live {
        live like king
    }

    dok god uvjet vrijedi radit ce nesta

    Tri tipa petlji postoje u C++-u:
        -> for loop   (napravit ce se onoliko puta koliko definiramo)
        -> while loop (ponavljat ce se dok god nesto ne prekine, nece se dogoditi ni jednom ako uvjet nevalja)
        -> do while   (kao i while ali ce se dogoditi sigurno jednom)

*/

#include <iostream>

using namespace std;

int main () {

    int i=0;    // brojac

    for (i=0; i<10; i++) {
        cout << "Broj -> " << i << endl;
    }

    int i=0;

    while (i < 10) {
        cout << "Broj -> " << i << endl;
        i+=1;
    }

    int i=0;

    do {
        cout << "Broj -> " << i << endl;
    } while (i < 10);

    return 0;
}

/*

    BROJAC
        npr. i

        i++, ++i, i+=1, i = i+1

        i++     -> prvo pamti "i" i kasnije uvecava za jedan
        ++i     -> odmah uvecava za jedan
        i+=1    -> drugaciji zapisas za i++
        i = i+1 -> isto kao i i++ i i+=1

*/