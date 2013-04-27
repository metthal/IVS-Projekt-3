/**
 * @file ml_math.h
 * 
 * @brief Hlavickovy soubor matematicke knihovny
 * 
 * @author Marek Milkov, Lubica Gencurova
 *
 * @date 27.4.2013
 */

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

/**
 * @fn double ml_add(double a, double b)
 *
 * @brief Secte 2 hodnoty typu double
 * 
 * @param a Prvni scitanec - desetinne cislo
 *
 * @param b Druhy scitanec - desetinne cislo
 * 
 * @return Soucet dvou zadanych cisel
 */
double ml_add(double a, double b);

/**
 * @fn double ml_subtract(double a, double b)
 *
 * @brief Rozdil dvou hodnot typu double
 * 
 * @param a Prvni desetinne cislo
 *
 * @param b Druhe desetinne cislo
 * 
 * @return Rozdil hodnot dvou zadanych cisel
 */
double ml_subtract(double a, double b);

/**
 * @fn double ml_multiply(double a, double b)
 *
 * @brief Soucin dvou desetinnych cisel
 * 
 * @param a Prvni desetinne cislo
 *
 * @param b Druhe desetinne cislo
 * 
 * @return Soucin hodnot dvou zadanych cisel
 */
double ml_multiply(double a, double b);

/**
 * @fn double ml_divide(double a, double b)
 *
 * @brief Deleni jednoho desetinneho cisla druhym
 * 
 * @param a Delenec - desetinne cislo
 *
 * @param b Delitel - desetinne cislo
 * 
 * @return Hodnota vyrazu a/b; pro b==0 vrati 0.0
 */
double ml_divide(double a, double b);

/**
 * @fn double ml_power(double x, double a)
 *
 * @brief Mocnina s prirozenym exponentem
 * 
 * @param a Zaklad - desetinne cislo
 *
 * @param b Exponent - desetinne cislo
 * 
 * @return Hodnota vyrazu x^a. Pokud je jedna ze zadanych hodnot NAN nebo pro
 * zadany vyraz neexistuje reseni vraci NAN.
 */
double ml_power(double x, double a);

/**
 * @fn double ml_root(double x, double a)
 *
 * @brief Vypcet a-te odmocniny cisla x. Vypocet pomoci fce ml_power(x, 1.0/a)
 *
 * @see double ml_power(double x, double a)
 * 
 * @param x Zaklad - desetinne cislo
 *
 * @param n Udava, kolikata odmocnina cisla se ma vypocitat
 * 
 * @return a-ta odmocnina cisla x. Pokud neexistuje reseni, vraci NAN.
 *
 * @bug Neosetreno zadani zapornych cisel - vrati nespravny vysledek.
 *
 * @todo Pri zadani zaporneho cisla musi vratit NAN.
 */
double ml_root(double x, double a);

/**
 * @fn double ml_ln(double x)
 *
 * @brief Vypcet prirozeneho logaritmu cisla x
 * 
 * @param x zaklad - desetinne cislo
 * 
 * @return Prirozeny logaritmus cisla x, pokud existuje. Jinak NAN
 */
double ml_ln(double x);

/**
 * @fn double ml_exp(double x)
 *
 * @brief Exponencialni funkce e^x (e je Eulerovo cislo)
 * 
 * @param x Exponent - desetinne cislo
 * 
 * @return Hodnota vyrazu e^x, pokud ma reseni. Jinak NAN
 */
double ml_exp(double x);

/**
 * @fn double ml_factorial(double n)
 *
 * @brief Vypocet faktorialu cisla n
 * 
 * @param n Pro toto cislo bude faktorial pocitan
 * 
 * @return Pokud n=>0, n!. Jinak NAN.
 */
double ml_factorial(double n);


/**
 * @fn double ml_abs(double n)
 *
 * @brief Absolutni hodnota zadaneho cisla
 * 
 * @param n pro toto cislo bude vracena absolutni hodnota
 * 
 * @return Pokud je x cislelna hodnota |n|, jinak NAN
 */
double ml_abs(double n);

double _ml_power(double x, double a);
double _ml_factorial(double n);

double _ml_floor(double n);
double _ml_ceil(double n);

/**
 * @fn int _ml_isnan(double n)
 *
 * @brief  Test, zda-li je hodnota argumentu ciselna
 * 
 * @param x pro toto cislo bude vracena absolutni hodnota
 * 
 * @return Pokud x==NAN tak 1, jinak 0.
 */
int _ml_isnan(double n);

/**
 * @fn int _ml_isinf(double n)
 *
 * @brief Test, zda-li je hodnota argumentu INF, pripadne -INF
 * 
 * @param n promenna 
 * 
 * @return ???                                                              <<< TADY PROSIM DOPLNIT
 */
int _ml_isinf(double n);

#endif
