/*
    FUNCTIONS

    int zbroj(a, b) {
        return a+b;
    }

    funkcija koja ce vratiti zbroj a +b

*/

#include <iostream>

using namespace std;

// zadatak -> napraviti 4 funkcije, zbroj oduzimanje i djeljenje i svoju funkciju za ispis

// funkcija tipa int, naziv zbroj
int zbroj(int a, int b) {
    return a+b; // vraca a+b
}

int oduzimanje(int a, int b) {
    return a-b; // vraca a+b
}

int dijeljenje(int a, int b) {
    return a/b; // vraca a+b
}

// tip void nema povratnu informaciju
void ispis(int a, char poruka) {
    cout << poruka << a
}

int main () {

    // poziv funkcije
    cout << "Zbroj 5 i 10 -> (poziv funkcije zbroj()) " << zbroj(5, 10) << endl;
    cout << "Oduzinmanje 10 i 2 -> (poziv funkcije oduzimanje()) " << oduzimanje(10, 2) << endl;
    cout << "Zbroj 5 i 3 -> (poziv funkcije dijeljenje()) " << dijeljenje(5, 3) << endl;

    ispis( zbroj(2, 4), 'Zbroj 2 i 4 -> ' )

    return 0;
}