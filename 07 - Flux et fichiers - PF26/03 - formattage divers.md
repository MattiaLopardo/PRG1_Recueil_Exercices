# Formattage cout, effet des fonctions de formatage

## Concepts tested
- std::setw()
- std::setfill()
- std::left
- std::right
- std::internal
- std::showpos
- std::noshowpos
- Negative numbers
- Persistence of stream formatting settings

Quel sera le résultat de l'exécution do programme suivant :

~~~cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   int num = -42;

   cout << " 1) " << setfill('x') << setw(6) << left      << num << endl;
   cout << " 2) " << setfill('x') << setw(6) << right     << num << endl;
   cout << " 3) " << setfill('x') << setw(6) << internal  << num << endl;
   cout << " 4) " << showpos      << setw(6) << right     << num << endl;
   cout << " 5) " << noshowpos    << setw(6) << right     << num << endl;
   cout << " 6) " << setfill('0') << setw(8) << right     << num << endl;
   cout << " 7) " << setfill('.') << setw(8) << left      << num << endl;

   return EXIT_SUCCESS;
}~~~

<details>
<summary>Solution</summary>

~~~
1) -42xxx
2) xxx-42
3) -xxx42
4) xxx-42
5) xxx-42
6) 00000-42
7) -42.....

~~~



</details>