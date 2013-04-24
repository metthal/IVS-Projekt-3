#ifndef ML_MATH_H
#define ML_MATH_H

enum Errors
{
    ML_MATH_OK                      = 0,
    ML_MATH_ERROR_DIV_BY_ZERO,
    ML_MATH_ERROR_INVALID_INPUT,
};

extern int ml_math_err;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double x, double a);
double root(double x, double a);
double sinus(double x);
double cosinus(double x);
double factorial(double n);
double _factorial(double n);

#endif