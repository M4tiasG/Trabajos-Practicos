#include <stdio.h>


int busqueda(int a[], int nComp, int l){
    int i;
    int posicion=-1;

    for (i=0; i<=l; i++){
        if (a[i]==nComp) {
            posicion=i+1;
        }
    }
    return posicion;
}

int main(){
    int vec[]={2,3,7,6,4,1};
    int num=0, pos=0;

    //Sacar la longitud del vector automaticamente
    int longTotal = (sizeof(vec) / sizeof(vec[0]));
    
    printf("Ingrese el numero que quiere buscar: ");
    scanf("%d", &num); 

    pos= busqueda(vec, num, longTotal);

    if (pos!=-1){
        printf("El numero %d se encuentra en la posicion %d\n", num, pos);
    }else {
        printf("-1\n");
    }

    return 0;
}