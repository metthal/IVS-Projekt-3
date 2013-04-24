#include "ml_math.h"
#include <math.h>

double add(double a, double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}

double multiply(double a, double b)
{
    return a*b;
}

double divide(double a, double b)
{
    return a/b;
}

double power(double x, double a)
{
    return pow(x,a);
}

double root(double x, double a)
{
    return pow(x,1/a);
}

double sinus(double x)
{
    return sin(x);
}

double cosinus(double x)
{
    return cos(x);
}

double factorial(double n)
{
    if (n <= 1)
        return 1.0;

    return n*factorial(n-1);
}