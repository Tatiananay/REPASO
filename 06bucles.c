#include <stdio.h>
 
int main ()
{int static void pyramid(int escalones, int anchura, int altura)
    {
        int i, j, k;
 
        for (i = 1; i <= escalones; i++) {
 
            // espacios
            for (j = 1; j <= (i-1)*(anchura-1); j++) {
                Console.Write(" ");
            }
 
            // anchura
            for (j=0; j < anchura; j++) {
                Console.Write("*");
            }
            Console.Write("\n");
 
            // altura
            for (k=0; k<altura; k++) {
                // espacios
                for (j = 1; j <= i*(anchura-1); j++) {
                    Console.Write(" ");
                }
                Console.Write("*\n");
            }
        }
    }
 
    public static void Main()
    {
        pyramid(5, 5, 2);
    }
    return 0
  
}