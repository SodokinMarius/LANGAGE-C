#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[4][8];
    int i;

    for(i=0;i<4;i++){
        printf("\nEntrer le devise & $ %d:",i+1);
        scanf("%s",&tab[i]);
    }
     for(i=0;i<4;i++){

       printf("%s\t",tab[i]);

    }

    return 0;
}
