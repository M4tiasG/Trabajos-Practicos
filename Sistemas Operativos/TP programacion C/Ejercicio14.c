#include <stdio.h>

int main(void)
{
    int a=0;

    printf("Ingrese un valor: ");
    scanf ("%d", &a);
    
    if (a%2)
    {
        printf ("el valor ingresado es impar.\n");
    }else{
        printf ("El valor ingresado es par.\n");
    }
    return 0;
}
