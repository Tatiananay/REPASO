#include <stdio.h>
//@author: Nayeli Leiva
//Date: 06..12.2022
int main()
{
    int num1,num2,resultado,a=3,b=8;

    printf("ingrese el primer valor\n");
    scanf("%i",&num1);
    printf("ingrese el segundo valor\n");
    scanf("%i",&num2);
    resultado = a*(num1 + num2);
    printf("el resultado de la suma es:%i\n",resultado);
    return (0);

}