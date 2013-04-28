#include "ml_math_test.h"

#include "ml_math.h"
#include <math.h>

//

int ml_error=0;
int ml_pass=0;
int main()
{   
    //* ml_add */
    //* test 1 */
    TEST_SHOULD_EQ_FLT("ml_add:1", 5.0+5.0 , ml_add(5.0,5.0));
    TEST_SHOULD_EQ_INT("ml_add:1_return", ML_MATH_OK, ml_math_err);
    //* test 2 */
    TEST_SHOULD_EQ_FLT("ml_add:2", 9856.0+3652.0, ml_add(9856.0,3652.0));
    TEST_SHOULD_EQ_INT("ml_add:2_return", ML_MATH_OK, ml_math_err);
    //* test 3 */
    TEST_SHOULD_EQ_FLT("ml_add:3", 9.8+3.1, ml_add(9.8,3.1));
    TEST_SHOULD_EQ_INT("ml_add:3_return", ML_MATH_OK, ml_math_err);
    //* test 4 */
    TEST_SHOULD_EQ_FLT("ml_add:4", 99.658974+16.263, ml_add(99.658974,16.263));
    TEST_SHOULD_EQ_INT("ml_add:4_return", ML_MATH_OK, ml_math_err);
    
    //* ml_subtract */
    //* test 5 */
    TEST_SHOULD_EQ_FLT("ml_subtract:5", 25.0-10.0, ml_subtract(25.0,10.0));
    TEST_SHOULD_EQ_INT("ml_subtract:5_return", ML_MATH_OK, ml_math_err);
    //* test 6 */
    TEST_SHOULD_EQ_FLT("ml_subtract:6", 2565.0-742.0, ml_subtract(2565.0,742.0));
    TEST_SHOULD_EQ_INT("ml_subtract:6_return", ML_MATH_OK, ml_math_err);
    //* test 7 */
    TEST_SHOULD_EQ_FLT("ml_subtract:7", 256.12357-128.66845, ml_subtract(256.12357,128.66845));
    TEST_SHOULD_EQ_INT("ml_subtract:7_return", ML_MATH_OK, ml_math_err);
    //* test 8 */
    TEST_SHOULD_EQ_FLT("ml_subtract:8", 2.36589745-0.12354897, ml_subtract(2.36589745,0.12354897));
    TEST_SHOULD_EQ_INT("ml_subtract:8_return", ML_MATH_OK, ml_math_err);
    
    //* ml_multiply */
    //* test 9 */
    TEST_SHOULD_EQ_FLT("ml_multiply:9", 5.0*8.0, ml_multiply(5.0,8.0));
    TEST_SHOULD_EQ_INT("ml_multiply:9_return", ML_MATH_OK, ml_math_err);
    //* test 10 */
    TEST_SHOULD_EQ_FLT("ml_multiply:10", 56.0*12.0, ml_multiply(56.0,12.0));
    TEST_SHOULD_EQ_INT("ml_multiply:10_return", ML_MATH_OK, ml_math_err);
    //* test 11 */
    TEST_SHOULD_EQ_FLT("ml_multiply:11", 8.6*11.9, ml_multiply(8.6,11.9));
    TEST_SHOULD_EQ_INT("ml_multiply:11_return", ML_MATH_OK, ml_math_err);
    //* test 12 */
    TEST_SHOULD_EQ_FLT("ml_multiply:12", 36.56*4.123, ml_multiply(36.56,4.123));
    TEST_SHOULD_EQ_INT("ml_multiply:12_return", ML_MATH_OK, ml_math_err);
    
    //* ml_divide */
    //* test 13 */
    TEST_SHOULD_EQ_FLT("ml_divide:13", 8.0/4.0, ml_divide(8.0,4.0));
    TEST_SHOULD_EQ_INT("ml_divide:13_return", ML_MATH_OK, ml_math_err);
    //* test 14 */
    TEST_SHOULD_EQ_FLT("ml_divide:14", 64.0/28.0, ml_divide(64.0,28.0));
    TEST_SHOULD_EQ_INT("ml_divide:14_return", ML_MATH_OK, ml_math_err);
    //* test 15 */
    TEST_SHOULD_EQ_FLT("ml_divide:15", 96.2/16.5, ml_divide(96.2,16.5));
    TEST_SHOULD_EQ_INT("ml_divide:15_return", ML_MATH_OK, ml_math_err);
    //* test 16 */
    TEST_SHOULD_EQ_FLT("ml_divide:16", 45.136/8.951, ml_divide(45.136,8.951));
    TEST_SHOULD_EQ_INT("ml_divide:16_return", ML_MATH_OK, ml_math_err);
    
    //* ml_power */
    //* test 17 */
    TEST_SHOULD_EQ_FLT("ml_power:17", pow(2.0,3.0), ml_power(2.0,3.0));
    TEST_SHOULD_EQ_INT("ml_power:17_return", ML_MATH_OK, ml_math_err);
    //* test 18 */
    TEST_SHOULD_EQ_FLT("ml_power:18", pow(64.0,8.0), ml_power(64.0,8.0));
    TEST_SHOULD_EQ_INT("ml_power:18_return", ML_MATH_OK, ml_math_err);
    //* test 19 */
    TEST_SHOULD_EQ_FLT("ml_power:19", pow(59.6545,15.25), ml_power(59.6545,15.25));
    TEST_SHOULD_EQ_INT("ml_power:19_return", ML_MATH_OK, ml_math_err);
    //* test 20 */
    TEST_SHOULD_EQ_FLT("ml_power:20", pow(78.65478,9.32654), ml_power(78.65478,9.32654));
    TEST_SHOULD_EQ_INT("ml_power:20_return", ML_MATH_OK, ml_math_err);
    
    //* ml_root */
    //* test 21 */
    TEST_SHOULD_EQ_FLT("ml_root:21", pow(16.0,1/2.0), ml_root(16.0,2.0));
    TEST_SHOULD_EQ_INT("ml_root:21_return", ML_MATH_OK, ml_math_err);
    //* test 22 */
    TEST_SHOULD_EQ_FLT("ml_root:22", pow(235.0,1/5.0), ml_root(235.0,5.0));
    TEST_SHOULD_EQ_INT("ml_root:22_return", ML_MATH_OK, ml_math_err);
    //* test 23 */
    TEST_SHOULD_EQ_FLT("ml_root:23", pow(23.65,1/9.12), ml_root(23.65,9.12));
    TEST_SHOULD_EQ_INT("ml_root:23_return", ML_MATH_OK, ml_math_err);
    //* test 24 */
    TEST_SHOULD_EQ_FLT("ml_root:24", pow(956.161,1/23.32), ml_root(956.161,23.32));
    TEST_SHOULD_EQ_INT("ml_root:24_return", ML_MATH_OK, ml_math_err);
    
    //* ml_ln */
    //* test 25 */
    TEST_SHOULD_EQ_FLT("ml_ln:25", log(25.0), ml_ln(25.0));
    TEST_SHOULD_EQ_INT("ml_ln:25_return", ML_MATH_OK, ml_math_err);
    //* test 26 */
    TEST_SHOULD_EQ_FLT("ml_ln:26", log(2065.0), ml_ln(2065.0));
    TEST_SHOULD_EQ_INT("ml_ln:26_return", ML_MATH_OK, ml_math_err);
    //* test 27 */
    TEST_SHOULD_EQ_FLT("ml_ln:27", log(16.654), ml_ln(16.654));
    TEST_SHOULD_EQ_INT("ml_ln:27_return", ML_MATH_OK, ml_math_err);
    //* test 28 */
    TEST_SHOULD_EQ_FLT("ml_ln:28", log(41235.2315), ml_ln(41235.2315));
    TEST_SHOULD_EQ_INT("ml_ln:28_return", ML_MATH_OK, ml_math_err);
    
    //* ml_exp */
    //* test 29 */
    TEST_SHOULD_EQ_FLT("ml_exp:29", exp(2.0), ml_exp(2.0));
    TEST_SHOULD_EQ_INT("ml_exp:29_return", ML_MATH_OK, ml_math_err);
    //* test 30 */
    TEST_SHOULD_EQ_FLT("ml_exp:30", exp(0.2), ml_exp(0.2));
    TEST_SHOULD_EQ_INT("ml_exp:30_return", ML_MATH_OK, ml_math_err);
    //* test 31 */
    TEST_SHOULD_EQ_FLT("ml_exp:31", exp(45.964), ml_exp(45.964));
    TEST_SHOULD_EQ_INT("ml_exp:31_return", ML_MATH_OK, ml_math_err);
    //* test 32 */
    TEST_SHOULD_EQ_FLT("ml_exp:32", exp(23.843), ml_exp(23.843));
    TEST_SHOULD_EQ_INT("ml_exp:32_return", ML_MATH_OK, ml_math_err);
    
    //* ml_factorial */
    //* test 33 */
    TEST_SHOULD_EQ_FLT("ml_factorial:33", 1.0, ml_factorial(1.0));
    TEST_SHOULD_EQ_INT("ml_factorial:33_return", ML_MATH_OK, ml_math_err);
    //* test 34 */
    TEST_SHOULD_EQ_FLT("ml_factorial:34", 120.0, ml_factorial(5.0));
    TEST_SHOULD_EQ_INT("ml_factorial:34_return", ML_MATH_OK, ml_math_err);
    //* test 35 */
    TEST_SHOULD_EQ_FLT("ml_factorial:35", 39916800.0, ml_factorial(11.0));
    TEST_SHOULD_EQ_INT("ml_factorial:35_return", ML_MATH_OK, ml_math_err);
    //* test 36 */
    TEST_SHOULD_EQ_FLT("ml_factorial:36", NAN, ml_factorial(9.65));
    TEST_SHOULD_EQ_INT("ml_factorial:36_return", ML_MATH_OK, ml_math_err);
    
    //* ml_abs */
    //* test 37 */
    TEST_SHOULD_EQ_FLT("ml_abs:37", fabs(23.0), ml_abs(23.0));
    TEST_SHOULD_EQ_INT("ml_abs:37_return", ML_MATH_OK, ml_math_err);
    //* test 38 */
    TEST_SHOULD_EQ_FLT("ml_abs:38", fabs(-3567.0), ml_abs(-3567.0));
    TEST_SHOULD_EQ_INT("ml_abs:38_return", ML_MATH_OK, ml_math_err);
    //* test 39 */
    TEST_SHOULD_EQ_FLT("ml_abs:39", fabs(-964.23675), ml_abs(-964.23675));
    TEST_SHOULD_EQ_INT("ml_abs:39_return", ML_MATH_OK, ml_math_err);
    //* test 40 */
    TEST_SHOULD_EQ_FLT("ml_abs:40", fabs(65897.542), ml_abs(65897.542));
    TEST_SHOULD_EQ_INT("ml_abs:40_return", ML_MATH_OK, ml_math_err);
    
    //* _ml_floor */
    //* test 41 */
    TEST_SHOULD_EQ_FLT("ml_floor:41", floor(32.65), _ml_floor(32.65));
    TEST_SHOULD_EQ_INT("ml_floor:41_return", ML_MATH_OK, ml_math_err);
    //* test 42 */
    TEST_SHOULD_EQ_FLT("ml_floor:42", floor(-987.325), _ml_floor(-987.325));
    TEST_SHOULD_EQ_INT("ml_floor:42_return", ML_MATH_OK, ml_math_err);
    //* _ml_ceil */
    //* test 43 */
    TEST_SHOULD_EQ_FLT("ml_ceil:43", ceil(16.65), _ml_ceil(16.65));
    TEST_SHOULD_EQ_INT("ml_ceil:43_return", ML_MATH_OK, ml_math_err);
    //* test 44 */
    TEST_SHOULD_EQ_FLT("ml_ceil:44", ceil(-28.98), _ml_ceil(-28.98));
    TEST_SHOULD_EQ_INT("ml_ceil:44_return", ML_MATH_OK, ml_math_err);
    
    //* _ml_isnan */
    //* test 45 */
    TEST_SHOULD_EQ_INT("ml_isnan:45", 1, _ml_isnan(0.0/0.0));
    TEST_SHOULD_EQ_INT("ml_isnan:45_return", ML_MATH_OK, ml_math_err);
    //* test 46 */
    TEST_SHOULD_EQ_INT("ml_isnan:46", 1, _ml_isnan(NAN));
    TEST_SHOULD_EQ_INT("ml_isnan:46_return", ML_MATH_OK, ml_math_err);
    
    //* _ml_isinf */
    //* test 47 */
    TEST_SHOULD_EQ_INT("ml_isinf:47", 1, _ml_isinf(INFINITY));
    TEST_SHOULD_EQ_INT("ml_isinf:47_return", ML_MATH_OK, ml_math_err);
    //* test 48 */
    TEST_SHOULD_EQ_INT("ml_isinf:48", 1, _ml_isinf(1.0/0.0));
    TEST_SHOULD_EQ_INT("ml_isinf:48_return", ML_MATH_OK, ml_math_err);

    //* ml_round */
    //* test 49 */
    TEST_SHOULD_EQ_FLT("ml_round:49", 17.0, ml_round(17.2));
    TEST_SHOULD_EQ_INT("ml_round:49_return", ML_MATH_OK, ml_math_err);
    //* test 50 */
    TEST_SHOULD_EQ_FLT("ml_round:50", 23.0, ml_round(22.8));
    TEST_SHOULD_EQ_INT("ml_round:50_return", ML_MATH_OK, ml_math_err);
    //* test 51 */
    TEST_SHOULD_EQ_FLT("ml_round:51", -17.0, ml_round(-17.2));
    TEST_SHOULD_EQ_INT("ml_round:51_return", ML_MATH_OK, ml_math_err);
    //* test 52 */
    TEST_SHOULD_EQ_FLT("ml_round:52", -23.0, ml_round(-22.8));
    TEST_SHOULD_EQ_INT("ml_round:52_return", ML_MATH_OK, ml_math_err);

    //* result */
    printf("\n***\n");
    printf("%d tests passed, %d tests failed.\n", ml_pass, ml_error);
    printf("***\n");
    return 0;
}
