#include <stdio.h>

int main(void)
{
    struct persona
    {
        int legajo;
        int edad;
        char nombre [20];
        char apellido [50];
    };
    
    struct persona miembro_ieee1;
    struct persona miembro_ieee2 = {2, 30, "Jose", "PEREIRA"};

    printf ("Legajo: %d\nEdad:%d\nNombre:%s\nApellido:%s\n",
        miembro_ieee2.legajo,
        miembro_ieee2.edad,
        miembro_ieee2.nombre,
        miembro_ieee2.apellido    
    );
    return 0;
}
