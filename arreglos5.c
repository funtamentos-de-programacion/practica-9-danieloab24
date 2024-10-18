#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    // (14) Declara un arreglo de tres apuntadores a entero
    int *arr[3];

    // (15) Asigna a cada apuntador la dirección de las variables a, b y c
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    // (16) Mostrar los valores usando los punteros
    printf("Valor de a: %d\n", *arr[0]);
    printf("Valor de b: %d\n", *arr[1]);
    printf("Valor de c: %d\n", *arr[2]);

    return 0;
}
