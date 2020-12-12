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
    unsigned int x[15], i=0, in=0;
    static unsigned int y[15];

    if (test_cnt_bits(n)){
        
        do{
            x[i] = n % 2;
            n = n / 2;
            i++;

        } while (n > 0);

        for (i = i-1; i > 0; i--){
            y[in] = x[i];
            in++;
        }
        return y;
    }else
        return 0;
};
