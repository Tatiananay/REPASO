#include <stdio.h>
int main(void)
{
    int nroSignos=0;
    printf("Ingrese numero de signos: ");
    scanf("%i", &nroSignos);
    for (int i = 0; i < nroSignos; i++)
        printf("+ ");
    printf("\n\n");
    for (int i = 0; i < nroSignos; i++)
    {
        if (i%2==0)
            printf("+ ");
        else
            printf("- ");
    }
    printf("\n\n");
    return 0;
}
