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
      bitwise [ --l ] [ word ]\n\
      bitwise [ --u ] [ word ]", stdout);
  }else{
    fputs(
      "Usage:\n\
      bitwise [ --l ] [ word ]\n\
      bitwise [ --u ] [ word ]\n", stdout);
    fputs(
      "Options:\n\
      -l, --tolower     Invert of lowercase for upercase\n\
      -u, --toupper     Invert of upercase for lowercase\n\
      -h, --help        Show this help message\n", stdout);
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
//    -------- ~
//    11011111
