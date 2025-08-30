#include <stdio.h>

int verificar(int a){
    if ((a%2==0) || (a%3==0) || (a%5==0) || (a%7==0)){
        return 0;
    }else {
        return 1;
    }
}

int main(){
    int num=0;

    printf("Ingrese un numero entero\n");
    
    if (scanf("%d", &num)!=0){
        printf("%d \n",verificar(num));
    }else {
        printf("Error, ingrese un numero entero\n");
    }
    return 0;
}