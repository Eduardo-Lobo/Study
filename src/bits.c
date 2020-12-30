/*
 * Author: Eduardo-Lobo @2020
 * Email : myedudev@protonmail.ch
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "bits.h"


uint16_t
cnt_bits(uint16_t n){
    uint8_t c = 0;

    while (n){
        c++;
        n >>= 1;
    }

    if (c == BITS){
        return 0;
    }
    else
        return 1;
};


uint16_t
test_bit(uint16_t n, uint16_t p){

    uint8_t cnt, rng;
    uint16_t *bin;

    cnt = cnt_bits(n);
    rng = range(p);

    if (!(cnt && rng)){
        bin = tobin(n);
        
        if (bin[p] == 1){
            return true;
        }
        else if (bin[p] == 0){
            return false;
        }
    }else
        return false;
};


uint16_t
range(uint16_t n){

    if (n >= 0 || n <= RANGE)
        return 0;
    else
        return 1;
};


uint16_t
*tobin(uint16_t n){

    static uint16_t arr[SIZE];
    int i = 0, d, r;
    uint8_t cnt;

    cnt = cnt_bits(n);

    if (!(cnt)){
        
        for (d = 15; d >= 0; d--){
             
            r = n >> d;
            arr[i] = r & 1;
            i++;
        }
        return arr;
    }else
        return 0;
};
