#include <stdio.h>
#include "test.h"
#include "bits.h"

#define one  "Number: %d\n is not a value 16-bit"
#define zero "Number: %d\n is a value 16-bit"

#define false "Number: %d in position %d have bit 0"
#define true  "Number: %d in position %d have bit 1"

#define range_t "Number: %d is within range 0..15"
#define range_f "Number: %d is outside range 0..15"


void 
test_cnt_bits(void)
{
    unsigned int x0=32767, x1=89;
    
    if (!(cnt_bits(x0)))
    {
        printf(one, x0);
    }else if (cnt_bits(x1))
    {
        printf(zero, x1);
    }
};


void
test_test_bit(void)
{
    unsigned int n=32767, p0=8, p1=0;

    if ((test_bit(n, p0)))
    {
        printf(true, n, p0);
    }else if (!(test_bit(x, p1)))
    {
        printf(false, n, p1);
    }
};


void
test_check(void)
{
    unsigned int n0=15, n1=18;

    if (!(check(n0)))
    {
        printf(range_t, n0);
    }else if (check(n1))
    {
        printf(range_f, n1);
    }
};
