/*
 *
 * 
 * 
 */ 

/* 
Counts the number of one bits in a 16-bit integer value.
*/
extern unsigned int cnt_bits(unsigned int number);
/* 
Check if n have a range 0..15.
The function should always return 1 if n holds a 
value outside the range 0..15, otherwise 0. 
*/
extern unsigned int range(unsigned int n);
/* 
This function requires two 16-bit integer parameters. 
The first parameter is a 16-bit value to test; 
the second parameter is a value in the range 0..15
describing which bit to test.

The function should return <b>true</> if the corresponding bit 
contains a 1, the function should return <b>false</b> if that 
bit position contains a 0.
*/
extern unsigned int test_bit(unsigned int n, unsigned int p);
/* 
Take a integer 16-bit and convert to binary.
Return a array.
*/
extern unsigned int *tobin(unsigned int n);

#define biterr "N %d is not 16 bits\n"
#define bitscc "N of bits: %d\n"
