#include <stdio.h>
#include <math.h> 
#include <conio.h> 
#include <stdlib.h> 
#include "func.h"

int main(void)
{
    _Bool b = 1;
    while (b == 1)
    {
        printf("Menu:\n");
        printf("1. Task 1\n");
        printf("5. Task 5\n");
        printf("6. Exit \n");
        printf("Select Task number: ");
        switch (_getch())
        {
        case '1':
        {
            printf("Task 1:\n ");
            double x, result;
            printf("x = ");
            scanf("%lf", &x);
            f(&x, &result);
            printf("f = %.4lf\n\n", result);
            break;
        }
        case '5':
        {
            printf("Task 5:\n ");
            int n;
            int arr[n];
            sortStackArray(arr, n);
            break;
        }
        case '6':
        {
            b = 0;
            break;
        }
        }
    }
    system("pause");
    return 0;
}
