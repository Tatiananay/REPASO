#include <stdio.h>
int maid(void)
{
    int escalones=0,altura=0;
    printf("introduzca el numero de escalones: ");
    scanf("%i",&escalones);
    printf("introduzca el numero de altura: ");
    scanf("%i",&altura);
    for (int i = 1; i <= escalones; i++);{
        for (int j = 1; j <= altura; j++){
            for(int k = 0;k < escalones ; k++);{
                printf("+ ");
            }
        }
    }     
    printf("\n\n");


    return 0;
}