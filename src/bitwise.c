/*
 *
 * 
 */
/*                */
#include <stdint.h>
#include <stdio.h>
/*                */
#include "bitwise.h"


char
*lower_f(unsigned char *word){

    const int x = 32;

    if (word[0] = word[0] | x){
        return word;
    }
};


char 
*tolower_f(unsigned char *word){

    const int x = 32;

    for (int i=0; word[i]!='\0'; i++){
        word[i] = word[i] | x;
    }
    return word;
};


char 
*upper_f(unsigned char *word){
    
    const int x = 32;

    if (word[0] = word[0] & ~x){
        return word;
    }
};


char
*toupper_f(unsigned char *word){

    const int x = 32;

    for (int i=0; word[i]!='\0'; i++){
        word[i] = word[i] & ~x;
    }
    return word;
};
