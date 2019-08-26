#include <iostream>

using namespace std;

int main () {

    cout << "Hello world!\n";   // ispisuje na ekran

    int a;                      // definiranje varijable a tipa integer
    cin >> a;                   // unosenje vrijednosti u varijablu a (cin samo za brojcane vrijednosti)
    cout << "Your input was -> " << a << endl;

    int b = 9;                  // definiranje varijable b
    int c = a + b;              // definiranje varijable c i spremanje u nju zbroj a i b

    float v = 9.89;             // definiranje varijable v tipa float

    cout << (int) v << endl;    // printanje v ali iz float u int

    return 0;
}


// komentar za jednu liniju
/* komentar za vise linija

    TIPOVI PODATAKA
        float       -> decimalne vrijednosti
        int         -> cijeli brojevi
        double      -> decimalne vrijednosti sa vise nula
        long double -> za vecu memoriju decimalnih vrijednosti
        char        -> za spremanje slova i brojeva (a..ž, 0..9)
        bool        -> dvije vrijesnoti, true and false
*/