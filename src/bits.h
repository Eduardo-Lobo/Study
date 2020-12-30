/*
 * Author: Eduardo-Lobo @2020
 * Email : myedudev@protonmail.ch
 */

#include <stdint.h>

/* 
Counts the number of one bits in a 16-bit integer value.
*/
extern uint16_t cnt_bits(uint16_t n);
/* 
Check if n have a range 0..15.
The function should always return 1 if n holds a 
value outside the range 0..15, otherwise 0. 
*/
extern uint16_t range(uint16_t n);
/* 
This function requires two 16-bit integer parameters. 
The first parameter is a 16-bit value to test; 
the second parameter is a value in the range 0..15
describing which bit to test.

The function should return <b>true</> if the corresponding bit 
contains a 1, the function should return <b>false</b> if that 
bit position contains a 0.
*/
extern uint16_t test_bit(uint16_t n, uint16_t p);
/* 
Take a integer 16-bit and convert to binary.
Return a array.
*/
extern uint16_t *tobin(uint16_t n);

enum Bits {SIZE = 16, BITS = 16, RANGE = 16};
