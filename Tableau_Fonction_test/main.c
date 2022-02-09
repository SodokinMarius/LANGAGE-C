#include <stdio.h>
#include <stdlib.h>
void Remplir(int nbr, int tab[nbr][nbr]){
int i,j;
for(i=0;i<nbr;i++){
    for(j=0;j<nbr;j++){
        printf("\nEntree (%d,%d): ",i+1,j+1);
        scanf("%d",&tab[i][j]);
    }
}
}
void Affichge(int n,int tab[n][n]){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%c\t",tab[i][j]);
    }
    printf("\n");
}
}
void Suprimer(int n,int tab[n][n],int ligne,int col){
int i,j;
//Remplir(n,tab[n][n]);
tab[ligne-1][col-1]=0;
/*for(i=0;i<n;i++){
    for(j=0;j<n;j++){

        printf("%d\t",tab[i][j]);
    }
    printf("\n");
}*/
}
void Reorganiser(int n,int tab[n][n]){
int i,j,tmp;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(tab[i][j]!=0 && tab[i+1][j]==0){
            tmp=tab[i+1][j];
            tab[i+1][j]=tab[i][j];
            tab[i][j]=tmp;
                    }
    }
}

}



int main()
{
    int nbr,lign,col;
    printf("Entrer un entier : ");
    scanf("%d",&nbr);
    int tab[nbr][nbr];
    Remplir(nbr,tab);
    printf("\n");
    Affichge(nbr,tab);
    printf("\nQue voulez vous retirer ? (Coordonnes de la case : ");
    scanf("%d %d",&lign,&col);
    Suprimer(nbr,tab,lign,col);
    Affichge(nbr,tab);
    printf("\n");
    Reorganiser(nbr,tab);

    Affichge(nbr,tab);
    return 0;
}
