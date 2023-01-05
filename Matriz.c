#include <stdio.h>
void MatrizInteger()
{
    int fila = 3, columna= 4;
    int m[fila][columna];
    //fila columna -> fila de pares
    m[0][0]=2;
    m[0][1]=4;
    m[0][2]=6;
    m[0][3]=8;
    //fila columna -> fila de impares
    m[1][0]=1;
    m[1][1]=3;
    m[1][2]=5;
    m[1][3]=7;
    //fila columna -> fila de ceros
    m[2][0]=0;
    m[2][1]=0;
    m[2][2]=0;
    m[2][3]=0;
    for (int fi= 0; fi< fila; fi++) //--> file
    {
        for (int ci = 0; ci < columna; ci++) //--> columna
        {
            printf("%i \t",m[fi][ci]);
        }
        printf("\n");
    }
}
void main (void)
{
    //system("clear"); // clr
    MatrizInteger();
}