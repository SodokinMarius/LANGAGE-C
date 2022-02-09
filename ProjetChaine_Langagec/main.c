#include <stdio.h>
#include <stdlib.h>

typedef void Object;

typedef struct Cellule* PCellule;
typedef struct Cellule
{
    int valeur;
    PCellule suivant;
} Liste;

void creerListe(PCellule l, int n)
{
    PCellule tete;
    PCellule p;
    int i;
    int donnee;

    printf("Entrez le premier element ");
    scanf("%d",&donnee);
    tete=l;
    tete->valeur=donnee;/*   *(tete.valeur)=donnee;   */
    tete->suivant=NULL;

    for(i=2; i<=n; i++)
    {
        p=malloc(sizeof(PCellule));
        printf("Entrez l'element suivant ");
        scanf("%d",&donnee);
        p->valeur=donnee;
        p->suivant=NULL;
        tete->suivant=p;
        tete=p;
    }
}

PCellule ajouterTete(PCellule l, int donnee)
{
    PCellule tete;
    tete=malloc(sizeof(PCellule));
    tete->valeur=donnee;
    tete->suivant=l;
    return tete;
}

void ajouterQueue(PCellule l, int donnee)
{
    PCellule que,p=l;
    que=malloc(sizeof(PCellule));
    que->valeur=donnee;
    que->suivant=NULL;
    if(p!=NULL)
    {
        while (p->suivant!=NULL)
        {
            p=p->suivant;
        }
        p->suivant=que;
    }
}

int taille(PCellule l)
{
    int i=1;
    PCellule p;
    p=l;
    while(p->suivant!=NULL)
    {
        i+=1;
        p=p->suivant;
    }
    return i;
}

void trier(PCellule l)
{
    int n=taille(l);
    PCellule tete,debut;
    int i,j,nbre=n-1,r=0;
    for(i=0; i<n; i++)
    {
        tete=l->suivant;
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
            tete=tete->suivant;
        }
        nbre--;
    }
}

PCellule supprimerDonne(PCellule l,int donnee)
{
    int rechercher(PCellule l, int valeurRecherche, PCellule* addrRecherche, PCellule* addrPrecedent);
    PCellule p=NULL, preced=NULL,finality;
    int booleen;
    booleen = rechercher(l,donnee,&p,&preced);
    if (l->valeur==donnee)
    {
        p=l;
        l=l->suivant;
        free(p);
        finality = l;
    }
    else
    {
        if (booleen)
        {
            preced->suivant=p->suivant;
            free(p);
            finality = l;
        }
    }
    return finality;
}

void concatener(PCellule l,PCellule m)
{
    PCellule p,o;
    p=l;
    o=m;
    if(p!=NULL)
    {
        if(o!=NULL)
        {
            while (p->suivant!=NULL)
            {
                p=p->suivant;
            }
            p->suivant=m;
        }
    }
    else
    {
        if(o==NULL)
        {
            while (p->suivant!=NULL)
            {
                p=p->suivant;
            }
            p->suivant=m;
        }
    }
}

void inverserListe(PCellule *l)
{
    PCellule p,q;
    p=NULL;
    while (*l!=NULL)
    {
        q=(*l)->suivant;
        (*l)->suivant=p;
        p=*l;
        *l=q;
    }
    *l=p;
}

PCellule element(PCellule l, int index)
{
    PCellule p;
    p=l;
    int i=0;
    for(i=0; i<index; i++)
    {
        p=p->suivant;
    }
    return p;
}

void suppression(PCellule l, int index)
{
    PCellule p=l,preced=NULL;
    int i=0;
    while(p->suivant!=NULL && i<index)
    {
        i++;
        preced=p;
        p=p->suivant;
    }
    preced->suivant=p->suivant;
    free(p);
}

