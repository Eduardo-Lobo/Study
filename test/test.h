#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/*  Test to src/bits.c     */
unsigned int test_test_bit(unsigned int n, unsigned int p);
unsigned int test_range(unsigned int n, unsigned int r);
uint16_t test_cnt_bits(uint16_t n);
unsigned int *test_tobin(unsigned int n);
void test_main_bits(void);

enum Bits {SIZE = 16, BIT = 16};

/*  Test to src/bitwise.c  */
void test_ret_bitwise(char* tname, unsigned int ret);
unsigned int test_main_bitwise(void);
char *test_toupper_f(char str[]);
char *test_tolower_f(char str[]);
char *test_lower_f(char str[]);
char *test_upper_f(char str[]);

#define ret_err(tname, ret) fprintf(stderr, "%s failed in file %s at line # %d \nreturn %d\n", tname, __FILE__, __LINE__, ret);
#define ret_scc(tname, ret) fprintf(stdout, "%s was successful in file %s \nreturn %d\n", tname, __FILE__, ret);
