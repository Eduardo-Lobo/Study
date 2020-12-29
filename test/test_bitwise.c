/*
 * Create: test to bitwise.c
 * Author: Eduardo-Lobo @2020
 * Email : myedudev@protonmail.ch
 */

#include <stdio.h>
#include "test.h"

/* Change the first character of str for lowercase. */
char 
*test_lower_f(char str[])
{
    const int x = 32;

    if (str[0] = str[0] | x)
    {
        return str;
    }
};

/* Change all characters of str for lowercase. */
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

/* Change the first character of str for uppercase. */
char 
*test_upper_f(char str[])
{
    const int x = 32;

    if (str[0] = str[0] & ~x)
    {
        return str;
    }
    
};

/* Change all characters of str for uppercase. */
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


unsigned int
test_main_bitwise(void){

    char str[] = "LoweRcASe";
    const int x = 32;
    char *ret_str;
    int c = 0, i;

    /* If the first character is uppercase at str, change for lowercase.  */
    /* Character lowercase should continue lowercase. */
    ret_str = test_lower_f(str);
    
    if (ret_str[0] == (str[0] | x)){
        test_ret_bitwise("test_lower_f()", EXIT_SUCCESS);
    }else{
        test_ret_bitwise("test_lower_f()", EXIT_FAILURE);
    }

    /* Check if all character uppercase at str have change for lowercase. */
    /* Character lowercase should continue lowercase. */
    ret_str = test_tolower_f(str);
    
    for (i = 0; str[i] != '\0'; i++){
        if (ret_str[i] == (str[i] | x))
            c++;
    }
    if (c == sizeof(str) -1){
        test_ret_bitwise("test_tolower_f()", EXIT_SUCCESS);
    }else{ 
        test_ret_bitwise("test_tolower_f()", EXIT_FAILURE);
    }

    /* If the first character is lowercase at str, change for uppercase.  */
    /* Character uppercase should continue uppercase. */
    ret_str = test_upper_f(str);

    if (ret_str[0] == (str[0] & ~x)){
        test_ret_bitwise("test_upper_f()", EXIT_SUCCESS);
    }else{
        test_ret_bitwise("test_upper_f()", EXIT_FAILURE);
    }


    /* Check if all character lowercase at str have change for uppercase. */
    /* Character uppercase should continue uppercase. */
    ret_str = test_toupper_f(str);
    c = 0;

    for (i = 0; str[i] != '\0'; i++){
        if (ret_str[i] == (str[i] & ~x))
            c++;
    }
    if (c == sizeof(str) - 1){
        test_ret_bitwise("test_toupper_f()", EXIT_SUCCESS);
    }else{
        test_ret_bitwise("test_toupper_f()", EXIT_FAILURE);
    }
};
