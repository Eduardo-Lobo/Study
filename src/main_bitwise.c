/*
 *
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include "bitwise.h"

const struct option longopts[]=
{
  {"toupper", required_argument, NULL, 'U'},
  {"upper",   required_argument, NULL, 'u'},
  {"tolower", required_argument, NULL, 'L'},
  {"help",    no_argument,       NULL, 'h'},
  {0,         0,                 0,      0},
};


int
main(int argc, char **argv){

    int c, *longindex = 0;
    const char *optstring = "U:L:u:h";

    while ((c = getopt_long(argc, argv, optstring, longopts, &optind)) != -1){
        switch (c)
        {
        case 'U':
            printf("%s\n", toupper_f(argv[2]));
            break;
        case 'u':
            printf("%s\n", upper_f(argv[2]));
            break;
        case 'L':
            break;
        case 'h':
            usage(EXIT_SUCCESS);
        }
    }
};
