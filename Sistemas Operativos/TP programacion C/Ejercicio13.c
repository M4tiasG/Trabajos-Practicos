#include <stdio.h>

int main(void)
{
    char ca;
    printf ("Eliga una opcion\n\n");
    printf ("1 - Opcion 1\n");
    printf ("2 - Opcion 2\n");
    printf ("3 - Salir\n\n");

    ca=getchar();
    printf ("\n La opcion elegida es: ");
    putchar (ca);
    return 0;
}
