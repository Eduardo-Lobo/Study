/*
 *
 * 
 * 
 */ 
#include "bitwise.h"
#include "date.h"
#include <stdio.h>

void
usage(int status){
  if (status){
    fputs(
      "Usage:\n\
      bitwise [ --L ] [ word ]\n\
      bitwise [ --l ] [ word ]\n\
      bitwise [ --U ] [ word ]\n\
      bitwise [ --u ] [ word ]\n\
      bitwise [ --D ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --d ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --m ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --y ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --c ] [ n int ]\n\
      bitwise [ --h ]\n", stdout);
  }else{
    fputs(
      "Usage:\n\
      bitwise [ --L ] [ word ]\n\
      bitwise [ --l ] [ word ]\n\
      bitwise [ --U ] [ word ]\n\
      bitwise [ --u ] [ word ]\n\
      bitwise [ --D ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --d ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --m ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --y ] [m 1..12] [d 1..31] [y 0..99]\n\
      bitwise [ --c ] [ n int ]\n\
      bitwise [ --h ]\n", stdout);
    fputs(
      "Options:\n\
      -L, --tolower       Invert [word] for lowercase\n\
      -l, --lower         Invert first char for lowercase\n\
      -U, --toupper       Invert [word] for uppercase\n\
      -u, --upper         Invert first char for uppercase\n\
      -D, --date          Show the date in formart 16 bits\n\
      -m, --extract_month Extract the month\n\
      -d, --extract_day   Extract the day\n\
      -y, --extract_year  Extract the year\n\
      -c, --count         Count the bits and return if it is n-16bit\n\
      -h, --help          Show this help message\n", stdout);
  }
};


void
enter_dt(int opt){
    
    if (opt == 'c')
        fputs("bitwise 0.1:\n\
        Enter with number integer:\n\
        Example: 350000 or Ctrl + c to exit\n", stdout);
    else
        fputs("bitwise 0.1:\n\
            Enter with a date:\n\
            Example: 12 31 1999 or Ctrl + c to exit\n", stdout);
};
