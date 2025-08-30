#include <stdio.h>

int maximo(int a[], int l){
    if (l <= 0) { // comprbar si el vector tiene elementos, sino devuelve 0
        return 0;
    }

    int i;
    int max = a[0]; // Inicializa 'max' con el primer elemento del arreglo.

    for (i = 1; i < l; i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }
    return max;
}

int main(){
    int vec[]={3, 5, 7, 9, 5, 10, 11};
    //Sacar la longitud del vector automaticamente
    int longTotal = sizeof(vec) / sizeof(vec[0]);

    printf("El numero mas grande es: %d\n", maximo(vec, longTotal));
    return 0;
}