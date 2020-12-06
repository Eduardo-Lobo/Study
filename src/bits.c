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
cnt_bits(unsigned int number)
{
    unsigned int c=0;

    while (number)
    {
        c++;
        number >>= 1;
    }
    if (c > 16 || c < 16)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};


unsigned int 
test_bit(unsigned int n, unsigned int p)
{
    unsigned int x[16], y[16], i=0, in=0;

    if (!(cnt_bits(n)) && !(check(p)))
    {
        do
        {
            x[i] = n % 2;
            n = n / 2;
            i++;

        } while (n > 0);

        for (i = i-1; i > 0; i--)
        {
            y[in] = x[i];
            in++;
        }

        if (y[p] == 1)
        {
            return true;
        }
        else if (y[p] == 0)
        {
            return false;
        }
    }else
        return false;
};


unsigned int
check(unsigned int n){

    if (n < 0 || n > 15)
    {
        return 1;
    }
    else if (n >= 0 || n <= 15)
    {
        return 0;
    }
};
