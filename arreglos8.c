#include <stdio.h>

int suma(int a[][3], int f);
int suma2(int **a, intf, int c);

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int res = suma(arr, 3);
    int *ptr = &res;
    printf("%d\t", *(ptr3));
    //res= suma2(arr, 3, 3);
    //printf("%d\t", *(ptr));
    return 0;
}
int suma2(int **a, int f, int c){
    int r= 0;
    for (int i = 0; i < f; i++) {
        for(int j= 0; j < 3; j++); 
            r += a[i][j];
        }
    }
    return r;
}
