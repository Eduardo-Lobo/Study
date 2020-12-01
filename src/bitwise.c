/*
 *
 * 
 */
#include <stdint.h>
#include <stdio.h>
#include <getopt.h>

static struct option const long_option[]=
{
  {"toupper", required_argument, NULL, 'u'},
  {"tolower", required_argument, NULL, 'l'},
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