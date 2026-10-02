# Réels littéraux

Pour chacun des littéraux suivants, indiquez s'il est valide et, si oui, son type et ce qu'affiche `cout << littéral << endl;`.

| # | Littéral | Valide | Type | Affichage |
|---|---|---|---|---|
| 1 | `1.5` | | | | correct, double = 1.5
| 2 | `1E3` | | | | correct, int = 1*10^3 = 1000
| 3 | `12.0u` | | | | faux, car unsigned exite que pour les entier
| 4 | `1.0L` | | | | correct, signed long double = 1.0
| 5 | `.5` | | | | correct, signed double = 0.5
| 6 | `5.` | | | | correct, signed double = 5.0
| 7 | `2.5f` | | | | correct, signed float = 2.5
| 8 | `3e-2` | | | | correct, signed double int = 3*10^-2 = 0.03

<details>
<summary>Solution</summary>

| # | Littéral | Valide | Type | Affichage |
|---|---|---|---|---|
| 1 | `1.5` | oui | `double` | `1.5` |
| 2 | `1E3` | oui | `double` | `1000` |
| 3 | `12.0u` | non | | le suffixe `u` (non signé) n'existe que pour les entiers |
| 4 | `1.0L` | oui | `long double` | `1` |
| 5 | `.5` | oui | `double` | `0.5` |
| 6 | `5.` | oui | `double` | `5` |
| 7 | `2.5f` | oui | `float` | `2.5` |
| 8 | `3e-2` | oui | `double` | `0.03` |

Rappel : le type par défaut d'un réel littéral est `double` ; `f`/`F` donne un `float`, `l`/`L` un `long double`. Il faut un `.` ou un `e` pour qu'un littéral soit réel et non entier.

</details>
