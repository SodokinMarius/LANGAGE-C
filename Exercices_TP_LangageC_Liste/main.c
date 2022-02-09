#include <stdio.h>
#include <stdlib.h>
typedef void* Typvide;
typedef struct liste* Pliste;
typedef struct liste liste;
struct liste
{
    int valeur;
    Pliste next;
};
void CreerListe(Pliste tete, int n)
{
    Pliste liste,copie;

    int i,donne;
    printf("\nVeuillez entrer le premier element de la liste : ");
    scanf("%d",&donne);
    tete->valeur=donne;
    tete->next=NULL;
    for(i=1; i<n; i++)
    {
        liste=malloc(sizeof(Pliste));
        printf("\nEntrez l element suivant :");
        scanf("%d",&donne);
        tete->next=liste;
        tete=tete->next;
        tete->valeur=donne;


        tete->next=NULL;
    }

}
void AfficherListe(Pliste liste)
{
    Pliste copie=liste;
    printf("\nLes elements de la liste :");
    while(copie!=NULL)
    {
        printf("%d\t",copie->valeur);
        copie=copie->next;
    }
}
Pliste ConcatenerDeuxListe(Pliste liste1,Pliste liste2){
Pliste copie1=liste1,copiel2=liste2;

while(copie1->next!=NULL){
    copie1=copie1->next;
}

copie1->next=copiel2;

//liste1=copie1;

return copie1;

}
void TrierListe(Pliste liste,int taille){
    Pliste copie=liste;
    int i,j,tmp;
    for(i=0;i<taille;i++){
            copie=liste;
        for(j=0;j<taille-1;j++){
            if(copie->valeur>copie->next->valeur){
                tmp=copie->valeur;
                copie->valeur=copie->next->valeur;
                copie->next->valeur=tmp;
            }
            copie=copie->next;


        }
    }

}

int main()
{
    Pliste maliste,AutreListe;
    int elementSuppr,ajoutete,valeurAjoutQue;
    int* addrech,addpreced;
    int taille,tail2,tailnew;
    printf("\nVeuillez entrer la taille de votre liste : ");
    scanf("%d",&taille);

    maliste=malloc(sizeof(Pliste));
    CreerListe(maliste,taille);
    AfficherListe(maliste);

    /*TrierListe(maliste,taille);
    printf("\nLes elements Trier");
    AfficherListe(maliste);
    /*maliste=SupprimerFin(maliste);
    AfficherListe(maliste);*/

    //Creer une deuxième liste
    printf("\nVeuillez entrer la taille de la nouvelle liste :");
    scanf("%d",&tail2);
    AutreListe=malloc(sizeof(Pliste));
    CreerListe(AutreListe,tail2);
    AfficherListe(AutreListe);
 maliste=ConcatenerDeuxListe(maliste,AutreListe);
    printf("\nListes concatenee");
    AfficherListe(maliste);
    tailnew=taille+tail2;
    printf("\nListe fusionnee : ");
   TrierListe(maliste,tailnew);
    AfficherListe(maliste);
    return 0;
}
