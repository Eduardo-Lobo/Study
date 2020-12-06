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
#include "cntbits.h"


int
cnt_bits(unsigned int number)
{
    unsigned int cnt=0, backup=number;;

    while (number)
    {
        cnt++;
        number >>= 1;
    }
    if (cnt > 16 || cnt < 16)
    {
        printf(biterr, backup);
    }
    else
    {
        printf(bitscc, cnt);
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
