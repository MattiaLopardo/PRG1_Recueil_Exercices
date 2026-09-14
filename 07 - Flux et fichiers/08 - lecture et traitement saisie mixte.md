## Lecture valeur numérique ou texte

### Objectif
- Lire plusieurs données de natures différentes d'une même ligne de saisie et traiter ces donnles.

### A faire
Ecrire un programme qui demande à l'utilisateur de saisir sur une même ligne les informations suivantes
- type d'appareil
- nombre de passagers
- durée du vol
- destination

Les informations données sur une seule ligne et séparées par des `,`

### indication
Utiliser des `stringstream` pour ce problème.

### Exemples d'utilisation

~~~
indiquer sur une seule ligne séparé par des ","
- type d'appareil
- nbre de passagers
- le temps de vol
- la destination
exemple : PC12 3 105 Paris

Avion       : PC12
Passagers   : 3
Duree       : 1.2 heure
Destination : Paris
~~~

<details>
<summary>Solution</summary>

~~~cpp
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

//------------------------------------------------------------
int main() {

   cout << "indiquer sur une seule ligne séparé par des \",\"" << endl;
   cout << "- type d'appareil"          << endl;
   cout << "- nbre de passagers"        << endl;
   cout << "- le temps de vol"          << endl;
   cout << "- la destination"           << endl;
   cout << "exemple : PC12 3 105 Paris" << endl;
   cout << endl;

   string ligne = "PC12,3,1.2,Paris";
   stringstream ss(ligne);

   string appareil;
   string passagersStr;
   string dureeVolStr;
   string destination;

   // Extraction des données séparées par des virgules
   getline(ss, appareil, ',');
   getline(ss, passagersStr, ',');
   getline(ss, dureeVolStr, ',');
   getline(ss, destination, ',');

   // Conversion des chaînes en nombres
   int    passagers = stoi(passagersStr);
   double dureeVol  = stod(dureeVolStr);

   // Affichage
   cout << "Avion       : " << appareil  << "\n";
   cout << "Passagers   : " << passagers << "\n";
   cout << "Duree       : " << dureeVol  << " heure\n";
   cout << "Destination : " << destination << "\n";

   return EXIT_SUCCESS;
}
~~~

</details>