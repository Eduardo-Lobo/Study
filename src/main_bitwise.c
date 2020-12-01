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
  {"toupper", required_argument, NULL, 'u'},
  {"tolower", required_argument, NULL, 'l'},
  {"help",    no_argument,       NULL, 'h'},
  {0,         0,                 0,      0},
};


int
main(int argc, char **argv){

    int c, *longindex = 0;
    const char *optstring = "u:l";

    while ((c = getopt_long(argc, argv, optstring, longopts, &optind)) != -1){
        switch (c)
        {
        case 'u':
            printf("%s\n", toupper_f(argv[2]));
            break;
        case 'l':
            break;
        case 'h':
            usage(EXIT_SUCCESS);
        }
    }
};
