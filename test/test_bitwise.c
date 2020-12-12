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


void
test_main_bitwise(void){

    char l[]="LOWERCASE", u[]="uppercase";

    fputs("-------BEGINNING TEST TO BITWISE------\n\
        \n-------<b>TEST TO LOWER_F</b>-------\n", stdout);
    printf(lower, test_lower_f(l));

    fputs("\n-------<b>TEST TO TOLOWER_F</b>-------\n", stdout);
    printf(tolower, test_tolower_f(l));

    fputs("\n-------<b>TEST TO UPPER_F</b>-------\n", stdout);
    printf(upper, test_upper_f(u));

    fputs("\n-------<b>TEST TO TOUPPER_F</b>-------\n", stdout);
    printf(toupper, test_toupper_f(u));

    fputs("\n-------END TEST BITWISE-------\n", stdout);
};
