#include <stdio.h>
#include "funciones.h"

int main() {
    char productos[10][50];  // Arreglo para nombres de productos
    float precios[10];        // Arreglo para precios de productos

    // Ingresar datos
    ingresar_datos(productos, precios);

    // Mostrar información del inventario
    float totalInventario = calcular_precio_total(precios);
    printf("Precio total del inventario: %.2f\n", totalInventario);

    float max = encontrar_mas_caro(precios);
    float min = encontrar_mas_barato(precios);
    printf("Producto mas caro: %.2f\n", max);
    printf("Producto mas barato: %.2f\n", min);

    float promedio = calcular_promedio(precios);
    printf("Precio promedio: %.2f\n", promedio);

    // Bucle para buscar productos por nombre
    char opcion;
    do {
        buscar_producto(productos, precios);  // Llamada a la función de búsqueda
        printf("¿Desea buscar otro producto? (s/n): ");
        fflush(stdin);
        scanf(" %c", &opcion);  // Capturar opción para continuar o salir
    } while (opcion == 's' || opcion == 'S');  // Repite mientras la opción sea 's' o 'S'

    printf("Gracias por usar el sistema.\n");
    return 0;
}
