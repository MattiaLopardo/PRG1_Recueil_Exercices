## Lecture valeur numérique ou texte

### Objectif
- Déterminer la nature de l'information à lire

### A faire
Ecrire un programme simple permettant de lire une saisie utilisateur.
Selon la nature (type) du premier caractère saisi
- `int` => lire la valeur en `double`
- `char` => lire un string yc les espaces pouvant séparer plusieurs mots

### Exemples d'utilisation

~~~
Saisie une valeur numérique ou un mot: 3.14
Votre valeur: 3.14
~~~


~~~
Saisie une valeur numérique ou un mot: un bateau
Votre mot: un bateau
~~~
<details>
<summary>Solution</summary>

~~~cpp
#include <iostream>
#include <cstdlib>
#include <string>
#define L_MAX 80

using namespace std;

int main ( ) {
   cout << "Saisie une valeur numérique ou un mot: ";
   int first_car = cin.peek ( );

   if ( first_car >= '0' and first_car <= '9' ) {
      double valeur;
      cin >> valeur;
      cout << "Votre valeur: " << valeur << endl;
   }
   else {
      string mot;
      getline(cin, mot);
      cout << "Votre mot: " << mot << endl;
   }

   return EXIT_SUCCESS;
}
~~~

</details>