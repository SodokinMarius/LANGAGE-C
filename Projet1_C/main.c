#include <stdio.h>
#include <stdlib.h>
typedef void* Object;
typedef struct Element* PElement;
typedef struct Element Element;
struct Element{
    Object valeur;
    PElement suivant;
};
void CreerListe(PElement liste,Object n){
    Object donne,i;
    PElement AjoutListe;
    printf("\nEnter le premier element de la liste : ");
    scanf("%d",&donne);
    liste->valeur=donne;
    liste->suivant=NULL;

    for(i=0;i<n-1;i++){
        AjoutListe=malloc(sizeof(PElement));
    printf("\nEntrer  l element %d :",i+2);
    scanf("%d",&donne);
    liste->suivant=AjoutListe;
    AjoutListe->valeur=donne;
    AjoutListe->suivant=NULL;
        liste=AjoutListe;
    }

}
void AfficherListe(PElement liste){
    PElement copie=liste;
    printf("\nLes elements de votre liste : \n");
    while(copie!=NULL){
        printf("%d\t",copie->valeur);
       copie=copie->suivant;
    }
    printf("\n");
}

PElement Ajouter_Entete(PElement liste,Object ValeurAjout){
PElement CaseAjouter,copie=liste;
CaseAjouter=malloc(sizeof(PElement));

CaseAjouter->valeur=ValeurAjout;
CaseAjouter->suivant=copie;

return CaseAjouter;
}
void Ajouter_Queue
(PElement liste,Object ValeurQue){
    PElement CaseQueue,copie=liste;
    CaseQueue=malloc(sizeof(PElement));
    CaseQueue->valeur=ValeurQue;
    CaseQueue->suivant=NULL;
    while(copie->suivant!=NULL){
    copie=copie->suivant;
    }
copie->suivant=CaseQueue;

}
void Trier_Liste(PElement liste){
    PElement copie=liste,tmp,caseSuiv,copTemp;
    while(copie!=NULL){
            while(copie->suivant!=NULL){
               tmp=copie;
                caseSuiv=tmp->suivant;
                if(tmp>caseSuiv){
                copTemp=caseSuiv;
                caseSuiv=copie;
                copie=copTemp;
                copie=copie->suivant;

            }

            }

    }
}
char RechercherElement(PElement liste, Object ValeurRechercher,PElement *addRechercher,PElement *addPrecedent){
 char trouver='N';
 PElement copie=liste,tmp=NULL;
if(copie->valeur==ValeurRechercher){
     trouver='O';
     return trouver;
}
else{
    while(trouver!='O' && copie->suivant!=NULL){
        if(copie->valeur==ValeurRechercher){
            trouver='O';
            *addRechercher=copie;
            *addPrecedent=tmp;
        }
        tmp=copie;
        copie=copie->suivant;
    }

}
    return trouver;
}

PElement SupprimerElement(PElement liste, Object ValeurSupprimer){
PElement copielist=liste,tmp;
PElement precedent,addvalRechercher;
if((RechercherElement(liste,ValeurSupprimer,&addvalRechercher,&precedent))!='O')
    return copielist;
else if(copielist->valeur==ValeurSupprimer){
    tmp=copielist;
    copielist=copielist->suivant;
    free(tmp);
return copielist;

}
else{

        if(RechercherElement(liste,ValeurSupprimer,&addvalRechercher,&precedent)){
            precedent->suivant=addvalRechercher->suivant;
            free(addvalRechercher);
        }

    }
    liste=copielist;
    return liste;


}
PElement SupprimerDoublons(PElement liste){
    Object cmpt=0,i=0;;
PElement copie=liste,tmp1=NULL,tmp2=NULL,tmpSuiv=NULL;
while(copie!=NULL){
    cmpt++;
}
while(copie->suivant!=NULL){

        while(i<cmpt){
        tmp1=tmp2;
        tmp2=copie;
         if(tmp1->valeur!=tmp2->valeur)
            tmp2=tmp2->suivant;

            if(tmp1->valeur==tmp2->valeur){
            tmpSuiv=tmp1;
            tmp1->suivant=tmp2;
            free(tmpSuiv);
            cmpt--;
        }
        i++;
        }

    tmp2=copie;
    copie=copie->suivant;
}
    liste=copie;
    return liste;
}

PElement Supprimer_Fin(PElement liste){
    PElement copie=liste,tmp,tmpsuppr;
    while(copie->suivant!=NULL){
        tmp=copie;
        copie=copie->suivant;
    }

    tmp->suivant=NULL;
    free(copie);

    return liste;

}
PElement Inverser(PElement *liste){
PElement *dernier,*premier;
}








int main()
{
    Object tail,ValeurAjouter,ValeurAjoutQue,ValeurRechercher,valeurSupprimer;
    PElement maliste,addRechercher,addPreced;
    maliste=malloc(sizeof(PElement));
    printf("\nVeuillez entrer la taille de la liste :");
    scanf("%d",&tail);
    CreerListe(maliste,tail);
    AfficherListe(maliste);
    printf("\nQuel element voulez vous ajouter ? ");
    scanf("%d",&ValeurAjouter);
    maliste=Ajouter_Entete(maliste,ValeurAjouter);
    AfficherListe(maliste);
    printf("\nQuel element voulez vous ajouter a la queue? ");
    scanf("%d",&ValeurAjoutQue);
   Ajouter_Queue(maliste,ValeurAjoutQue);
    AfficherListe(maliste);
    //Trier_Liste(maliste);
    printf("\nSaisissez au clavier l element a rechercher :");
    scanf("%d",&ValeurRechercher);
    if(RechercherElement(maliste,ValeurRechercher,&addRechercher,&addPreced)=='O'){
       printf("\nWahoo ! Element trouve \n");

       }
       else{
        printf("\nDesole ! Element Non trouve \n");
       }
       printf("\nQuelle valeur voulez vous supprimer ? ");
       scanf("%d",&valeurSupprimer);
       maliste=SupprimerElement(maliste,valeurSupprimer);
   AfficherListe(maliste);

   //maliste=SupprimerDoublons(maliste);
  // AfficherListe(maliste);
  Trier_Liste()
 maliste=Supprimer_Fin(maliste);
  AfficherListe(maliste);

    return 0;
}
