#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*void remplir(int mat,int n){
    int i,j;
    for(i=0;i<n*n;i++){
        for(j=0;j<n*n;j++){
        scanf("%d",&mat[i][j]);
        }
    }

}
typedef enum entree entree;
enum entree{
    1,2,3;
};*/

int main()
{
    //entree comp;
    int T,N,i,t,j,u,e,crit_soum1,crit_soum2,crit_soum3;


    do
    {
        scanf("%d",&T);
    }
    while(T<1 || T>100);
    int critere1[T],critere2[T],critere3[T];
    char dec[T][5];

    for(i=0; i<T; i++)
    {
        do
        {
            scanf("%d",&N);
        }
        while(N<1 || N>1000);


        int  mat[N*N][N*N],sousmat[N][N];
        for(j=0; j<N*N; j++)
        {
            for(t=0; t<N*N; t++)
            {
                scanf("%d",&mat[j][t]);
            }

        }

        for(j=0; j<N*N; j++)
        {
            for(t=0; t<N*N; t++)
            {
                if((mat[j][t]>=1 && mat[j][t]<=9)&& (mat[j][t]!=mat[j][t+1]))
                    critere1[i]=1;
                if((mat[j][t]>=1 && mat[j][t]<=9)&& (mat[j][t]!=mat[j+1][t]))
                    critere2[i]=1;

            }
            crit_soum1=0;
            for(u=0; u<N; u++)
            {
                for(e=0; e<N; e++)
                {
                    if((sousmat[u][e]>=1 && sousmat[u][e]<=9)&&(sousmat[u][e]!=sousmat[u][e+1]))
                        crit_soum1+=1;
                }

            }

            crit_soum2=0;
            for(u=N; u<N*N-N; u++)
            {
                for(e=N; e<N*N-N; e++)
                {
                    if((sousmat[u][e]>=1 && sousmat[u][e]<=9)&&(sousmat[u][e]!=sousmat[u][e+1]))
                        crit_soum2+=1;
                }
            }

            crit_soum3=0;
            for(u=N*N-N; u<N*N; u++)
            {
                for(e=N*N-N; e<N*N; e++)
                {
                    if((sousmat[u][e]>=1 && sousmat[u][e]<=9)&&(sousmat[u][e]!=sousmat[u][e+1]))
                        crit_soum3+=1;
                }

            }
            if((crit_soum1+crit_soum2+crit_soum3)==N*N)
                critere3=1;

        }
        printf("\n\n");

        printf("%d",N);
        for(j=0; j<N*N; j++)
        {
            for(t=0; t<N*N; t++)
            {
                printf("%d ",mat[j][t]);
            }
            printf("\n");
        }
        if(critere1[i]==1&&critere2[i]==1&&critere3[i]==1)
            strcpy(dec[i],"Oui");
        else
            strcpy(dec[i],"Non");

        printf("\nCas n %d : %s ",i+1,dec[i]);
    }

    /*for(i=0; i<T; i++)
    {
        int  mat[N*N][N*N],sousmat[N][N];

    }
    int  mat[N*N][N*N],sousmat[N][N];
    for(i=0; i<T; i++)*/


    // remplir(mat,N);


    return 0;
}
