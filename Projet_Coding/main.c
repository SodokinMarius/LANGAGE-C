#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void generation (int K,int N){
    int i;

    char caracter[N],a;
    a='a';
    caracter[0]='a';
    for(i=1;i<K;i++){
        caracter[i]=a+i;
    }

for(i=0;i<K;i++){
    printf("%s ",caracter[i]);
}

}

int main()
{
    int N,K,i=0,j,t;
    scanf("%d%d",&N,&K);
    char S[N],c;
    //scanf("%s",&S);
    char pal[N*N*N][N],caract[K];

     generation(K,N);
    /*for(i=0;i<N*N*N;i++){
        for(j=0;j<N;j++){
        strcpy(pal[i][0],S[0]);
        strcpy(pal[i][1],S[1]);
        strcpy(pal[i][2],S[2]);


        }
        printf("%s",pal[i]);
    }*/
    /*c='a';i=0;
    do{


        for(t=0;t<N*N*N;t++){
            for(j=0;j<N;j++){
                     pal[t][j]='a';

                pal[t][j+1]=pal[t][j]+1;
            }

    }
        c++;
        i++;
    }while(i<K);
    printf("\n");
    for(i=0;i<N*N*N;i++){
           printf("%s ",pal[i]);
                printf("\n");

    }*/


    return 0;
}
