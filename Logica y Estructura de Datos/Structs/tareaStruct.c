#include <stdio.h>
#include <string.h>

// estructuras
typedef struct{
    char nombre[20];
}marca;

typedef struct{
    char nombre[20];
    marca marcaM;
}modelo;

typedef struct{
    int id;
    char color[1];
    int precio;
    marca marcaV;
    modelo modeloV;
}vehiculo;

// funciones



int main (){
    // carga automatica
    marca m1 ={"Chevrolet"};
    marca m2 ={"Fiat"};
    marca m3 ={"Citroen"};

    modelo mo1 ={"ONIX", m1};
    modelo mo2 ={"SPIN", m1};
    modelo mo3 ={"C4", m3};
    modelo mo4 ={"Cronos", m2};

    vehiculo v1 ={1, "R", 150000, m1, mo1};
    vehiculo v2 ={2, "A", 250000, m2, mo3};
    vehiculo v3 ={3, "R", 300000, m1, mo2};
    vehiculo v4 ={4, "G", 150000, m3, mo2};
    vehiculo v5 ={5, "N", 500000, m2, mo4};

    // salida

    printf("Vehiculo: %d\nColor: %s\nPrecio: %d\nMarca: %s\nModelo: %s\n\n", v1.id, v1.color, v1.precio, v1.marcaV.nombre, v1.modeloV.nombre);
    printf("Vehiculo: %d\nColor: %s\nPrecio: %d\nMarca: %s\nModelo: %s\n\n", v3.id, v3.color, v3.precio, v3.marcaV.nombre, v3.modeloV.nombre);
    printf("Vehiculo: %d\nColor: %s\nPrecio: %d\nMarca: %s\nModelo: %s\n\n", v5.id, v5.color, v5.precio, v5.marcaV.nombre, v5.modeloV.nombre);
    return 0;
}
