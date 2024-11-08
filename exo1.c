/*EXERCICE 1 OPCLR: "ceci est mon premier exercice de code en c".

Imaginez un programme qui demande deux nombres à l'utilisateur :

- Stockez ces deux nombres dans des variables.
- Faites la somme de ces variables.
- Stockez le résultat dans une variable appelée resultat.
- Vous n'avez plus qu'à afficher le résultat du calcul à l'écran, sous les yeux ébahis de l'utilisateur qui n'aurait jamais été capable de calculer cela de tête aussi vite.*/

#include <stdio.h>
#include<stdlib.h>

int main(){
    int nb1 = 0, nb2 = 0;{

        printf("Ce programme vous propose de faire la somme de deux nombres de votre choix:\n"); // explique la fonction du programme à l'utilisateur
        printf("nombre 1 ?\n");
        scanf("%d",&nb1);
        printf("nombre 2 ?\n");
        scanf("%d",&nb2);
        
    }
    
    int resultat = nb1 + nb2; {

        printf("%d + %d = %d\n", nb1,nb2, resultat);
        return 0;
        
    }

}