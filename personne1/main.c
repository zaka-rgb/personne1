#include <stdio.h>
#include <stdlib.h>
#include "personne.h"


    int main(int argc, char *argv[])
{
    int i;

    personne utilisateur[2];
for (i=0;i<2;i++)
    {
    printf("Quel est votre nom joueur %d ? \n",i+1);
    scanf("%s", utilisateur[i].nom);
    printf("Votre prenom ? ");
    scanf("%s", utilisateur[i].prenom);
    printf("Vous vous appelez : %s %s", utilisateur[i].prenom, utilisateur[i].nom);
    printf("\n");
    }

    return 0;

}

