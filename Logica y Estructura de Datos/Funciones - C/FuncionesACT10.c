#include <stdio.h>

void tabla(int a){
    int i;
    for (i=0;i<=10;i++){
        printf("%d x %d = %d\n", a, i, a*i);
    }
}

int main(){
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    tabla(num);
    return 0;
}