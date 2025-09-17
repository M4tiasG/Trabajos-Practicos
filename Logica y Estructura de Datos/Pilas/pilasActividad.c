#include <stdio.h>
#include <string.h>
#include <unistd.h> // Para usar sleep 
#define MAX 5

// Funciones
void push(int *tope, char pila[][30]){
    char nLibro[30];

    if (*tope>= MAX) {
        printf("ERROR: Pila llena\n");
    }else{
        printf("Ingrese un nombre: ");
        scanf("%29s", nLibro);
        (*tope)++;
        strcpy(pila[*tope], nLibro);
        printf("Libro apilado!!\n");
    }
}

void mostrar (int *tope, char pila[][30]){
    printf("Pila Actual:\n");
    for (int i = *tope; i >= 0; i--) {
        printf("%d- %s\n",i ,pila[i]);
    }
    printf("\n");
}

void pop(int *tope, char pila[][30]){
    char desapilado[30];
    if (*tope == -1) {
        printf("ERROR: Pila vacia\n");
    }else{
        printf("Se desapiló el libro: %s\n", pila[*tope]);
        strcpy(desapilado, pila[*tope]);
        (*tope)--;
    }
}

void estado(int *tope, char pila[][30]){
    if (*tope == -1) {
        printf("Pila vacia\n");
    }else {
        printf("La pila tiene %d elemento(s)\nCompruebe sus elementos con la opcion MOSTRAR\n", *tope+1);
    }
}


// Función main
int main(){
    char pila[MAX][30];
    int tope = -1;
    int opcion;

    do {
        printf("\n------MENU------\n");
        printf("1. Apilar\n");
        printf("2. Desapilar\n");
        printf("3. Mostrar\n");
        printf("4. Estado de la pila\n");
        printf("5. Salir\n");
        printf("INGRESE UNA OPCION: ");scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\n-- Apliar --\n");
                push(&tope, pila);
                sleep(1);
            break;
            case 2:
                printf("\n-- Desapilar --\n");
                pop(&tope, pila);
            break;
            case 3:
                printf("\n-- Mostrar --\n");
                mostrar(&tope, pila);
            break;
            case 4:
                printf("\n-- Estado de la pila --\n");
                estado(&tope, pila);
            break;
            case 5:
                printf("\nCerrando progama...\n");
                sleep(1);
            break;
            default:
                printf("\nERROR: Opcion incorrecta\n   INTENTE OTRA VEZ\n");
            break;
        }
    }while (opcion != 5);
    return 0;
}