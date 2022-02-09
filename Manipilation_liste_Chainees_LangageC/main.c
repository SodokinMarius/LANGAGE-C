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
Pliste Ajoutertete(Pliste liste, int elementAjout)
{
    Pliste copie=liste,casetete;
    casetete=malloc(sizeof(Pliste));
    casetete->valeur=elementAjout;
    casetete->next=copie;
    return casetete;
}
AjouterQue(Pliste liste, int elementAjout)
{
    Pliste copie=liste,caseQue;
    caseQue=malloc(sizeof(Pliste));
    caseQue->valeur=elementAjout;
    caseQue->next=NULL;
    while(copie->next!=NULL)
    {
        copie=copie->next;
    }
    copie->next=caseQue;
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

void SupprimerUnElementRepeter(Pliste liste,int element)
{
    Pliste casetete,copie=liste,preced=NULL;
    int nbrTrouver=0;
    while(copie!=NULL)
    {
        //Controle

        if(copie->valeur==element)
            nbrTrouver++;
        //Suppression
        if(nbrTrouver>1 && copie->valeur==element)
        {
            preced->next=copie->next;
            free(copie);
            copie=preced->next;
        }
        else
        {
            preced=copie;
            copie=copie->next;

        }
    }
}
char Recherchervaleur(Pliste liste,Pliste *addValRechercher, Pliste *addpreced,int* valrecher)
{
    Pliste copie=liste,Asupprimer,Precedent=NULL;
    char trouver='N';
    while(trouver !='O' && copie!=NULL)
    {
        if(copie->valeur==valrecher)
        {
            trouver='O';
            *addValRechercher=copie;
            *addpreced=Precedent;
        }
        Precedent=copie;
        copie=copie->next;
    }
    return trouver;
}
Pliste SupprimerUnElementDonne(Pliste liste,int element)
{
    Pliste copie=liste,preced=NULL,addsuppr=NULL;
    if(Recherchervaleur(copie,&addsuppr,&preced,element)!='O')
        return copie;
    if(copie->valeur==element)
    {
        addsuppr=copie;
        copie=copie->next;
        free(addsuppr);
        return copie;
    }
    else
    {
        if(Recherchervaleur(copie,&addsuppr,&preced,element))
        {
            preced->next=addsuppr->next;
            free(addsuppr);
            return copie;
        }

    }
}


Pliste SupprimerDoublons(Pliste liste)
{
    Pliste copie=liste;
    while(copie!=NULL)
    {
        SupprimerUnElementRepeter(copie,copie->valeur);
        copie=copie->next;
    }
    liste=copie;
    return liste;
}

/*void TrierListe(Pliste liste,int taille)
{
    Pliste copie=liste;
    int i,j,tmp;
    for(i=0; i<taille; i++)
    {
        for(j=0; j<taille-1; j++)
        {
            if(copie->valeur>copie->next->valeur)
            {
                tmp=copie->valeur;
                copie->valeur=copie->next->valeur;
                copie->next->valeur=tmp;
            }
            copie=copie->next;

        }
    }*/
    int Compteur(Pliste liste){
    Pliste copie=liste;
    int cpt=0;
    while(copie!=NULL){
            cpt++;
        copie=copie->next;
    }
    return cpt;
    }
    void TrierListe(Pliste l)
{
    int n=Compteur(l);
    Pliste tete,debut;
    int i,j,nbre=n-1,r=0;
    for(i=0; i<n;i++)
    {
        tete=l->next;
        debut=l;
        for(j=0; j<nbre; j++)
        {
            if(debut->valeur>tete->valeur)
            {
                r=debut->valeur;
                debut->valeur=tete->valeur;
                tete->valeur=r;
            }
            debut=tete;
            tete=tete->next;
        }
        nbre--;
    }
}




void SupprimerFin(Pliste liste)
{
    Pliste copie=liste,addsuppr=liste,preced=liste;
    while(copie!=NULL)
    {
        preced=copie;
        copie=copie->next;
    }
    addsuppr=copie;
    preced->next=NULL;
    free(addsuppr);
    copie->next=preced;


}
 Pliste ConcatenerDeuxListe(Pliste liste1,Pliste liste2,int n)
{

    while(liste1->next=NULL)
    {
        liste1=liste1->next;
    }

    liste1->next=liste2;
    liste1=liste1;

   return liste1;
}

void InverserListe(Pliste* liste)
{
    Pliste premier=NULL,que=NULL;
    while(*liste!=NULL)
    {
        que=(*liste)->next;
        (*liste)->next=premier;
        premier=*liste;
        *liste=que;
    }

    *liste=premier;

}
void Affichage_menu(){
printf("\n+===========================================+\n");
  printf("| *=*=*=*    WELCOME   *=*=*=*=*=*          |\n");
  printf("+===========================================+\n");
printf("\nFAITES VOTRE CHOIX SVP\n\n");
printf("\n1 ----> CREER LA LISTE\n\n2----> AJOUTER UN VALEUR A LA TETE\n");
printf("\n 3----> AJOUTER QUEUE A LA LISTE\n\n4 ---> TRIER LA LISTE \n");
printf("\n5 ----> SUPPRIMER UN ELEMENT DONNE \n\n 6 ----> SUPPRIMER DOUBLONS\n");
printf("\n7 ----> SUPPRIMER UN ELEMENT A LA QUEUE\n\n8 ---->FUSIONNEZ DEUX LISTE\n");
printf("\n9 ----> INVERSER UNE LISTE \n\n10 ---->VERIFICATION PALINDROME\n");
printf("\n11 ----> QUITTER ");

}
void Orientation(){
printf("Merci! La liste n est pas encore creer. \n");
printf("\nVeuillez d abord le creer :");
}
int verifierVide(Pliste liste){
    int vide=1;
if(liste==NULL)
   vide=0;

   return vide;
}



int  VerificationPalindrome(Pliste liste)
{
    Pliste copie=liste;
    int palind=1;
    InverserListe(&copie);
    while(liste!=NULL && copie!=NULL)
    {
        if(liste->valeur!=copie->valeur)
            palind++;

        liste=liste->next;
        copie=copie->next;
    }
    return palind;
}

int main()
{
    int choice;
    do
    {

        Pliste maliste,AutreListe;
        int elementSuppr,ajoutete,valeurAjoutQue;
        int* addrech,addpreced;
        int taille,tail2,tailnew,choice,decid,action;
        Affichage_menu();

        printf("\nQue voulez vous faire ? ");
        scanf("%d",&choice);

        switch(choice){
    case 1:
        printf("\nVeuillez entrer la taille de votre liste : ");
        scanf("%d",&taille);
        maliste=malloc(sizeof(Pliste));
        CreerListe(maliste,taille);
        //
        AfficherListe(maliste);
        /*printf("\nQue voulez vous faire.");
        scanf("%d",&choice);*/
        break;


    case 2:
        if((verifierVide(maliste))==1)
            Orientation();
        else{
        printf("\nVeuillez entrer l element a ajouter a l entete");
        scanf("%d",&ajoutete);
        maliste=Ajoutertete(maliste,ajoutete);
       // AfficherListe(maliste);

        }

        break;

    case 3:
        if((verifierVide(maliste))==1)
            Orientation();
        else{
          printf("\nEntrer l element a ajouter a la queue : ");
        scanf("%d",&valeurAjoutQue);
        AjouterQue(maliste,valeurAjoutQue);
       // AfficherListe(maliste);
        }
        break;


    case 4 :
        TrierListe(maliste);
        printf("\nLes elements Trier");
       // AfficherListe(maliste);

        break;

    case 5 :
        if((verifierVide(maliste))==1)

               Orientation();
else{

    printf("\nVeuillez entrer un element a supprimer : ");
        scanf("%d",&elementSuppr);
        maliste=SupprimerUnElementDonne(maliste,elementSuppr);
        //AfficherListe(maliste);
}
        break;

    case 6:
        printf("\nListe apres supression de doublons : \n");
        SupprimerDoublons(maliste);
       // AfficherListe(maliste);

        break;

    case 7:

        CreerListe(maliste,taille);
        SupprimerFin(maliste);
       // AfficherListe(maliste);

        break;

    case 8:
        printf("\nVeuillez entrer la taille de la nouvelle liste :");
        scanf("%d",&tail2);
        AutreListe=malloc(sizeof(Pliste));
        CreerListe(AutreListe,tail2);
        AfficherListe(AutreListe);
        tailnew=taille+tail2;
        maliste=ConcatenerDeuxListe(maliste,AutreListe,tailnew);
        printf("\nListes concatenee");
        AfficherListe(maliste);

        printf("\nListe fusionnee : ");

       // AfficherListe(maliste);

        break;

    case 9:
        printf("\nListe inversee");
        InverserListe(&maliste);

        break;


    case 10:
        if((VerificationPalindrome(maliste))==1)
            printf("\nLa liste est unPalindrome ");
        else
            printf("\nLa liste est non Palindrome");

    case 11:
        exit(0);
    default :
        printf("\nDesole !!! Votre choix est invalide :");

        break;
    }
//Creer une deuxième liste

       //scanf("%d",&choice);
        AfficherListe(maliste);
    }
    while(choice!=11);


    return 0;
}