void SupprimerDernier(PCellule l)
{
    PCellule p=l,preced=NULL;
    int i=0;
    while(p->suivant!=NULL)
    {
        i++;
        preced=p;
        p=p->suivant;
    }
    preced->suivant=NULL;
    free(p);
}
int rechercher(PCellule l, int valeurRecherche, PCellule* addrRecherche, PCellule* addrPrecedent)
{
    PCellule p,preced;
    int trouver=0;
    p=l;
    preced=NULL;

    while (p!=NULL)
    {
        if (p->valeur==valeurRecherche)
        {
            trouver+=1;
            *addrRecherche=p;
            *addrPrecedent=preced;
        }
        preced=p;
        p=p->suivant;
    }
    return trouver;
}

void SupprimerUnElementRepeter(PCellule liste,int element)
{
    PCellule casetete,copie=liste,preced=NULL;
    int nbrTrouver=0;
    while(copie!=NULL)
    {
        //Controle

        if(copie->valeur==element)
            nbrTrouver++;
        //Suppression
        if(nbrTrouver>1 && copie->valeur==element)
        {
            preced->suivant=copie->suivant;
            free(copie);
            copie=preced->suivant;
        }
        else
        {
            preced=copie;
            copie=copie->suivant;

        }
    }
}

PCellule SupprimerDoublons(PCellule liste)
{
    PCellule copie=liste;
    while(copie!=NULL)
    {
        SupprimerUnElementRepeter(copie,copie->valeur);
        copie=copie->suivant;
    }
    liste=copie;
    return liste;
}
void afficherListe(PCellule l)
{
    PCellule p;
    p=l;
    printf("\n");
    while(p!=NULL)
    {
        printf("%d ",p->valeur);
        p=p->suivant;
    }
    printf("\n");
}

int  VerificationPalindrome(PCellule liste)
{
    PCellule copie=liste;
    int palind=1;
    inverserListe(&copie);
    while(liste!=NULL && copie!=NULL)
    {
        if(liste->valeur!=copie->valeur)
            palind++;

        liste=liste->suivant;
        copie=copie->suivant;
    }
    return palind;
}

PCellule effacerListe(PCellule l)
{
    PCellule tmp;
    tmp=l;
    if(l==NULL)
    {
        return NULL;
    }
    else
    {
        tmp=l->suivant;
        free(l);
        return effacerListe(tmp);
    }
}

