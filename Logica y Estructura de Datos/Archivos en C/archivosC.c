#include <stdio.h>
#include <string.h>

// Estructuras
typedef struct{
    char nombre[20];
    int edad;
}datos;


// Funciones
void escritura(const datos *d1); // declara la funcion escritura

void carga(){
    char nom[20];
    int edad;
    
    datos d1;
    
    printf("Ingrese su nombre: \n");
    scanf("%19s", nom);
    strcpy(d1.nombre, nom);
    
    printf("Ingrese su edad: \n");
    scanf("%d", &d1.edad);
    escritura(&d1);
}

void escritura(const datos *d1){
    FILE *archivo;
    archivo = fopen("personas.txt", "a");
    
    if (archivo == NULL) {
        printf("ERROR, no se pudo crear al archivo.\n");
    }else {
        fprintf(archivo, "Nombre: %s\n", d1->nombre);
        fprintf(archivo, "Edad: %d\n\n", d1->edad);
    }
    fclose(archivo);
    printf("Los datos se han agregado correctamente.\n\n");
}

void lectura(){
    char leer [200];
    FILE *archivo;
    archivo = fopen("personas.txt", "r");

    if (archivo == NULL) {
        printf("ERROR, no se pudo abrir el archivo.\n");
    }else {
        printf("Lista de datos ingresados al momento:\n");

        while (fgets(leer, sizeof(leer), archivo)){
            printf("%s", leer);
        }
    }
    fclose(archivo);
}

// Funcion main
int main(){   
    carga();
    lectura();
    return 0;
}