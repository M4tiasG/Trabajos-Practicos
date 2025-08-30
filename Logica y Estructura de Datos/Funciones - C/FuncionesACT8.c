// programa que reciba una cadena de caracteres y cuante cuantos caracteres tiene
#include <stdio.h>
#include <string.h>

int calculo(char a[]){
    int longi=0;
    longi=strlen(a)-1;
    return longi;
}

int main (){
    char cad[100];

    printf("Ingrese una cadena de caracteres \n");
    fgets(cad, 100, stdin);

    calculo(cad);

    printf("La cadena tiene %d caracteres\n", calculo(cad));
    return 0;
}