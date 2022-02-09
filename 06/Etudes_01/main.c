#include <stdio.h>
#include <stdlib.h>
void Remplir_tableau(int n, float tab[n]){
int i;
for(i=0;i<n;i++){

            printf("\nEnter l element d indice %d ",i+1);
            scanf("%f",&tab[i]);
}
}

void Afficher_min_max(int n,float tab[n]){
    int i;
    float min,max;
min=tab[0];max=tab[0];
for(i=0;i<n;i++){
    if(tab[i]<min)
        min=tab[i];
    if(tab[i]>max)
        max=tab[i];
}
printf("\nLe minimum : %.2f et le maximum : %.2f",min,max);
}
void Remplir(int l1,int c1,int l2,int c2,double m1[l1][c1], double m2[l2][c2]){
    int i,j;
    printf("\nMatrice 1 :");
    for(i=0;i<l1;i++){
        for(j=0;j<c1;j++){
            scanf("%lf",&m1[i][j]);
        }
    }

    printf("\nMatrice 2:");
    for(i=0;i<l2;i++){

        for(j=0;j<c2;j++){
            scanf("%lf",&m2[i][j]);
        }
    }
}
void Produit(int l1,int c1,int l2,int c2,double m1[l1][c1],double m2[l2][c2]){
    int i,j,t;
     double prod[l1][c2];
    for(i=0;i<l1;i++){
        for(j=0;j<c2;j++){
           prod[i][j]=0;
            for(t=0;t<l2;t++){
                prod[i][j]+=m1[i][t]*m2[t][j];
            }
        }
    }

    for(i=0;i<l1;i++){
        for(j=0;j<c2;j++){
            printf("%.2lf\t",prod[i][j]);
        }
        printf("\n\n");
    }

}

int main()
{
   int nbr,l1,c1,l2,c2;

    printf("\nEntrer le nombre a enregistrer :");
    scanf("%d",&nbr);
    printf ("\nTaille des deux matrices");
    scanf("%d%d%d%d",&l1,&c1,&l2,&c2);
    double mat1[l1][c1],mat2[l2][c2];
   float tab[nbr];
    Remplir_tableau(nbr,tab);
    Afficher_min_max(nbr,tab);
    Remplir(l1,c1,l2,c2,mat1,mat2);
    Produit(l1,c1,l2,c2,mat1,mat2);
    return 0;
}
