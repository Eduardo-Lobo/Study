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
      bitwise [ --l ] [ word ]\n\
      bitwise [ --U ] [ word ]\n\
      bitwise [ --u ] [ word ]\n\
      bitwise [ --d ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --e ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --h ]\n", stdout);
  }else{
    fputs(
      "Usage:\n\
      bitwise [ --L ] [ word ]\n\
      bitwise [ --l ] [ word ]\n\
      bitwise [ --U ] [ word ]\n\
      bitwise [ --u ] [ word ]\n\
      bitwise [ --d ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --e ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --h ]\n", stdout);
    fputs(
      "Options:\n\
      -L, --tolower       Invert [word] for lowercase\n\
      -l, --lower         Invert first char for lowercase\n\
      -U, --toupper       Invert [word] for uppercase\n\
      -u, --upper         Invert first char for uppercase\n\
      -d, --date          Show the date in formart 16 bits\n\
      -u, --extract_month Extract the month\n\
      -h, --help          Show this help message\n", stdout);
  }
};


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
