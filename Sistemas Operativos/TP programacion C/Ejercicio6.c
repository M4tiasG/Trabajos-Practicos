#include <stdio.h>

int numero = 10; // variable global

void mostrarnumero() {
    printf ("El numero es: %d\n", numero);
}

int main()
{
    mostrarnumero();
    return 0;
}
