#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*-------------------------------------------------*/
typedef void* Objet;
typedef struct Cellule* Pcellule;
typedef struct Cellule
{
    Objet valeur;
    Pcellule suivant;
} Liste;

/*-----------------------------------------------*/
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

/*-----------------------------------------------*/
Afficher_liste(Pcellule tete)
{
    Pcellule tmp=tete;
    printf("\n Les elements de votre liste : \n");
    while(tmp!=NULL)
    {
        printf("%d\t",tmp->valeur);
        tmp=tmp->suivant;
    }
}

/*-----------------------------------------------*/
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

/*-----------------------------------------------*/
//AJOUTER UNE VALEUR A L 'ENTETE
Pcellule ajouter_tete(Pcellule l, Objet* donne)
{
    Pcellule tete,p=l;
    tete=malloc(sizeof(Pcellule));
    tete->valeur=donne;
    tete->suivant=p;
    return tete;
}

/*--------------------------------------*/
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

/*-----------------------------------------------*/
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

/*-----------------------------------------------*/
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

/*-----------------------------------------------*/
Pcellule SupprimerDoublons(Pcellule l){

Pcellule que,copi=l,premier=l;
if(copi!=NULL){

    while(premier->suivant!=NULL){
        que=premier->suivant;
        while(premier->valeur==que->valeur){
            premier->suivant=que->suivant;
            free(que);
            que=premier->suivant;
            if(que==NULL)
                return copi;

        //que=que->suivant;
        }
        premier=premier->suivant;
    }
   return copi;
}
}

/*-----------------------------------------------*/
int NombreElements(Pcellule l,Pcellule *dernier){
int nbr=1;
while(l->suivant!=NULL){
    nbr++;
    l=l->suivant;
}
*dernier=l;
return nbr;
}


/*-----------------------------------------------*/
int Palindrome(Pcellule l){
Pcellule p,premier=l,dernier;
int i,valeurParcours=NombreElements(l,&dernier)/2;
for(i=1;i<valeurParcours;i++){
    if(premier->valeur!=dernier->valeur)
        return 0;
    if(i<valeurParcours){
        premier=premier->suivant;
        p=premier;
        while(premier->suivant!=dernier){
            p=p->suivant;
        }
        dernier=p;
    }
}
return 1;

}

/*-----------------------------------------------*/
/*Empiler est une fonction permettant d'ajouter un element en tete de liste*/
Pcellule Empiler(Pcellule l, Objet donne){
Pcellule tete;
tete=malloc(sizeof(Pcellule));
tete->valeur=donne;
tete->suivant=l;
return tete;
}

/*-----------------------------------------------*/
/*Depiler est une fonction qui permet de supprimer un element
en tete de liste*/
Objet* Depiler(Pcellule *l){
    Objet* donne;
    Pcellule p;
    donne=(*l)->valeur;
    p=*l;
    *l=(*l)->suivant;
    free(p);
    return donne;
}

/*--------------------------------------*/
Pcellule CreerMaPile(Pcellule p, int n){
int i,donne;
for(i=0;i<n;i++){

    printf("\nEntrer l element a ajouter a la pile : ");
    scanf("%d",&donne);
    p=Empiler(p,donne);
}
return p;
}

/*-----------------------------------------------*/
typedef struct Fi* LFile;
typedef struct Fi{
    Pcellule tete;
    Pcellule que;
};

/*--------------------------------------*/
int estFileVide(LFile Fi){
if(Fi->tete!=NULL && Fi->que!=NULL)
    return 0;
else
    return 1;
}

/*-----------------------------------------------*/
void InitialiserFile(LFile Fi){
Fi->tete=NULL;
Fi->que=NULL;
}

/*-----------------------------------------------*/
void enfiler(LFile Fi,Objet donne){
Pcellule nouveau=malloc(sizeof(Pcellule));
nouveau->valeur=donne;
nouveau->suivant=NULL;
if(estFileVide(Fi)!=1){
    Fi->que->suivant=nouveau;
}
else{
    Fi->tete=nouveau;
}
Fi->que=nouveau;
}
Objet* Defiler(LFile Fi){
Objet* donne=NULL;
Pcellule p;
if(estFileVide(Fi)!=1){
    donne=Fi->tete->valeur;
    p=Fi->tete;
    Fi->tete=Fi->tete->suivant;
    free(p);
}
if(Fi->tete==NULL)
    Fi->que=NULL;
return donne;
}

/*-----------------------------------------------*/
void CreerFile(LFile *f,int n){
    int i, donne;
    for(i=0;i<n;i++){
        printf("\nEntrez l element a ajouter a la file : ");
        scanf("%d",&donne);
        enfiler(*f,donne);
    }
}

/*--------------------------------------*/

int main()
{
    int n;
    Pcellule p=NULL,preced=NULL,maPile;
    Objet donne,valeurSupprimer,valeurRecherche,valeurEntete,valeurFin;
    Objet donneEmp,donneDepiler;
    printf("Entrer la taille de la liste :");
    scanf("%d",&n);
    Pcellule maliste;
    maPile=malloc(sizeof(Pcellule));

    maliste=malloc(sizeof(Pcellule));
    CreerListe(maliste,n);
    Afficher_liste(maliste);


    printf("\nEntrer l elelment recherche :");
    scanf("%d",&valeurRecherche);
    if(rechercher(maliste,valeurRecherche,&p,&preced)){
        printf("\nElement trouve dans la liste \n");

    }
    else
        printf("\nElement non trouve dans la liste ");
    printf("\nEntrer l elelment a ajouter :");
    scanf("%d",&valeurEntete);
    maliste=ajouter_tete(maliste,valeurEntete);
    Afficher_liste(maliste);
    printf("\nEntrer l elelment a ajouter a la fin de liste :");
    scanf("%d",&valeurFin);
    ajouter_Queue(maliste,valeurFin);
    Afficher_liste(maliste);
    printf("\nEntrer l elelment a supprimer :");
    scanf("%d",&valeurSupprimer);
    maliste=supprimer(maliste,valeurSupprimer);
    Afficher_liste(maliste);
    inverser_liste(&maliste);
    printf("\nNouvelle liste inverse : ");
    Afficher_liste(maliste);
    maliste=SupprimerDoublons(maliste);
    Afficher_liste(maliste);
    if(Palindrome(maliste))
        printf("\nLa liste est un palindrome");
    else
        printf("\nNon ! Ce n est pas un palindrome");


/*maPile=CreerMaPile(maPile,5);
Afficher_liste(maPile);
maPile=Empiler(maPile,30);
Afficher_liste(maPile);
printf("%d est suprime de la liste \n",(Depiler(&maPile)));
Afficher_liste(maPile);

/*------------------------------------------*/
//Ma File
/*LFile maFile;
maFile=malloc(sizeof(LFile));
InitialiserFile(maFile);
CreerFile(&maFile,5);
Afficher_liste(maFile->tete);
Defiler(maFile);
Afficher_liste(maFile->tete);*/

    return 0;
}

