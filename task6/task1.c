
#include <math.h> 

void f(const double* x, double* result)
{
    *result = sqrt((*x + 3) / (*x - 3));
}

