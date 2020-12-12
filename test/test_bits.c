/*
 * Create test to bits.c 
 */

/*                */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
/*                */
#include "test.h"


unsigned int
test_cnt_bits(unsigned int n)
{
    unsigned int c=0;

    while (n){
        c++;
        n >>= 1;
    }
    if (c > 15 || c < 15){
        return 0;
    }
    else if (c == 15){
        return 1;
    }else
        return 0;
};


unsigned int 
test_test_bit(unsigned int n, unsigned int p)
{
    unsigned int *y, r=15;

    if ((test_cnt_bits(n)) && (test_range(p, r))){
        y = test_tobin(n);
        
        if (y[p] == 1){
            return true;
        }
        else if (y[p] == 0){
            return false;
        }
    }else
        return false;
};


unsigned int
test_range(unsigned int n, unsigned int r)
{
    if (n < 0 || n > r){
        return 0;
    }
    else if (n >= 0 || n <= r){
        return 1;
    }
};


unsigned int 
*test_tobin(unsigned int n)
{
    int i=0, c, k;
    static unsigned int x[16];

    if (test_cnt_bits(n)){
        
        for (c=15; c >= 0; c--){
             
            k = n >> c;
            x[i] = k & 1;
            i++;
        }
        return x;
    }else
        return 0;
};


void 
test_main_bits(void){

    unsigned int *p, n0=32767, n1=65, p0=6, p1=4, p2=0, r0=15;

    fputs("-------TEST TO CNT_BITS-------\n\n", stdout);

    if (test_cnt_bits(n0)){
        printf(is_16bit, n0);
    }
    if (!(test_cnt_bits(n1))){
        printf(is_n16bit, n1);
    }

    fputs("\n-------TEST TO TEST_BIT-------\n\n", stdout);

    if (test_test_bit(n0, p1)){
        printf(is_one, n0, p1);
    }
    if (!(test_test_bit(n0, n1))){
        printf(larger_or_outside, n0, n1);
    }
    if (!(test_test_bit(n0, p2))){
        printf(is_zero, n0, p2);
    }

    fputs("\n-------TEST TO RANGE-------\n\n", stdout);

    if (!(test_range(n1, r0))){
        printf(is_nrange, n1);
    }
    if (test_range(p0, r0)){
        printf(is_range, p0);
    }

    fputs("\n-------TEST TO TOBIN--------\n\n", stdout);

    if (!(test_tobin(n1))){
        printf(is_n16bit, n1);
    }
    printf(tobin, n0);
    if (p = test_tobin(n0)){

        for (int i=0; i < 16; i++){
            printf("%d", p[i]);
        }
    }
    fputs("\n\n-------END-------\n", stdout);
};
