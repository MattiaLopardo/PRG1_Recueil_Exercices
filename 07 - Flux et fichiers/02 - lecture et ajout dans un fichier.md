# Lecture et ajout de texte dans un fichier

Modifier le programme en C++ de l'exercice 01 pour faire ce qui suit :

- Demander à l'utilisateur de saisir le nom du fichier de sortie.
- Lire le contenu du fichier de sortie, s'il existe et l'afficher sur la console.
- Demander à l'utilisateur de saisir du text et ajouter (append) le texte saisi dans le fichier de sortie. Si le fichier existe déjà, il ne doit pas être écrasé.
- S'assurer que le programme gère les erreurs d'ouverture de fichier.
- Pour terminer la saisie, l'utilisateur pourra taper #exit# dans une ligne séprée ou utiliser Ctrl+D.

NB : simlulation du EOF (End of File)

Ctrl+D et Ctrl+Z sur Unix et Windows, respectivement.
Cmd+D sur Mac

<details>
<summary>Solution</summary>

~~~cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//------------------------------------------------------------
bool lire_fichier(const string& nom_fichier){
   ifstream fichier_entree(nom_fichier);

   // Vérifier si l'ouverture du fichier a réussi
   if (!fichier_entree) {
      return false;
   }

   while (fichier_entree) {
      string strInput;
      getline(fichier_entree, strInput); // lire une ligne
      cout << strInput << "\n";
   }

   fichier_entree.close();

   return true;
}

//------------------------------------------------------------
bool ecrire_fichier(const string& nom_fichier) {

   // Ouvrir le fichier en mode append
   ofstream fichier_sortie(nom_fichier, ios::app);

   // Vérifier si l'ouverture du fichier a réussi
   if (!fichier_sortie) {
      cerr << "Erreur : Impossible d'ouvrir le fichier. \n";
      return false;
   }

   string texte;
   const string terminer = "#exit#";

   // Demandez à l'utilisateur de saisir du texte
   cout << "Entrez le texte à enregistrer dans le fichier (Ctrl+D ou #exit# pour terminer la saisie) :\n";
   while (getline(cin, texte)) {
      if (texte == terminer) break;
      // Écrivez le texte dans le fichier
      fichier_sortie << texte << endl;
   }

   // Fermer le fichier
   fichier_sortie.close();

   cout << "Le texte a été enregistré avec succès dans le fichier." << endl;

   return true;
}

//------------------------------------------------------------
int main() {
   string nom_fichier;

   // Demander à l'utilisateur le nom du fichier où enregistrer le texte
   cout << "Entrez le nom du fichier où enregistrer le texte : ";
   getline(cin, nom_fichier);

   lire_fichier(nom_fichier);

   ecrire_fichier(nom_fichier);

   return EXIT_SUCCESS;
}
~~~

</details>
