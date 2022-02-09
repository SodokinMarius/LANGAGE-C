#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef void* Objet;
typedef struct Cellule* Pcellule;
typedef struct Cellule
{
    Objet valeur;
    Pcellule suivant;
} Liste;

void CreerListe(Pcellule j,int n)
{
    Pcellule tete,p;
    int i,donne;
    printf("\n Entrer le premier element : ");
    scanf("%d",&donne);

    tete=j;
    tete->valeur=donne;
    tete->suivant=NULL;
    for(i=0; i<n-1; i++)
    {
        p=malloc(sizeof(Pcellule));
        printf("\nEntrer l element %d : ",i+2);
        scanf("%d",&donne);
        p->valeur=donne;
        p->suivant=NULL;
        tete->suivant=p;
        tete=p;
    }

}
Afficher_liste(Pcellule tete)
{
    Pcellule tmp=tete;
    printf("\n Les elements de votre liste : \n");
    while(tmp!=NULL)
    {
        printf("%d",tmp->valeur);
        tmp=tmp->suivant;
    }
}
Objet rechercher(Pcellule l,Objet* valeurRecherche,Pcellule *addrRecherche,Pcellule *addrPrecedent)
{
    Pcellule p,preced;
    int trouver=0;
    p=l;
    preced=NULL;
    while(trouver==0 && p!=NULL)
    {
        if(p->valeur==valeurRecherche)
        {
            trouver=1;
            *addrRecherche=p;
            *addrPrecedent=preced;
        }
        preced=p;
        p=p->suivant;

    }
    return trouver;

}
//AJOUTER UNE VALEUR A L 'ENTETE
Pcellule ajouter_tete(Pcellule l, Objet* donne)
{
    Pcellule tete,p=l;
    tete=malloc(sizeof(Pcellule));
    tete->valeur=donne;
    tete->suivant=p;
    return tete;
}
//AJOUTER UNE VALEUR A LA QUEUE
void ajouter_Queue(Pcellule l,Objet* donne)
{
    Pcellule que,p=l;
    que=malloc(sizeof(Pcellule));
    que->valeur=donne;
    que->suivant=NULL;

    if(p!=NULL)
    {
        while(p->suivant!=NULL)
        {
            p=p->suivant;
        }
        p->suivant=que;
    }

}
Pcellule supprimer(Pcellule l, Objet* donne)
{
    Pcellule p=NULL,preced=NULL;

    if(l->valeur==donne)
    {
        p=l;
        l=l->suivant;
        free(p);
        return l;
    }
    else
    {
        if(rechercher(l,donne,&p,&preced))
        {
            preced->suivant=p->suivant;
            free(p);
        }
        return l;
    }
}
//INVERSER LA LISTE
//(Ici on passe la liste par variable)
void inverser_liste(Pcellule* l){
    Pcellule premier=NULL,que=NULL;
    while(*l!=NULL){
        que=(*l)->suivant;
        (*l)->suivant=premier;
        premier=*l;
        *l=que;
    }

    *l=premier;

}
int main()
{
    int n;
    Pcellule p=NULL,preced=NULL;
    Objet donne,valeurSupprimer,valeurRecherche,valeurEntete,valeurFin;
    printf("Entrer la taille de la liste :");
    scanf("%d",&n);
    Pcellule maliste;

    maliste=malloc(sizeof(Pcellule));
    CreerListe(maliste,n);
    Afficher_liste(maliste);


   /* printf("\nEntrer l elelment recherche :");
    scanf("%d",&valeurRecherche);
    if(rechercher(maliste,valeurRecherche,&p,&preced)){
        printf("\nElement trouve dans la liste \n");

    }
    else
        printf("\nElement non trouve dans la liste ");*/
   /* printf("\nEntrer l elelment a ajouter :");
    scanf("%d",&valeurEntete);
    maliste=ajouter_tete(maliste,valeurEntete);
    Afficher_liste(maliste);
    printf("\nEntrer l elelment a la fin de liste :");
    scanf("%d",&valeurFin);
    ajouter_Queue(maliste,valeurFin);
    Afficher_liste(maliste);*/
    printf("\nEntrer l elelment a supprimer :");
    scanf("%d",&valeurSupprimer);
    maliste=supprimer(maliste,valeurSupprimer);
    Afficher_liste(maliste);
    inverser_liste(&maliste);
    printf("\nNouvelle liste inverse : ");
    Afficher_liste(maliste);


    return 0;
}

