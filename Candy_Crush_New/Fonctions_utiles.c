#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void Remplir_grille(int ligne,int col,char tab[ligne][col]){

    int i,j;

srand(time(NULL));
    for(i=0;i<ligne;i++){

        for(j=0;j<col;j++){
       // srand(time(NULL));
           tab[i][j]=(rand()%(7-3)+3);

        }
    }

}
void Afficher_grille(int ligne,int col,char tab[ligne][col]){
int i,j,A='A';
  printf("\n\n\t");
    for(j=0;j<col;j++){
        printf("   %d\t",j+1) ;
    }
    printf("\n\n");

for(i=0;i<ligne;i++){
    printf(" %c\t",A+i);

    for(j=0;j<col;j++){

        printf("|__%c__\t",tab[i][j]);
}
printf("\n\n");
}

}

void Verification_suppression(int ligne,int col,char tab[ligne][col]){

    int i,j;
    for(i=0;i<ligne;i++){
        for(j=0;j<col;j++){
            if(tab[i][j]==tab[i][j+1] && tab[i][j]==tab[i][j+2]){
                tab[i][j]=' ';
                tab[i][j+1]=' ';
                tab[i][j+2]=' ';
                }
        }
    }
}
void Reorganiser_grille(int ligne,int col,char tab[ligne][col]){
    int i,j,t;

        for(i=ligne;i>0;i--){
        for(j=col;j>0;j--){

                for(t=0;t<i;t++){
                    if(tab[t][j]==' ' && tab[t-1][j]!=' '){
                tab[t][j]=tab[t-1][j];
                tab[t-1][j]=' ';
                }
}
}
}

    }

void Echanger_case(char source[4],char dest[4],int ligne,int col, char tab[ligne][col])
{

int  sligne,scol,dligne,dcol,i=0,j=0;
sligne=source[0]-65;dligne=dest[0]-65;

while(source[i]!='\0'){
    i++;
}
while(dest[j]!='\0'){
    j++;
}
//printf("\n%d %d",i,j);
if(i==2){
    scol=source[1]-48-1;
}
else
scol=(source[1]+source[2])-2*(48+1)+10;

if(j==2)
dcol=dest[1]-48-1;
else
    dcol=(dest[1]+dest[2])-2*(48+1)+10;

    char tmp;
    tmp=tab[sligne][scol];
    tab[sligne][scol]=tab[dligne][dcol];
    tab[dligne][dcol]=tmp;
//printf("Case 1 : (%d,%d) et Case 2 : (%d,%d)",sligne,scol,dligne,dcol);
}
int verifier_fin(int ligne, int col,char tab[ligne][col]){
    int i,j,sort=0,cpt=0;
    for(i=0;i<ligne;i++){
        for(j=0;j<col;j++){
            if(tab[i][j]!=' ')
                cpt++;

        }
    }
        for(i=0;i<ligne;i++){
        for(j=0;j<col;j++){
            if(tab[i][j]==tab[i][j+1]&& tab[i][j]!=tab[i][j+2]&& cpt<=8)
                sort=1;
        }
        }
    return sort;
}



