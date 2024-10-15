#include <stdio.h>
#include "funciones.h"

float PrecioProducto(int num){
    float n;
    do
    {
       printf("\nIngrese el precio del producto %d: ", num+1);
       scanf("%f",&n);
       if (n < 0 ) {
            printf ("\nEl precio del producto es menor a 0 ");
       }
    } while ( n < 0);
    return n;
}

void ImprimirPromedio (char Productos [10][50], float Precio [10], float a, float b, float i,int j){
    float n = a / i;
    printf("El precio promedio del inventario es :%f", n);

}