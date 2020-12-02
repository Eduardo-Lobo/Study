/*
 *
 * 
 */
#include <stdint.h>
#include <stdio.h>
#include "bitwise.h"

void
usage(int status){
  if (status){
    fputs(
      "Usage:\n\
      bitwise [ --L ] [ word ]\n\
      bitwise [ --U ] [ word ]\n\
      bitwise [ --u ] [ word ]\n", stdout);
  }else{
    fputs(
      "Usage:\n\
      bitwise [ --L ] [ word ]\n\
      bitwise [ --U ] [ word ]\n\
      bitwise [ --u ] [ word ]\n\n", stdout);
    fputs(
      "Options:\n\
      -L, --tolower     Invert [word] for uppercase\n\
      -U, --toupper     Invert [word] for lowercase\n\
      -u, --upper       Invert first char for uppercase\n\
      -h, --help        Show this help message\n", stdout);
  }
};


char 
*tolower_f(unsigned char *word){

    const int x = 32;

    for (int i=0; word[i]!='\0'; i++){
        word[i] = word[i] | x;
    }
    return word;
}


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

// Example:
// w 01110111 o 01101111 r 01110010 d 01100100
//   11011111   11011111   11011111   11011111
//   ----------------------------------------- AND
//   01010111   01001111   01010010   01000100

// 32 00100000 
//    -------- ~ NOT
//    11011111

// W 01010111 O 01001111 R 01010010 D 01000100
//   00100000   00100000   00100000   00100000
//   ----------------------------------------- OR
//   01110111   01101111   01110010   01100100
