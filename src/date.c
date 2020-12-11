/*
 *
 * 
 * 
 */
/*                */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*                */
#include "bitwise.h"
#include "date.h" 
#include "bits.h"


unsigned int 
*todate_f(int m, int d, int y)
{
    unsigned int *month, *day, *year;
    static unsigned int date[16];
    int i, in=0;

    month = tobin(m); 
    year = tobin(y);
    day = tobin(d); 

    for (;   i < 4;  i++){date[i] = month[in]; in++;}in=0;
    for (;  i < 9;  i++){date[i] = day[in];  in++;}in=0;
    for (; i < 16; i++){date[i] = year[in]; in++;}in=0;

    return date;
};


unsigned int 
*extract_month(int m, int d, int y)
{
    static unsigned int month[4];
    unsigned int *date, i=0;

    date = todate_f(m, d, y);

    for (; i < 4; i++){month[i] = date[i];}
    return month;
};


unsigned int 
*extract_day(int m, int d, int y)
{
    unsigned int *date, i=0, in=4;
    static unsigned int day[5];

    date = todate_f(m, d, y);

    for (; i < 5; i++){day[i] = date[in]; in++;}
    return day;
};


unsigned int 
*extract_year(int m, int d, int y)
{
    unsigned int *date, i=0, in=9;
    static unsigned int year[7];

    date = todate_f(m, d, y);
    
    for (; i < 7; i++){year[i] = date[in]; in++;}
    return year;
};
