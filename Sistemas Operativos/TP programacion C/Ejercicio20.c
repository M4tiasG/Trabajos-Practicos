#include <stdio.h>

int main(void)
{
    int i, vector[10];

    for (i = 0; i < 10; i++)
    {
        vector[i]= i;
        printf ("%d\n", vector[i]);
    }
    return 0;
}
