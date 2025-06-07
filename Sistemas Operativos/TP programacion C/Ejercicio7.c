#include <stdio.h>

void mostrarmensaje() {
    int numero = 5; // variable local
    printf ("El numero local dentro de la funcion es: %d\n", numero);
}

int main()
{
    mostrarmensaje(); // llama a la funcion que usa su propia variable local
    return 0;
}
