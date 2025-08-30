// calculadora con funciones
#include <stdio.h>

float sumar(float a, float b){
    return a+b;
}

float restar(float a, float b){
    return a-b;
}

float multiplicar(float a, float b){
    return a*b;
}

float dividir(float a, float b){
    return a/b;
}

// carga de numeros
void carga(float *a, float *b){
    printf("Ingrese el primer numero: ");
    scanf("%f", a );

    printf("Ingrese el segundo numero: ");
    scanf("%f", b );
}


int main(){
    float n1, n2;
    int op;

    printf("Calculadora\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Ingrese una opcion: ");

    if (scanf("%d", &op)==1 ) {
        switch (op) {
            case 1:
                carga(&n1, &n2);
                printf("La suma es: %.2f\n", sumar(n1,n2));
            break;
            case 2:
                carga(&n1, &n2);
                printf("La resta es: %.2f\n", restar(n1,n2));
            break;
            case 3:
                carga(&n1, &n2);
                printf("La multiplicacion es: %.2f\n", multiplicar(n1,n2));
            break;
            case 4:
                carga(&n1, &n2);
                if (n2==0) {
                    printf("No se puede dividir por 0\n");
                }else {
                    printf("La division es: %.2f\n", dividir(n1,n2));
                }
            break;
            default:
                printf("Opcion invalida\n");
            break;
        }
    }
    return 0;
}