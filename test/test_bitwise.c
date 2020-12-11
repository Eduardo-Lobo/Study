/*
 * Create test to bitwise.c 
 */
 
/*                */ 
#include <stdio.h>
#include "test.h"
/*                */
#include "bitwise.h"

void
test_lower_f(void)
{
    unsigned char *word = BITWISE;

    printf(lower, word, lower_f(word));
};

void
test_tolower_f(void)
{
    unsigned char *word = BITWISE;

    printf(tolower, word, tolower_f(word));
};

void 
test_upper_f(void)
{
    unsigned char *word = bitwise;

    printf(upper, word, upper_f(word));
};

void 
test_toupper_f(void)
{
    unsigned char *word = bitwise;

    printf(toupper, word, toupper_f(word));
};
