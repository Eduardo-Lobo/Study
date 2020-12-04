/*
 *
 * 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "date.h" 
#include "bitwise.h"

void
enter_dt(void){
    
    printf("bitwise 0.1:\n\
        Enter with a date range of [m 1..12] [d 1..31 ] [y 0..99]\n\
        Example: 12 31 1999 or Ctrl + c to exit\n");
};

int 
todate_f(int month, int day, int year){

    struct Date d;
    const int x = 0;
    
    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 00 || year > 99){
        usage(EXIT_FAILURE);
    }
    else
    {
        printf("Date: %d/%d/%d Byte: %zu\n", 
        d.month=month, d.day=day, d.year=year, sizeof d);
    }
};
