#include <stdio.h>
#include "bits.h"

#define one  "Number: %d\n is not a value 16-bit"
#define zero "Number: %d\n is a value 16-bit"

void 
test_cnt_bits(void){
    
    unsigned int x = 32767, y = 89;
    
    if (!(cnt_bits(n)))
    {
        printf(one, n);
    } 
    else if (cnt_bits(y))
    {
        printf(zero, y);
    }
};
