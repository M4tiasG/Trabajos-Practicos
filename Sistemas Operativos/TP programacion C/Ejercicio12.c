#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Ingrese numero: ");
    scanf("%d", &x);
    printf ("Ingrese otro numero: ");
    scanf("%d", &y);

    printf ("La division entre los valores es: %.2f\n", (float) x/y);
    return 0;
}
