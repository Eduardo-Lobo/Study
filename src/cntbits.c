/*
 *
 * 
 * 
 */
/*                */
#include <stdio.h>
/*                */
#include "cntbits.h"


void 
cnt_bits(unsigned int number){
    
    unsigned int cnt=0, backup=number;;

    while (number){

        cnt++;
        number >>= 1;
    }
    if (cnt > 16 || cnt < 16)
        printf(biterr, backup);
    else
        printf(bitscc, cnt);
};
