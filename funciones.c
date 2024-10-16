#include <stdio.h>
#include <string.h>  // Para la función strcasecmp
#include "funciones.h"

void ingresar_datos(char productos[10][50], float precios[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        fflush(stdin);
        fgets(productos[i], 50, stdin);
        /*productos[i][strcspn(productos[i], "\n")] = '\0';  // Elimina el salto de línea*/

        do {
            printf("Ingrese el precio del producto %d: ", i + 1);
            scanf("%f", &precios[i]);
            if (precios[i] < 0) {
                printf("Error: El precio no puede ser negativo. Inténtelo de nuevo.\n");
            }
        } while (precios[i] < 0);
    }
}

float calcular_precio_total(float precios[10]) {
    float total = 0;
    for (int i = 0; i < 10; i++) {
        total += precios[i];
    }
    return total;
}

float encontrar_mas_caro(float precios[10]) {
    float max = precios[0];
    for (int i = 1; i < 10; i++) {
        if (precios[i] > max) {
            max = precios[i];
        }
    }
    return max;
}

float encontrar_mas_barato(float precios[10]) {
    float min = precios[0];
    for (int i = 1; i < 10; i++) {
        if (precios[i] < min) {
            min = precios[i];
        }
    }
    return min;
}

float calcular_promedio(float precios[10]) {
    return calcular_precio_total(precios) / 10;
}

void buscar_producto(char productos[10][50], float precios[10]) {
    char nombre[50];
    printf("Ingrese el nombre del producto que desea buscar: ");
    fflush(stdin);
    fgets(nombre, 50, stdin);
    /*nombre[strcspn(nombre, "\n")] = '\0';  // Elimina el salto de línea*/

    for (int i = 0; i < 10; i++) {
        if (strcasecmp(productos[i], nombre) == 0) {
            printf("El precio del producto '%s' es: %.2f\n", productos[i], precios[i]);
            return;
        }
    }
    printf("Producto no encontrado.\n");
}