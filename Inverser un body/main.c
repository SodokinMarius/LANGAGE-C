#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,d;
   int* tab;
    scanf("%d",&n);
    int inver[n];
    for(i=1;i<=n;i++){
        tab=malloc(sizeof(int));
        scanf("%d",&tab[i]);
    }
    d=n-1;
    for(i=0;i<=n;i++){
inver[d]=tab[i];
d--;
    }
    printf("\Tableau saisi :");
    for(i=1;i<=n;i++){
        printf("%d\t",tab[i]);
    }
    printf("\Tableau Inverse :");
    for(i=1;i<=n;i++){
        printf("%d\t",inver[i]);
    }


    return 0;
}
