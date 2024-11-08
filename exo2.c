/*EXERCICE 2 OPCLR: "utiliser les loops et booleen"
il est demander de reproduire sur le terminal la sortie suivante :

=== Menu ===
1. Royal cheese
2. Mc deluxe
3. Mc bacon
4. Big mac
Votre choix ?

Instructions :
1 Reproduire ce menu à l'aide de printf
2 Ajouter un scanf pour enregister le choix de l'utilisateur dans la variable choixmenu.
3 Faire un switch pour dire à l'utilisateur "tu as choisi le menu Royal Cheese"*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    printf(" === Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix?\n");
        
    int choixmenu = 0;
    int dispo = 1;

    while ((dispo) != 0){

        scanf("%d",&choixmenu);

                switch (choixmenu){
                    case 1:
                        printf("tu as choisi le menu Royal Cheese.\n");
                        dispo -= 1;
                        break;
                    case 2 : 
                        printf("tu as choisi le menu Mc Deluxe.\n");
                        dispo -= 1;
                        break;
                    case 3 : 
                        printf("tu as choisi le menu Mc Bacon.\n");
                        dispo -= 1;
                        break;
                    case 4 : 
                        printf("tu as choisi le menu Big Mac.\n");
                        dispo -= 1;
                        break;
                    default:
                    printf("menu introuvable :( veuillez selectionner un menu disponible.\n");
                }    
    }        
    return 0;
}
