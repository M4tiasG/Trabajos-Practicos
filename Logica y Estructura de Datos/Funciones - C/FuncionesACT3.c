#include <stdio.h>

int sumar(int a, int b){
    return a + b;
}

int main(){
    int x, y;

    printf("ingrese el primer numero: ");
    scanf("%d", &x);
    printf("ingrese el segundo numero: ");
    scanf("%d", &y);

    printf("La suma es: %d\n",sumar(x,y));
    return 0;
}