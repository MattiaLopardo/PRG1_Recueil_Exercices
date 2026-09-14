# Types numériques (théorie)

1. Donnez le nom des 5 types entiers signés du C++, du plus court au plus long 

<details>
<summary>Solution</summary>

~~~cpp 
signed char
short
int
long
long long
~~~

Le mot clé `signed` est optionnel, sauf pour `char` (`signed char`). Seules garanties : `sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)`, `short` et `int` sur au moins 16 bits, `long` au moins 32, `long long` au moins 64.

</details>

2. Idem pour les 5 types entiers non signés 

<details>
<summary>Solution</summary>

~~~cpp 
unsigned char
unsigned short
unsigned int
unsigned long
unsigned long long
~~~

</details>

3. Le type int est-il signé ou non signé par défaut ?

<details>
<summary>Solution</summary>
signé
</details>

4. Le domaine de définition des entiers est-il fixé par la norme ou dépend-il de l'environnement utilisé ?

<details>
<summary>Solution</summary>
Dépend de l'environnement utilisé
</details>