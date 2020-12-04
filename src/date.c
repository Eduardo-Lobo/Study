/*
 *
 * 
 * 
 */
/*                */
#include <stdlib.h>
#include <stdio.h>
/*                */
#include "bitwise.h"
#include "date.h" 


int
todate_f(int opt, int month, int day, int year){

    struct Date d = {.month=month, .day=day, .year=year};
    const int x = 0;
    
    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 00 || year > 99){
        usage(EXIT_FAILURE);
    }
    else if (opt == 'D'){
        
        printf("Date: %d/%d/%d Byte: %zu\n", 
        d.month, d.day, d.year, sizeof d);
    }
    else if (opt == 'm'){
        
        extract_month(d.month);
    }
    else if (opt == 'd'){
        
        extract_day(d.day);
    }
    else if (opt == 'y'){

        extract_year(d.year);
    }
};


void
extract_month(int month){
    
    printf("extract_month: %d\n", month);
};

void 
extract_day(int day){
    printf("extract_day: %d\n", day);
};

void 
extract_year(int year){
    printf("extract_year: %d\n", year);
};
