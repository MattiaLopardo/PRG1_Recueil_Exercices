# Conversions implicites

Soient les déclarations suivantes :
~~~cpp
char c = 'A';
int n = 7;
float x = 1.25f;
double z = 5.5;
~~~

Pour chacune des expressions suivantes, indiquez :
- combien de conversions implicites sont mises en œuvre et lesquelles
- ce qu'elle vaut et quel est son type (c'est-à-dire le type à déclarer pour une variable `r1` … `r3` qui la stockerait sans conversion)

~~~cpp
2 * x + c                          // r1
static_cast<char>(n) + c           // r2
static_cast<float>(z) + n / 2      // r3
~~~


<details><summary>Solution</summary>

Rappel Les promotions numériques : `bool → int`, `char → int` et `short → int`

~~~cpp
float r1 = 67.5;

/* r1 = 2*x + c
 * 
 * 3 conversions implicites : c (de type char) est tout d'abord 
 * converti en int (promotion numérique), ce qui donne 65. On 
 * évalue ensuite 2 * x en convertissant 2 (de type int) en float, 
 * ce qui donne 2.5 de type float. Pour effectuer l'addition, on
 * convertit la valeur entière 65 en float, avant de l'ajouter au 
 * résultat précédent (2.5).
*/

int r2 = 72;

/* r2 = static_cast<char>(n) + c
 * 
 * 2 conversions implicites : n est converti explicitement en char (static_cast)
 * c et static_cast<char>(n) sont tous les deux convertis implicitement en int 
 * (promotion numérique) avant d'etre additionnés.
 */

float r3 = 8.5;

/* r3 = static_cast<float>(z) + n / 2
 * 
 * 1 conversion implicite : z est tout d'abord converti en float
 * (static_cast, explicite), ce qui donne 5.5. La division entière n / 2 est ensuite 
 * effectuée; on obtient la valeur 3. Cette valeur (3) est ensuite 
 * convertie en float, avant d'être ajoutée à 5.5. 
*/
~~~

</details>
