/*
 * Create test to bitwise.c 
 */
 
/*                */ 
#include <stdio.h>
#include "test.h"
/*                */


char 
*test_lower_f(char str[])
{
    const int x = 32;

    if (str[0] = str[0] | x)
    {
        return str;
    }
};


char 
*test_tolower_f(char str[])
{
    const int x = 32;

    for (int i=0; str[i]!='\0'; i++)
    {
        str[i] = str[i] | x;
    }
    return str;

};


char 
*test_upper_f(char str[])
{
    const int x = 32;

    if (str[0] = str[0] & ~x)
    {
        return str;
    }
    
};

char
*test_toupper_f(char str[])
{
    const int x = 32;

    for (int i=0; str[i]!='\0'; i++)
    {
        str[i] = str[i] & ~x;
    }
    return str;
};
