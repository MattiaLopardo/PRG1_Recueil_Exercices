# Entiers littéraux

Pour chacun des entiers littéraux suivants, indiquez son type et sa valeur.

| # | Littéral | Type | Valeur |
|---|---|---|---|
| 1 | `12u` | | | unsigned int = 12
| 2 | `1L` | | | signed long int = 1
| 3 | `255ULL` | | | unsigned long long int = 255
| 4 | `1'000'000` | | | signed int = 1'000'000
| 5 | `3ul` | | | unsigned long int = 3
| 6 | `42LL` | | | signed long long int = 42
| 7 | `7U` | | | unsigned int = 7
| 8 | `1'000'000'000'000LL` | | | signed long long int = 1'000'000'000'000

<details>
<summary>Solution</summary>

| # | Littéral | Type | Valeur |
|---|---|---|---|
| 1 | `12u` | `unsigned int` | 12 |
| 2 | `1L` | `long` | 1 |
| 3 | `255ULL` | `unsigned long long` | 255 |
| 4 | `1'000'000` | `int` | 1000000 (le séparateur `'` ne change pas la valeur) |
| 5 | `3ul` | `unsigned long` | 3 (minuscules ou majuscules à choix) |
| 6 | `42LL` | `long long` | 42 |
| 7 | `7U` | `unsigned int` | 7 |
| 8 | `1'000'000'000'000LL` | `long long` | 1000000000000 |

</details>

---

Que se passe-t-il à la compilation puis à l'exécution de la ligne suivante ?

~~~cpp
int n = 1'000'000'000'000;
~~~ il y a dépassement et perte de la valeur de départ car ce nombre ne rentre pas dans la plage de valeurs d'un int de 4 bytes

<details>
<summary>Solution</summary>

Le littéral vaut 10^12, ce qui ne tient pas dans un `int` (au plus 2^31 - 1 sur 32 bits). La conversion implicite vers `int` d'une valeur non représentable donne une valeur congrue modulo 2^32, ici `-727379968`. Le compilateur avertit (`-Wconversion` : *implicit conversion changes value*). Pour stocker cette valeur, il faut un type plus grand : `long long n = 1'000'000'000'000;`.

</details>
