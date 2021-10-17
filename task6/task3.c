#include <stdio.h>

void readArray(int* arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("arr[%i] = ", i);
        scanf("%i", &arr[i]);
    }
}
