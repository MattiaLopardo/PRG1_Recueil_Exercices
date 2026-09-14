# Réels littéraux

Pour chacun des littéraux suivants, indiquez s'il est valide et, si oui, son type et ce qu'affiche `cout << littéral << endl;`.

| # | Littéral | Valide | Type | Affichage |
|---|---|---|---|---|
| 1 | `1.5` | | | |
| 2 | `1E3` | | | |
| 3 | `12.0u` | | | |
| 4 | `1.0L` | | | |
| 5 | `.5` | | | |
| 6 | `5.` | | | |
| 7 | `2.5f` | | | |
| 8 | `3e-2` | | | |

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
