#include <stdio.h>

void cambiar (int n){
    n=10;
}

int main()
{
    
    int x;
    x=5;
    cambiar (x);
    printf ("%d\n", x);
    return 0;
}
