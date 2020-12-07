/*
 *
 * 
 */
/*                 */
#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
/*                 */
#include "bitwise.h"
#include "cntbits.h"
#include "usage.h"
#include "date.h"


const struct option longopts[]=
{
  {"tolower", required_argument, NULL, 'L'},
  {"lower",   required_argument, NULL, 'l'},
  {"toupper", required_argument, NULL, 'U'},
  {"upper",   required_argument, NULL, 'u'},
  {"date",    no_argument,       NULL, 'D'},
  {"extract_month", no_argument, NULL, 'm'},
  {"extract_day", no_argument,   NULL, 'd'},
  {"extract_year", no_argument,  NULL, 'y'},
  {"count",      no_argument,    NULL, 'c'},
  {"test",       no_argument,    NULL, 't'},
  {"help",    no_argument,       NULL, 'h'},
  {0,         0,                 0,      0},
};


int
main(int argc, char **argv){

    const char *optstring = "L:l:U:u:Ddmcyth";
    int month, day, year, c, *longindex = 0;
    unsigned int number, n, p;

    if (argc < 2){
        usage(EXIT_FAILURE);
    }else{
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
                printf("%s\n", tolower_f(argv[2]));
                break;
            case 'l':
                printf("%s\n", lower_f(argv[2]));
                break;
            case 'D':
                enter(c);
                if ((scanf("%d %d %d", &month, &day, &year)));
                    todate_f(c, month, day, year);
                break;
            case 'e':
                enter(c);
                if ((scanf("%d %d %d", &month, &day, &year)));
                    todate_f(c, month, day, year);
                break;
            case 'm':
                enter(c);
                if ((scanf("%d %d %d", &month, &day, &year)))
                    todate_f(c, month, day, year);
                break;
            case 'd':
                enter(c);
                if ((scanf("%d %d %d", &month, &day, &year)))
                    todate_f(c, month, day, year);
                break;
            case 'y':
                enter(c);
                if ((scanf("%d %d %d", &month, &day, &year)))
                    todate_f(c, month, day, year);
                break;
            case 'c':
                enter(c);
                if((scanf("%d", &number)))
                    cnt_bits(number);
                break;
            case 't':
                if ((scanf("%d %d", &n, &p)))
                    test_bit(n, p);
                break;
            case 'h':
                usage(EXIT_SUCCESS);
                break;
            }
        }
    }
};
