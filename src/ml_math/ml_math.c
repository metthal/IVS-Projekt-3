#include "ml_math.h"
#include <math.h>

int ml_math_err;

double add(double a, double b)
{
    ml_math_err = ML_MATH_OK;
    return a+b;
}

double subtract(double a, double b)
{
    ml_math_err = ML_MATH_OK;
    return a-b;
}

double multiply(double a, double b)
{
    ml_math_err = ML_MATH_OK;
    return a*b;
}

double divide(double a, double b)
{
    if (b == 0.0)
    {
        ml_math_err = ML_MATH_ERROR_DIV_BY_ZERO;
        return 0.0;
    }

    ml_math_err = ML_MATH_OK;
    return a/b;
}

double power(double x, double a)
{
    ml_math_err = ML_MATH_OK;
    return pow(x,a);
}

double root(double x, double a)
{
    ml_math_err = ML_MATH_OK;
    return pow(x,1/a);
}

double sinus(double x)
{
    ml_math_err = ML_MATH_OK;
    return sin(x);
}

double cosinus(double x)
{
    ml_math_err = ML_MATH_OK;
    return cos(x);
}

double factorial(double n)
{
    if (n < 0)
    {
        ml_math_err = ML_MATH_ERROR_INVALID_INPUT;
        return 0.0;
    }

    ml_math_err = ML_MATH_OK;
    return _factorial(n);
}

double _factorial(double n)
{
    if (n <= 1.0)
        return 1.0;

    return n*factorial(n-1);
}