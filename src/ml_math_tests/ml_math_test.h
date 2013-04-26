#ifndef ML_MATH_TEST_H
#define ML_MATH_TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

const double EPS = 1e-14;

#define TEST_SHOULD_EQ_INT(name, val1, val2)    \
    {                                           \
        if (val1 != val2)                       \
        {                                       \
            printf("Test \"%s\" with values (%d, %d) failed! (Line: %d)\n", name, val1, val2, __LINE__); \
            exit(1);                            \
        }                                       \
    }

#define TEST_SHOULD_EQ_FLT(name, val1, val2)    \
    {                                           \
        if (ml_abs(val1 - val2) >= EPS)         \
        {                                       \
            printf("Test \"%s\" with values (%.15f, %.15f) failed! (Line: %d)\n", name, val1, val2, __LINE__); \
            exit(1);                            \
        }                                       \
    }

#endif