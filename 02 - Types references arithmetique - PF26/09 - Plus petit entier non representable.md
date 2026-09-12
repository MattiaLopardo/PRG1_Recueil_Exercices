# Plus petit entier non représentable en type réel

Un `float` code sa mantisse sur 23 bits, plus un bit implicite : 24 chiffres binaires significatifs. `numeric_limits<float>::digits` vaut donc 24 (pour un type réel, `digits` est le nombre de bits de la mantisse, bit implicite compris).

1. Quel est le plus petit entier positif qui n'est pas représentable exactement en `float` ? Raisonnez avec le nombre de chiffres significatifs, puis écrivez l'expression C++ qui le calcule à partir de `numeric_limits<float>::digits` et de `pow`.

2. Vérifiez avec le programme ci-dessous, puis expliquez pourquoi le test 2 affiche `true` alors que le test 3 affiche `false`.

~~~cpp
int n = 16777217;
cout << boolalpha << setprecision(10);
cout << "1) " << static_cast<float>(n) << endl;
cout << "2) " << (static_cast<float>(n) == n) << endl;
cout << "3) " << (static_cast<int>(static_cast<float>(n)) == n) << endl;
~~~

3. Même question pour le type `double` (`numeric_limits<double>::digits` vaut 53) : quel est le plus petit entier positif non représentable, et dans quel type entier faut-il le stocker pour faire la vérification ?

<details>
<summary>Solution</summary>

1. Avec 24 chiffres binaires significatifs, tous les entiers de 0 à 2^24 = 16 777 216 sont représentables (2^24 lui-même s'écrit `1` suivi de 24 zéros, il tient). 2^24 + 1 = **16 777 217** a besoin de 25 chiffres significatifs (`1000…0001`) : c'est le plus petit entier positif non représentable ; il est arrondi à 16 777 216.

   ~~~cpp
   const int premier_non_representable = static_cast<int>(pow(2., numeric_limits<float>::digits)) + 1;
   ~~~

2. Affichage :

   ~~~
   1) 16777216
   2) true
   3) false
   ~~~

   Test 2 : `==` compare un `float` et un `int` ; par conversion implicite, `n` est lui aussi converti en `float` avant la comparaison, ce qui le fait arrondir de la même manière : on compare 16777216 à 16777216. Le test ne voit pas le problème. Test 3 : la valeur est ramenée en `int` avant la comparaison ; 16777216 est différent de 16777217. Moralité : pour tester si une conversion a changé une valeur, il faut revenir dans le type de départ.

3. 2^53 + 1 = **9 007 199 254 740 993**. Il ne tient pas dans un `int` (32 bits) : il faut un `long long`, et le test devient `static_cast<long long>(static_cast<double>(n)) == n`.

</details>
