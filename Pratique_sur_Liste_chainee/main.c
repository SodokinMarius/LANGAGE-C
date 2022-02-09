#include <stdio.h>
#include <stdlib.h>
typedef struct Element* Pcellule;
typedef struct Element Element;
struct Element{
int valeur;
Pcellule suivant;
};
void Remplir(Pcellule cop ,int n){
    int i,nbr;
    Pcellule liste,tete=cop;

    printf("\nVeuillez entrer le premier element : ");
    scanf("%d",&nbr);
    tete->valeur=nbr;
    tete->suivant=NULL;
    for(i=0;i<n-1;i++){
        liste=malloc(sizeof(Pcellule));
        printf("\nEntrer l element %d :",i+2 );
        scanf("%d",&nbr);
        tete->suivant=liste;
        liste->valeur=nbr;
        liste->suivant=NULL;


        tete=liste;

    }
}

void Afficher(Pcellule tete){
    Pcellule copie=tete;

printf("\nElements de votre liste :");
    while(copie!=NULL){
            printf("%d\t",copie->valeur);

        copie=copie->suivant;
    }
}
Pcellule Ajouter(Pcellule tete){
    Pcellule copie=tete,liste;
    int ajout;
    liste=malloc(sizeof(Pcellule));
            printf("\nQuel element voulez ajouter ? ");
            scanf("%d",&ajout);
            liste->valeur=ajout;
               liste->suivant=copie;
               return liste;

}
int main()
{
   /* int n;
    Pcellule tete=NULL,deux=NULL;
    tete=malloc(sizeof(Pcellule));
    deux=malloc(sizeof(Pcellule));

    n=15;
    tete->valeur=n;
    tete->suivant=NULL;
    tete->suivant=deux;

    deux->valeur=n;
deux->suivant=NULL;
printf("\n%d et %d",tete->valeur,deux->valeur);*/
int nbr;
printf("\nVeuillez entrer le nombre d element :");
scanf("%d",&nbr);
Pcellule i;
i=malloc(sizeof(Pcellule));

Remplir(i,nbr);
Afficher(i);
i=Ajouter(i);
Afficher(i);

    return 0;
}
