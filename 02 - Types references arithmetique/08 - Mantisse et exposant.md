# Représentation en virgule flottante : mantisse et exposant

Un réel `r > 0` s'écrit de manière unique `r = m * b^e` avec `1 <= m < b` (mantisse normalisée) et `e` entier (exposant), pour une base `b` donnée.

Ecrivez un programme C++ qui demande un nombre réel strictement positif à l'utilisateur et affiche sa mantisse normalisée et son exposant en base 10 puis en base 2, **sans boucle** : les fonctions de `<cmath>` suffisent.

Indications : `log10(r)` et `log2(r)` donnent le logarithme de `r` en base 10 et 2 ; `floor(v)` arrondit vers le bas ; `pow(b, e)` calcule `b^e`.

Pour trouver l'exposant : si `r = m * b^e` avec `1 <= m < b`, que vaut `log_b(r)` ? Quelle est sa partie entière ? Attention aux réels plus petits que 1, dont l'exposant est négatif.

Exemples d'exécution : 

~~~
Entrez un nombre réel : 3.1415
3.1415 = 3.1415 * 10^0
3.1415 = 1.57075 * 2^1
~~~

~~~
Entrez un nombre réel : 2023.09
2023.09 = 2.02309 * 10^3
2023.09 = 1.97567 * 2^10
~~~

Question complémentaire : pourquoi la mantisse en base 2 est-elle toujours comprise entre 1 et 2 (exclu) ? Quel rapport avec le bit implicite du format IEEE 754 ?

<details>
<summary>Solution</summary>

~~~cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {

   cout << "Entrez un nombre réel : ";
   double r;
   cin >> r;

   // base 10 : l'exposant est la partie entière du logarithme en base 10
   const int    exposant_10 = static_cast<int>(floor(log10(r)));
   const double mantisse_10 = r / pow(10., exposant_10);
   cout << r << " = " << mantisse_10 << " * 10^" << exposant_10 << endl;

   // base 2 : même raisonnement avec le logarithme en base 2
   const int    exposant_2 = static_cast<int>(floor(log2(r)));
   const double mantisse_2 = r / pow(2., exposant_2);
   cout << r << " = " << mantisse_2 << " * 2^" << exposant_2 << endl;
}
~~~

Question complémentaire : par construction `2^e <= r < 2^(e+1)`, donc `1 <= r / 2^e < 2`. En binaire, une mantisse dans `[1, 2[` commence toujours par `1,` : ce `1` est le bit implicite d'IEEE 754, qui n'est pas stocké. Les 23 bits de mantisse d'un `float` codent uniquement les chiffres après la virgule.

</details>
