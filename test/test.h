#include <stdlib.h>
#include <stdio.h>

/*  Test to src/bits.c     */
unsigned int test_test_bit(unsigned int n, unsigned int p);
unsigned int test_range(unsigned int n, unsigned int r);
unsigned int test_cnt_bits(unsigned int n);
unsigned int *test_tobin(unsigned int n);
void test_main_bits(void);

enum Bits {SIZE = 16, CBITS = 15};

/*  Test to src/bitwise.c  */
void test_ret_bitwise(char* tname, unsigned int ret);
unsigned int test_main_bitwise(void);
char *test_toupper_f(char str[]);
char *test_tolower_f(char str[]);
char *test_lower_f(char str[]);
char *test_upper_f(char str[]);
