# 1er code C++

Dans le code ci-dessous, à quoi servent les différentes parties numérotées
~~~cpp
#include <iostream>                         // 1 ajouter des libraries utiles à l'exécution du code grâce aux fonctions que l'on veut utiliser qui sont dans ces même librairies
#include <cstdlib>
using namespace std;                        // 2 Permet de faire reconnaitre les fonctions comme cout sans leur préfixe qui est std::

int main()                                  // 3 appel la fonction de base qui est obligatoire au fonctionnement de l'exécutable soit la fonction main
{                                           // 4 accolade qui déclare le début du bloc de code de la fonction main
    cout << "Hello world"       << endl;    // 5 fonction cout qui permet d'afficher un message à l'écran, endl; qui permet de dire au programme que c'est la fin de la ligne.
    cout << "fin de programme"  << endl;
    return EXIT_SUCCESS;                    // 6 permet de retourner un message à l'écran avec une valeur donnée, dans ce cas "EXIT_SUCCESS" qui vaut 0. cette valeur en fin de programme signifie que celui-ci s'est exécuter correctement sans erreur ou comportement innatendu
}                                           // 4 Accolade qui ferme le bloc de code de la fonction main ce qui met fin au bloc 
~~~

<details>
<summary>Solution</summary>

1. Ajouter des librairies utiles au programme
    - *iostream*  : pour *cout*, *cin*, ...
    - *cstdlib*   : pour *EXIT_SUCCESS*
2. Utilise l'espace de nommage *std*. Sans quoi, il faudrait écrire
    - *std::cout*
    - *std::endl*
3. *main* est le nom de la fonction principale (obligatoire)
    - n'a pas de paramètre () /!\ *main(void)* serait faux (du C)
    - retourne un code d'erreur en entier
4. *{ ... }* bloc de la fonction contenant les instructions
5. Les instructions, toutes se terminent par un ";"
6. Code d'erreur en fin de fonction.

   **NB**: pas obligatoire pour la fonction "main"

</details>
