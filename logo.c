//Autor: Nayeli Leiva
#include <stdio.h>
int main()

{
    int fila = 6, columna = 6;

    int m[6][6]=  {
                         {4, 4, 4, 4, 4, 4}
                        ,{4, 4, 4, 4, 4, 4}
                        ,{4, 4, 4, 4, 4, 4}
                        ,{4, 4, 4, 4, 4, 4}
                        ,{4, 4, 4, 4, 4, 4}
                        ,{4, 4, 4, 4, 4, 4}
                
                    };
    printf("Inicial N \n");
        for (int f = 0; f < fila; f++)
    {
        for (int c = 0; c < columna; c++)
            
            if (c == 0 || f == c || c == 5)
            printf("%i ",m[f][c]);

            else
            printf("  ");
        printf(" \n");
        
    }
}