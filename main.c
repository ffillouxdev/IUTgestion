#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;

    printf("Bienvenue sur le logiciel IUTgestion !\n");
    do{
        printf(" 1. Affichez le contenu de la BD.\n 2. Ajouter un acteur.\n 3. Supprimer un acteur.\n 4. Modifier un acteur.\n 5. Afficher le contenu d'un d�partement sp�cifique.\n 6. Afficher tel ou tel acteurs.\n Choisissez l'action que vous voulez faire : ");
        scanf("%d", &choix);
        switch(choix){
            case 1 :
                printf("Voici le contenu total affiche : ");
                afficherContenu();
            break;
            case 2 :
                printf("Vous avez decide d'ajouter un acteur, commen�ons...\n");
                ajouterActeur();
                break;
            case 3 :
                printf("Vous avez decide de supprimer un acteur, commen�ons...\n");
                supprActeur();
                break;
            case 4 :
                printf("Vous avez decide de modifier un acteur, commen�ons...\n");
                modiActeur();
                break;
            case 5 :
                printf("Vous avez decide d'affiche le contenue sp�cifique d'un d�partement, commen�ons...\n");
                afficherContenuDep();
                break;
             case 6 :
                printf("Vous avez decide d'affiche tel ou tel acteur, commen�ons...\n");
                affhicherActeur();
                break;
            default : printf("entrez un num�ro sense s'il vous plait");
                break;
        }
    }while(choix != 7);

    return 0;
}
