#include <stdio.h>

int main(void)
{
    int a;

    printf ("Ingrese el dia dia de la semana: ");
    scanf ("%d", &a);

    switch (a)
    {
    case 5: 
        printf ("Dia laboral.\n");
        break;
    case 7:
        printf ("Dia no laboral.\n");
        break;
    default:
        printf ("Error.\n");
        break;
    }
    return 0;
}
