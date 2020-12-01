/*
 *
 * 
 */
#include <stdint.h>
#include <stdio.h>
#include <getopt.h>
#include "bitwise.h"

const struct option long_option[]=
{
  {"toupper", required_argument, NULL, 'u'},
  {"tolower", required_argument, NULL, 'l'},
  {"help",    no_argument,       NULL, 'h'},
  {0,         0,                 0,      0},
};


void
usage(int status){
  if (status && EXIT_FAILURE){
    fputc(
      "Usage:\n\
      bitwise [ --l ] [ word ]\n\
      bitwise [ --u ] [ word ]", stdout);
  }else{
    fputc(
      "Usage:\n\
      bitwise [ --l ] [ word ]\n\
      bitwise [ --u ] [ word ]\n", stdout);
    fputc(
      "Options:\n\
      -l, --tolower     Invert of lowercase for upercase\n\
      -u, --toupper     Invert of upercase for lowercase\n\
      -h, --help        Show this help message", stdout);
  }
};


void
toupper(char word){

  unsigned char c = word[0];
  uint16_t mask = 0x00100000;

  if !(c[2]){
    word[0] = c | mask;
    printf("Lowercase is: %s", word);
  }
};