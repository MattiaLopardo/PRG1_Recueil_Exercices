#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main() {

    int gauche, droite;
    cin >> gauche;
    cin >> droite;

    int somme = gauche + droite;

    cout << "somme de " << gauche << " + " << droite << " = " << somme << endl;

    bool correct = numeric_limits<int>::max - gauche < droite;
    cout << " ce resultat est correct : " << boolalpha << correct << endl;

    return EXIT_SUCCESS;
}