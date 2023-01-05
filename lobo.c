//Autor: Nayeli Leiva
#include <stdio.h>

int main ()
{
    int game[7];
    printf("ACERTIJO DEL VIGILANTE\n\n");
    printf("Un vigilante tiene que atravesar a la orilla del rio de un extremo al otro.\n Un lobo, na nina y unas uvas se encuentran con el.\n\nlo unico con lo que dispone es una barca en la que solo se encuentra con dos espacios disponibles");
    printf("\n\nMientras que el observador los matenga vigilados no ocurrira nada.");
    printf("\nQue deberia hacer para que nadie salga deborado?");
    printf("\nLas opciones se encontraran definidas de la siguiente manera:");
    printf("\n 1. Lobo: 1 \n 2. Nina: 2 \n 3. Uvas: 3 \n 4. Nadie: 0");
    printf("\nSe dispone de cuatro viajes de ida y 3 de regreso respectivamente, suerte para conseguirlo!!!\n\n");

    for (int f = 0; f < 3; f++)
    {
       printf("A quien lleva en el %i viaje el vigilante? ", f+1);
       scanf("%i", &game[(f*2)]);
       printf("Quien regresa en el %i viaje con el vigilante:? ", f+1); 
       scanf("%i",&game[(f*2)+1]);
    }  
       printf("finalmente el vigilante viaja con: "); 
       scanf("%i",&game[6]);

     if ((game[0]==2)&&(game[3]==2)&&(game[1]==0)&&(game[5]==0)&&(game[2]*game[4]==3))  
            printf("FELICIDADES lo has conseguido :)");
        else
            printf("Vuelve a intentarlo");
    printf("\n");
    return (0);
}