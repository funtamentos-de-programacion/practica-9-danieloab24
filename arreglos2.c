
//TODO: (4) Declara un apuntador que apunte al primer elemento del arreglo#include <stdio.h>
#include <stdio.h>
int main() {
    int arr[]= {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    //TODO: (5) Recorre el arreglo utilizando notación de punteros
    printf("[ ");
    for(int i =0; i < 5;i++)
        printf("%d", *(ptr + i));
    printf("]\n");

      return 0;
}
