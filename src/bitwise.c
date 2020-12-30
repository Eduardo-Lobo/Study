/*
 * Author: Eduardo-Lobo @2020
 * Email : myedudev@protonmail.ch
 */

#include "bitwise.h"
#include <stdint.h>
#include <assert.h>
#include <stdio.h>


char
*lower_f(char str[])
{
    const int x = 32;

    if (str[0] = str[0] | x)
    {
        return str;
    }
};


char 
*tolower_f(char str[])
{
    const int x = 32;

    for (int i=0; str[i]!='\0'; i++)
    {
        str[i] = str[i] | x;
    }
    return str;
};


char 
*upper_f(char str[])
{
    const int x = 32;

    if (str[0] = str[0] & ~x)
    {
        return str;
    }
};


char
*toupper_f(char str[])
{
    const int x = 32;

    for (int i=0; str[i]!='\0'; i++)
    {
        str[i] = str[i] & ~x;
    }
    return str;
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
