# Permutation circulaire droite de 3 réels
Ecrire un programme C++ qui met à disposition une fonction sans valeur de retour et prenant 3 paramètres de type double permettant d'effectuer une permutation circulaire droite de ces 3 valeurs.


mon code :

#include <iostream>
#include <cstdlib>

using namespace std;

void permutation(double& a, double& b, double& c );

void afficher(double& a, double& b, double& c);

int main() {
double a = 1.0, b = 2.0, c = 3.0;
permutation(a, b, c);
afficher(a, b, c);

return EXIT_SUCCESS;
}

void permutation(double& a, double& b, double& c) {
double aa = a, bb = b, cc = c;

a = cc;
b = aa;
c = bb;
}

void afficher(double& a, double& b, double& c) {
cout << a << " " << b << " " << c << endl;
}


<details>
<summary>Solution</summary>

~~~cpp
#include <cstdlib>
#include <iostream>

using namespace std;

void permutationCirculaireDroite(double& x,
                                 double& y,
                                 double& z);

void afficher(double x,
              double y,
              double z);

//------------------------------------------------------------
int main() {
   double x = 1, y = 2, z = 3;
   for (int i = 1; i <= 3; ++i) {
      permutationCirculaireDroite(x, y, z);
      afficher(x, y, z);
   }
   return EXIT_SUCCESS;
}

//------------------------------------------------------------
void permutationCirculaireDroite(double& x,
                                 double& y,
                                 double& z) {
   double tmp = z;
   z = y;
   y = x;
   x = tmp;
}

//------------------------------------------------------------
void afficher(double x,
              double y,
              double z) {
   cout << "x = " << x << ", "
        << "y = " << y << ", "
        << "z = " << z << endl;
}
~~~
</details>
