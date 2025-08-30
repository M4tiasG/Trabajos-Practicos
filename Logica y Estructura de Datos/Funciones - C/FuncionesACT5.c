#include <stdio.h>

float conversion(int a){
    return (a * 1.8) + 32;
}

int main(){
    int temp;

    printf("Ingrese la temperatura en Celsius: ");
    scanf ("%d", &temp);

    printf("La temperatura en Fahrenheit es: %.2f °F\n", conversion(temp));

    return 0;
}