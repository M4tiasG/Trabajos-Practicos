#include <stdio.h>

void reset (int *a, int b)
{
    *a=0;
    b=0;
}

int main(void)
{
    int x=1;
    int y=1;

    reset (&x,y);
    printf ("%d %d\n", x, y);
    return 0;
}
