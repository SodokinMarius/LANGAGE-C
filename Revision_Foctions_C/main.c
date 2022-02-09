#include <stdio.h>
#include <stdlib.h>
typedef void* object;
typedef struct Cellule* Pcellule;
typedef struct Cellule
{
int valeur;
Pcellule suivant;
}Liste;

void CreerListe(Pcellule tete, int n){
    int i,donne;
    Pcellule addtete;

    printf("\nEntrez le premier element :");
    scanf("%d",&donne);
    tete->valeur=donne;
    tete->suivant=NULL;
    for(i=2;i<=n;i++){
        addtete=malloc(sizeof(Pcellule));
        printf("\nEntrer l element %d : ",i);
        scanf("%d",&donne);
        addtete->valeur=donne;
        addtete->suivant=NULL;
        tete->suivant=addtete;
        tete=addtete;
    }
}
    void AfficherListe(Pcellule liste){
    if(liste==NULL){
        printf("\nLa liste est vide");

    }
    else{
        printf("\nLes elements de la liste :");
        while(liste!=NULL){
            printf("%d\t",liste->valeur);
            liste=liste->suivant;
        }
    }
    }
    void Inversement(Pcellule* liste){
    Pcellule p=NULL,q=NULL;
    while(*liste!=NULL){
        q=(*liste)->suivant;
        (*liste)->suivant=p;
        p=*liste;
        *liste=q;
    }
        *liste=p;

    }


    int CompterNbr(Pcellule liste,Pcellule *addernier){
     int cpt=0;
     if(liste==NULL)
        return cpt;
     else{
        while(liste!=NULL){
                cpt++;
            *addernier=liste;
            liste=liste->suivant;
        }
        return cpt;
     }



    }
    void TrierListe(Pcellule liste){
    Pcellule tete, suiv,copie=liste,temp;
    Pcellule* dernier;

    int n=CompterNbr(liste,&dernier),j,i,nbr=n-1;

    for(i=0;i<n;i++){
           copie=liste;
            suiv=copie->suivant;
            for(j=0;j<nbr;j++){
                if(copie->valeur>suiv->valeur){
                    temp=copie->valeur;
                    copie->valeur=suiv->valeur;
                    suiv->valeur=temp;
                }
                copie=suiv;
                suiv=suiv->suivant;

            }
            n--;
    }

    }

int main()
{
 Pcellule liste;
 liste=malloc(sizeof(Pcellule));
 CreerListe(liste,5);

 AfficherListe(liste);
 TrierListe(liste);
 AfficherListe(liste);
 Inversement(&liste);
 AfficherListe(liste);

    return 0;
}
