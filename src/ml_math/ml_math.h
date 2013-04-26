#ifndef ML_MATH_H
#define ML_MATH_H

#include <limits.h>

enum Errors
{
    ML_MATH_OK                      = 0,
    ML_MATH_ERROR_DIV_BY_ZERO,
    ML_MATH_ERROR_INVALID_INPUT,
};

const double    ML_E                = 2.7182818284590452354;
const int       ML_INT_BITS         = sizeof(int) * CHAR_BIT;
const double    ML_EPS              = 1e-15;

extern int ml_math_err;

double ml_add(double a, double b);
double ml_subtract(double a, double b);
double ml_multiply(double a, double b);
double ml_divide(double a, double b);
double ml_power(double x, double a);
double ml_root(double x, double a);
double ml_ln(double x);
double ml_exp(double x);
double ml_factorial(double n);
double ml_abs(double n);

double _ml_power(double x, double a);
double _ml_factorial(double n);

double _ml_floor(double n);
double _ml_ceil(double n);

int _ml_isnan(double n);
int _ml_isinf(double n);

#endif
