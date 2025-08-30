// No funciona aun
#include <stdio.h>

int sumaElementos(int a[], int b){
    int i;
    int acu=0;
    for (i=0; i<b; i++) {
        acu+=a[i];
        printf("%d\n", acu);
    }
    return acu;
}

int main(){
    int vec[]={2,3,1,7,4,6,4,1};
    
    //Sacar la longitud del vector automaticamente
    int longTotal = sizeof(vec) / sizeof(vec[0]);
    printf("long: %d\n", longTotal);

    printf("La suma de los elementos es: %d\n", sumaElementos(vec,longTotal));
    return 0;
}
