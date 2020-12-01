/*
 *
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include "bitwise.h"


int
main(int argc, char **argv){

    int c, *longindex = 0;
    const char *optstring = "u:l";

    while ((c = getopt_long(argc, argv, optstring, long_option, &optind)) != -1){
        switch (expression)
        {
        case 'u':
            toupper_f();
            break;
        case 'l':
            break;
        case 'h':
            usage(EXIT_SUCCESS);
        default:
            usage(EXIT_FAILURE);
        }
    }
};