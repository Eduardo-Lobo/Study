/*
 * Create test to bits.c 
 */

/*                */
#include <stdio.h>
/*                */
#include "test.h"
#include "bits.h"


void 
test_cnt_bits(void)
{
    unsigned int x0=32767, x1=89;
    
    if (!(cnt_bits(x0)))
    {
        printf(is_16bit, x0);
    }else if (cnt_bits(x1))
    {
        printf(is_n16bit, x1);
    }
};


void
test_test_bit(void)
{
    unsigned int n=32767, p0=8, p1=0;

    if ((test_bit(n, p0)))
    {
        printf(is_one, n, p0);
    }else if (!(test_bit(x, p1)))
    {
        printf(is_zero, n, p1);
    }
};


void
test_check(void)
{
    unsigned int n0=15, n1=18;

    if (!(check(n0)))
    {
        printf(is_range, n0);
    }else if (check(n1))
    {
        printf(is_nrange, n1);
    }
};
