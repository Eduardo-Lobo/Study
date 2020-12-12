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
    unsigned int c=0, r=15;

    if (test_range(n, r))
    {
        while (n){
            c++;
            n >>= 1;
        }
        if (c > 15 || c < 15){
            return 0;
        }
        else if (c == 15){
            return 1;
        }
    else
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


