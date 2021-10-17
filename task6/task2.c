#include <stdio.h>

void writeArray(int* arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%i\t", *(arr + i));
    }
    printf("\n");
}
