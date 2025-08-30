#include <stdio.h>

int mayor(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int a,b,c;
    printf("Ingrese 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("El numero mas grande es: %d \n", mayor(a,b,c));
    return 0;
}