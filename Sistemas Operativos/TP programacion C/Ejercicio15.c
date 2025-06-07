#include <stdio.h>

int main(void)
{
    int valor = 1;
    
    while (valor<5)
    {
        printf ("El doble %d es %d\n", valor, valor * 2);
        valor++;
    }
    return 0;
}
