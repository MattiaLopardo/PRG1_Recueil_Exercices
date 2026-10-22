# Tests équivalents ? 

Les deux extraits de code suivants sont-ils équivalents ? Justifiez votre réponse.

Non, car la condition de prixActuel == 100 est différente

~~~cpp 
if (prixActuel > 100) {
   nouveauPrix = prixActuel - 20;
} else {
   nouveauPrix = prixActuel - 10;
}
~~~

~~~cpp 
if (prixActuel < 100) {
   nouveauPrix = prixActuel - 10;
} else {
   nouveauPrix = prixActuel - 20;
}
~~~

<details>
<summary>Solution</summary>
Non, si prixActuel == 100, la valeur de nouveauPrix diffère. 
</details>