/* 

    IS STATEMENT

    if is rain outside {
        bring umbrella
    }

    else {
        run naked
    }

    znaci ako nesto je tako onda ce raditi nesto, 
    ako nije tako radit ce nesta drugo
*/


#include <iostream>

using namespace std;

int main () {

    int a, b;

    // unos a i b
    cin >> a;
    cin >> b;

    // provjerava je li a veci od b, 
    // ako je printat ce b je veci od a
    if (a < b) {
        cout << b << " je veci\n";
    }

    // provjerava je li b veci od a, 
    // ako je printat ce a je veci od b
    else if (a > b) {
        cout << a << " je veci\n";
    }

    // ako nije nista od gore tocno
    // "inace" printaj jednaki su
    else {
        cout << "Jednaki su\n";
    }

    return 0;
}