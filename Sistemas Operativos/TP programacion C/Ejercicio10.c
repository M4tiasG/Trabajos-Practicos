#include <stdio.h>

int cuadrado(int v){
    return (v*v);
}

int main(void)
{
    int x=3;
    int y=0;

    y=cuadrado(x);
    printf ("%d", y);
    return 0;
}