int main()
{
    PCellule liste,p=NULL,preced=NULL,liste_2;
    int choix=0,element,choix_2=1,continuer=1,deja=0;
    int longueur_liste;
    while(continuer)
    {
        do
        {
            printf("MENU\n(Choisissez uniquement les options possibles de choix)\n\n1-Creation de liste chainee d'entier\n2-Ajout d'element en tete de liste\n3-Ajout d'element en queue de liste\n4-Tri de liste\n5-Suppression d'un element de la liste\n6-Suppression des doublons de la liste\n7-Suppression du dernier element de la liste\n8-Fusion de deux listes\n9-Inversion de liste\n10-Verification de la nature d'une liste(palindrome ou non)\n11-Quitter\n:");
            scanf("%d",&choix);
            if(choix<1 || choix>11)
            {
                printf("Votre choix n'est pas acceptable.\nVeuillez recommencer...\n");
            }
        }
        while(choix<1 || choix >11);
        if(choix==1)
        {
            liste=malloc(sizeof(PCellule));
            printf("Vous avez choisi de creer une liste...\nNB:Si vous aviez une liste, elle sera ecrasee\n\nMaintenant, veuillez renseigner la longueur de votre liste: ");
            do
            {
                scanf("%d",&longueur_liste);
                if(longueur_liste<1)
                {
                    printf("La longueur de la liste n'est pas consistante...\nVeuillez entrer une autre valeur: ");
                }
            }
            while(longueur_liste<1);
            creerListe(liste,longueur_liste);
            deja+=1;
            printf("Voici la liste que vous venez de creer:\n");
        }
        if(choix==2)
        {
            if (deja)
            {
                printf("Vous avez choisi d'ajouter un element en tete de liste...\nEntrez la valeur de l'element a ajouter en tete de liste: ");
                scanf("%d",&element);
                liste=ajouterTete(liste,element);
                printf("Apres ajout en tete de liste, votre listed devient: \n");
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }

        if(choix==3)
        {
            if(deja)
            {
                printf("Vous avez choisi d'ajouter un element en queue de liste...\nEntrez la valeur de l'element a ajouter en queue de liste: ");
                scanf("%d",&element);
                ajouterQueue(liste,element);
                printf("Apres ajout en queue de liste, votre liste devient: \n");
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==4)
        {
            if(deja)
            {
                printf("Vous avez choisi le tri de notre liste courante...\nTapez 1 pour notifier l'ordre croissant ou 0 pour celui decroissant: ");
                trier(liste);
                do
                {
                    scanf("%d",&choix_2);
                }
                while(choix_2!=0 && choix_2!=1);
                if(!choix_2)
                {
                    inverserListe(&liste);
                }
                printf("A la suite de notre tri, notre liste devient: \n");
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==5)
        {
            if(deja)
            {
                printf("Vous avez choisi la suppression d'un element de la liste...\nVoici la liste que nous avons presentement...\n");
                afficherListe(liste);
                printf("Veuillez entrer l'element a supprimer de la liste: ");
                scanf("%d",&element);
                if(rechercher(liste,element,&p,&preced))
                {
                    if(taille(liste)==1)
                    {
                        liste=effacerListe(liste);
                    }
                    else
                    {
                        liste=supprimerDonne(liste,element);
                    }
                }
                else
                {
                    printf("L'element que vous cherchez a supprimer n'est pas dans la liste.\n");
                }
                printf("A la fin de notre suppression, notre liste devient: \n");
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==6)
        {
            if(deja)
            {
                printf("Vous avez choisi la suppression de doublons...\nA la suite de notre suppression de doublons, la liste devient: \n");
                liste=SupprimerDoublons(liste);
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==7)
        {
            if(deja)
            {
                printf("Vous avez choisi la suppression du dernier element de la liste...\n");
                if(taille(liste)==1)
                {
                    liste=effacerListe(liste);
                }
                else
                {
                    SupprimerDernier(liste);
                    printf("Apres sa suppression, la liste devient: \n");
                }

            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==8)
        {
            if(deja)
            {
                liste_2=malloc(sizeof(PCellule));
                printf("Vous avez choisi de fusionner deux listes...\nIl nous faut une seconde liste \nVeuillez la renseigner\nEntrez le nombre d'element de la seconde liste: ");
                scanf("%d",&longueur_liste);
                creerListe(liste_2,longueur_liste);
                printf("La liste a ajouter a notre liste courante est: \n");
                afficherListe(liste_2);
                concatener(liste,liste_2);
                trier(liste);
                SupprimerDoublons(liste);
                printf("La fusion de deux listes renvoie une liste triee...\nPour un tri dans l'ordre croissant, tape 1.Sinon, tapez 0: ");
                scanf("%d",&choix_2);
                if(!choix_2)
                {
                    inverserListe(&liste);
                }
                printf("Apres fusion, notre liste devient: \n");
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==9)
        {
            if(deja)
            {
                printf("Vous avez choisi l'inversion de notre liste courante...\nApres inversion, notre liste devient: ");
                inverserListe(&liste);
            }
            else
            {
                printf("Allez creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==10)
        {
            if(deja)
            {
                printf("Vous voulez verifier si notre liste courante est un palindrome ou non...\nVoici notre liste courante:\n");
                afficherListe(liste);
                if(VerificationPalindrome(liste))
                {
                    printf("Notre liste courante est un palindrome\n");
                }
                else
                {
                    printf("Notre liste courante n'est pas un palindrome\n");
                }
            }
            else
            {
                printf("Aller creer une liste avant de pouvoir effectuer cette operation\n");
            }
        }
        if(choix==11)
        {
            printf("Au revoir...");
            continuer=0;
        }
        if(liste==NULL)
        {
            deja=0;
            printf("Vous n'avez desormais plus de liste...\n");
        }
        if(choix!=11 && choix!=10 && deja)
        {
            afficherListe(liste);
        }
    }
    return 0;
}
