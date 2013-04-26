#include "ml_math.h"
#include <float.h>
#include <math.h>

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
    int mod = 1;

    if (_ml_isnan(x)) // ak je cislo NAN, mozme rovno vratit NAN
    {
        ml_math_err = ML_MATH_ERROR_INVALID_INPUT;
        return x;
    }
    else if (_ml_isinf(x)) // ak je cislo INFINITY
    {
        if (a == 0)     // INFINITY^0 = 1
        {
            ml_math_err = ML_MATH_OK;
            return 1.0;
        }
        else if (a < 0) // INFINITY na zaporny exponent je 0
        {
            ml_math_err = ML_MATH_OK;
            return 0.0;
        }
    }
    else if (x < 0)
    {
        // ak zaporne cislo mocnime na parny exponent, tak vznika cislo kladne
        // toto treba pridat
    }
    else if (x == 0)
    {
        if (a > 0.0)      // 0^a = 0 kde a > 0
        {
            ml_math_err = ML_MATH_OK;
            return 0.0;
        }
        else if (a < 0.0) // 0^a = NAN kde a < 0
        {
            ml_math_err = ML_MATH_ERROR_INVALID_INPUT;
            return NAN;
        }
        else            // 0^0 = 1
        {
            ml_math_err = ML_MATH_OK;
            return 1.0;
        }
    }

    ml_math_err = ML_MATH_OK;
    return ml_exp(a * ml_ln(x)) * mod;
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
    return ml_power(x, 1.0/a);
}

double ml_ln(double x)
{
    ml_math_err = ML_MATH_ERROR_INVALID_INPUT;

    if (_ml_isinf(x) || _ml_isnan(x))
        return x;

    if (x == 0) // ln(0) je nedefinovane a vraciame -INFINITY
        return -INFINITY;
    else if (x == 1)
    {
        ml_math_err = ML_MATH_OK;
        return 0.0; // ln(1) je 0
    }

    ml_math_err = ML_MATH_OK;

    int mod = 0;
    if (ml_abs(x) >= 1.9)
    {
        while (ml_abs(x) >= 1.9)  // ln(x) = ln(x/e^k) + k
        {
            x /= ML_E;
            mod++;
        }
    }
    else
    {
        while (ml_abs(x) <= 0.1)  // ln(x) == ln(x*e^k) - k
        {
            x *= ML_E;
            mod--;
        }
    }

    x -= 1; // pretoze toto je rad pre ln(1+x)

    double sum = x;
    double aktual = x;
    unsigned int n = 2;

    while (ml_abs(aktual) > ml_abs(ML_EPS * sum))
    {
        aktual *= -x*(n-1)/n;
        sum += aktual;
        n++;
    }

    return sum + mod;
}

double ml_exp(double x)
{
    if (_ml_isinf(x) || _ml_isnan(x))
    {
        ml_math_err = ML_MATH_ERROR_INVALID_INPUT;
        return x;
    }

    ml_math_err = ML_MATH_OK;
    unsigned int mod = 0;
    double p_x = x;

    // a^(b*c) = a^b^c
    while (ml_abs(p_x) > 1.0 && mod < ML_INT_BITS-1)
    {
        mod++;
        p_x /= 2.0;
    }

    mod = 1 << mod;
    x = p_x;

    double sum = 1;
    double aktual = 1;
    unsigned int n = 1;

    while (ml_abs(aktual) > ml_abs(ML_EPS * sum))
    {
        aktual *= x/n;
        sum += aktual;
        n++;
    }

    return _ml_power(sum, mod);
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

    return n * _ml_factorial(n - 1);
}

double ml_abs(double n)
{
    return n < 0.0 ? -n : n;
}

int _ml_isnan(double n)
{
    return n != n;
}

int _ml_isinf(double n)
{
    return !_ml_isnan(n) && _ml_isnan(n - n);
}
