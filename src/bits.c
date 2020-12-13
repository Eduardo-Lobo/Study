/*
 *
 * 
 * 
 */
/*                */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
/*                */
#include "bits.h"


unsigned int
cnt_bits(unsigned int n)
{
    unsigned int c=0;

    while (n){
        c++;
        n >>= 1;
    }
    if (c == CBITS){
        return 1;
    }
    else
        return 0;
};


unsigned int 
test_bit(unsigned int n, unsigned int p)
{
    unsigned int *y;

    if ((cnt_bits(n)) && (range(p))){
        
        y = tobin(n);
        
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
range(unsigned int n)
{
    if (n >= 0 || n <= 15)
    {
        return 1;
    }
    else
        return 0;
};


unsigned int
*tobin(unsigned int n)
{
    int i=0, c, k;
    static unsigned int x[SIZE];

    if (cnt_bits(n)){
        
        for (c=15; c >= 0; c--){
             
            k = n >> c;
            x[i] = k & 1;
            i++;
        }
        return x;
    }else
        return 0;
};
