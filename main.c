#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;

    printf("Bienvenue sur le logiciel IUTgestion !\n");
    do{
        printf(" 1. Affichez le contenu de la BD.\n 2. Ajouter un acteur.\n 3. Supprimer un acteur.\n 4. Modifier un acteur.\n 5. Afficher le contenu d'un département spécifique.\n 6. Afficher tel ou tel acteurs.\n Choisissez l'action que vous voulez faire : ");
        scanf("%d", &choix);
        switch(choix){
            case 1 :
                printf("Voici le contenu total affiche : ");
                afficherContenu();
            break;
            case 2 :
                printf("Vous avez decide d'ajouter un acteur, commençons...\n");
                ajouterActeur();
                break;
            case 3 :
                printf("Vous avez decide de supprimer un acteur, commençons...\n");
                supprActeur();
                break;
            case 4 :
                printf("Vous avez decide de modifier un acteur, commençons...\n");
                modiActeur();
                break;
            case 5 :
                printf("Vous avez decide d'affiche le contenue spécifique d'un département, commençons...\n");
                afficherContenuDep();
                break;
             case 6 :
                printf("Vous avez decide d'affiche tel ou tel acteur, commençons...\n");
                affhicherActeur();
                break;
            default : printf("entrez un numéro sense s'il vous plait");
                break;
        }
    }while(choix != 7);

    return 0;
}
