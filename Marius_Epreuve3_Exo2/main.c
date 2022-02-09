/* Nom : SODOKIN Yao Marius
 Email: Yao Mariussodokin@gmail.com
 Contacts: +229090500075 (Whatsapp)/94340400
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Kids_Number[100],quantite_disponible;
    int i,j,nmbre_test,nbre_candie,kids_quantity,number_same_candies;

    do
    {
        scanf("%d",&nmbre_test);
    }while(nmbre_test<1 || nmbre_test>100);

    for(i=0;i<nmbre_test;i++)
    {
        do
        {
            scanf("%d",&nbre_candie);
        }while(nbre_candie<1 || nbre_candie>100);

        do
        {
            scanf("%d",&number_same_candies);
        }while(number_same_candies<1 || number_same_candies>1000);

        kids_quantity=0;

        for(j=0;j<nbre_candie;j++)
        {
            do
            {
                scanf("%d",&quantite_disponible);
            }while(quantite_disponible<1 || quantite_disponible>100);

            kids_quantity+=quantite_disponible/number_same_candies;
        }
        Kids_Number[i]=kids_quantity;
    }

    for(i=0;i<nmbre_test;i++)
    {
        printf("\n%d",Kids_Number[i]);
    }
    return 0;
}
