#include <stdio.h>
int main()
    
{
    int tamanocuadrado;
    printf("Escriba el tamaño del cuadrado: ");
    scanf("%i", &c);
    printf("\n");
        for (int i = 0; i < tamanocuadrado; i++)
        {
            for (int j = 0; j < tamanocuadrado; j++)
            {
                if (i==0||j==0||i==tamanocuadrado-1||j==tamanocuadrado-1)
                {
                    printf(" + ");
                    
                }
                else{
                    printf("   ");
                }
                
                
            }
            printf("\n");
        }
    
    return 0;
}