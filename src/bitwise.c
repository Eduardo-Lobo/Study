/*
 *
 * 
 */

/*                */
#include <stdint.h>
#include <assert.h>
#include <stdio.h>
/*                */
#include "bitwise.h"


char
*lower_f(unsigned char *word)
{
    const int x = 32;

    if (word[0] = word[0] | x)
    {
        return word;
    }
};


char 
*tolower_f(unsigned char *word)
{
    const int x = 32;

    for (int i=0; word[i]!='\0'; i++)
    {
        word[i] = word[i] | x;
    }
    return word;
};


char 
*upper_f(unsigned char *word)
{
    const int x = 32;

    if (word[0] = word[0] & ~x)
    {
        return word;
    }
};


char
*toupper_f(unsigned char *word)
{
    const int x = 32;

    for (int i=0; word[i]!='\0'; i++)
    {
        word[i] = word[i] & ~x;
    }
    return word;
};


uint32_t
rol(uint32_t x, uint32_t n)
{
    assert (n < 32);
    return (x << n) | (x >> (-n&31));
};


uint32_t
ror(uint32_t x, uint32_t n)
{
    assert (n < 32);
    return (x >> n) | (x << (-n&31));
};
