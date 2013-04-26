#include "ml_math.h"

int ml_math_err;

double ml_add(double a, double b)
{
    ml_math_err = ML_MATH_OK;
    return a+b;
}

double ml_subtract(double a, double b)
{
    ml_math_err = ML_MATH_OK;
    return a-b;
}

double ml_multiply(double a, double b)
{
    ml_math_err = ML_MATH_OK;
    return a*b;
}

double ml_divide(double a, double b)
{
    if (b == 0.0)
    {
        ml_math_err = ML_MATH_ERROR_DIV_BY_ZERO;
        return 0.0;
    }

    ml_math_err = ML_MATH_OK;
    return a/b;
}

double ml_power(double x, double a)
{
    ml_math_err = ML_MATH_OK;
    return pow(x,a);
}

double _ml_power(double x, double a)
{
    double old_x = x;
    x = ml_abs(x);

    double n = 1;
    for (int i = 0; i < a; ++i)
        n *= x;

    if (old_x != x)
        return 1.0/n;

    return n;
}

double ml_root(double x, double a)
{
    ml_math_err = ML_MATH_OK;
    return pow(x,1/a);
}

double ml_ln(double x)
{
    ml_math_err = ML_MATH_OK;
    return log(x);
}

double ml_exp(double x)
{
    ml_math_err = ML_MATH_OK;
    return exp(x);
}

double ml_factorial(double n)
{
    if (n < 0)
    {
        ml_math_err = ML_MATH_ERROR_INVALID_INPUT;
        return 0.0;
    }

    ml_math_err = ML_MATH_OK;
    return _ml_factorial(n);
}

double _ml_factorial(double n)
{
    if (n <= 1.0)
        return 1.0;

    return n*ml_factorial(n-1);
}

double ml_abs(double n)
{
    return n < 0.0 ? -n : n;
}
