#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operation.h"

void remplir(int tab[8][10])
{
   int c=4;
    int i,j;
    for(i=0; i<8; i++)
    {
        printf("________________________________________________________________________________\n");

        for(j=0; j<10; j++)
        {

            printf("|" "\t");
        }
        printf("\n|");

    }
    printf("________________________________________________________________________________|\n");
}


void vider(int tab[8][10])
{
    char c='c';
    int i,j;
    for(i=0; i<8; i++)
    {
        printf("________________________________________________________________________________\n");

        for(j=0; j<10; j++)
        {

            printf(" ");
        }
        printf("\n|");

    }
    printf("________________________________________________________________________________\n");
}/*


void Decendre(int  tab[8][10])
{

    int i,j;
    char temp;
    for(i=0; i<8; i++)
    {


        for(j=0; j<10; j++)
        {

            if ((tab[i][j]==" ") && (tab[i+1][j]!=" "))
            {
                temp=tab[i][j];
                tab[i][j]=tab[i+1][j];
                tab[i+1][j]=temp;
            }
        }

    }
}


void remplir_val(int tab[8][10],int a,int b)
{
    vider(tab[8][10]);
   int c=4;
    int i,j;
    tab[a][b]=4;
}


void afficher_mise_a_jour(int tab[8][10])
{

    int i,j;
remplir(tab[8][10]);
  Decendre(tab[8][10]);

    for(i=0; i<8; i++)
    {
        printf("________________________________________________________________________________\n");

        for(j=0; j<10; j++)
        {

            printf("%s",tab[i][j]);
        }

        printf("\n|");
    }

    printf("________________________________________________________________________________\n");

}*/
