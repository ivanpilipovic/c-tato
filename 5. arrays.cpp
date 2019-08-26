/*

    ARRAYS

    frizider = [ "red 1", "red 2", "red 3" ]
    red_1 = ["jabuka", "banana"]
    red_2 = ["mlijeko, sok"]
    red_3 = ["lonac_juhe", "hrenovke", "jaja"]

    arrays -> (hrv) polja

    -> varijable koje u sebe spremaju vise vrijednosti

        -> svaka vrijednost u polju je oznacena indexom

                    0  1  2  3  4   -> indexi vrijednosti, recimo da je "n" broj elemenata onda indexa ima "n-1"
        a_polje = [ 1, 2, 3, 4, 5 ] -> jednostavno polje koje sadrzi elemente brojeve od 1 do 5

*/

#include <iostream>

using namespace std;

int main () {

    int a[] = {
        1, 2, 3, 4, 5
    };

    char obitelj[] = {
        "tata", "mama", "sestra", "brat"
    };

    cout << a[0]; // printanje elementa nultog indexa
    cout << a[4]; // printanje elementa cetvrtog indexa

    cout << obitelj[1]; // printanje elementa prvog indexa
    cout << obitelj[3]; // printanje elementa treceg indexa

    // koristeci for petlju mozemo ispisati sav sadrzaj polja
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "] -> " << a[i] << endl;
    }

    for (int i = 0; i < 4; i++) {
        cout << "obitelj[" << i << "] -> " << obitelj[i] << endl;
    }

    return 0;
}