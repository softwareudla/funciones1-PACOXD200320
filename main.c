#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    char Productos [10][50];
    float Precio [10];
    float TotalInventario;
    float Min;
    float Max; 
    
    for (int i = 0; i < 10; i++){
        printf ("\nIngrese el nombre del producto %d: ", i+1);
        fflush (stdin);
        fgets(Productos[i],50, stdin);
        Precio [i] = PrecioProducto(i);
    }
    for (int i = 0; i < 10; i++){
        TotalInventario+= Precio [i];
    }
    Min = Precio [0];
    Max = Precio [0];
    for (int i = 0; i < 10; i++){
        if (Precio [i] > Max)
        {
            Max = Precio [i];
        }
         if (Precio [i] < Min)
        {
            Min = Precio [i];
        }
    }
    
    printf ("%.2lf", TotalInventario);

    return 0;
}