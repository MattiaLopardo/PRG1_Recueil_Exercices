// Exemples
//
// - listerCaracteres('A', 'A') => A
// - listerCaracteres('A', 'C') => ABC
// - listerCaracteres('B', 'A') =>
// - listerCaracteres('0', '9') => 0123456789
// - listerCaracteres(65, 67)   => ABC
//
// La fonction retourne un booléen indiquant si des caractères ont été affichés.

#include <iostream>
#include <cstdlib>

using namespace std;

char test(char a, char b) {
    if (a > b) {cout << "a ne doit pas etre plus grand que b" << endl;return 0;}
    else {
        for (a; a <= b; ++a) {
            cout << a;
        } return 1;
    }
}
int main() {
    char a = 0;
    cout << "entrer a : " << endl;
    cin >> a;
    char b = 0;
    cout << "entrer b : " << endl;
    cin >> b;
    test(a,b);
}