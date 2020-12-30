/*
 * Create test to bits.c 
 * Author: Eduardo-Lobo @2020
 * Email : myedudev@protonmail.ch
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "test.h"

/* Count the bits of n and return 0 if n is 16bit otherwise 1.  */
uint16_t
test_cnt_bits(uint16_t n)
{
    uint8_t c = 0;

    while (n){
        c++;
        n >>= 1;
    }

    if (c == BIT)
        return 0;
    else
        return 1;
};


/* Check if p (position) in n is 1 and return true, outherwise  */
/* false if 0 or range of p outside of 15. */
uint16_t
test_bit(uint16_t n, uint16_t p)
{
    uint8_t cnt, range;
    uint16_t *bin;

    cnt = test_cnt_bits(n);
    range = test_range(p);

    if (!(cnt && range)){
        bin = test_tobin(n);
        
        if (bin[p] == 1){
            return true;
        }
        else if (bin[p] == 0){
            return false;
        }
    }else
        return false;
};


/* Check if n is inside of range 0..15. */
uint16_t
test_range(uint16_t n)
{

    if (n >= 0 || n <= RANGE)
        return 0;
    else 
        return 1;
};


/* Convert int n for binary, return bin array if success,       */
/* outherwise return 0. */
uint16_t 
*test_tobin(uint16_t n){

    static uint16_t x[SIZE];
    int i = 0, c, k;
    uint8_t cnt;

    cnt = test_cnt_bits(n);

    if (!(cnt)){
        for (c = 15; c >= 0; c--){
             
            k = n >> c;
            x[i] = k & 1;
            i++;
        }
        return x;
    }else
        return 0;
};


void
test_main_bits(void){

    uint16_t n = 62400, p = 0;

    if (!(test_cnt_bits(n))){
        t_ret("test_cnt_bits()", SUCESS, NULL, EXIT_SUCCESS);
    }else{
        t_ret("test_cnt_bits()", FAILED, NULL, EXIT_FAILURE);
    }

    if ((test_bit(n, p)) == true){
        t_ret("test_bit()", SUCESS, TRUE, 0);
    }else{
        t_ret("test_bit()", FAILED, FALSE, 0);
    }
};
