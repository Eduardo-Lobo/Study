#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

/*  Test to src/bits.c     */
uint16_t test_bit(uint16_t n, uint16_t p);
uint16_t test_cnt_bits(uint16_t n);
uint16_t *test_tobin(uint16_t n);
uint16_t test_range(uint16_t n);
void test_main_bits(void);

enum Bits {SIZE = 16, BIT = 16, RANGE = 16};

/*  Test to src/bitwise.c  */
void t_ret(char * tname, char * status, char * p_ret, unsigned int ret);
unsigned int test_main_bitwise(void);
char *test_toupper_f(char str[]);
char *test_tolower_f(char str[]);
char *test_lower_f(char str[]);
char *test_upper_f(char str[]);

#define puts_e(t_name, status, p_ret, ret) if (p_ret) fprintf(stderr, "Function: %s \nStatus: %s \nFile: %s \nLine: # %d \nReturn: %s\n", \
t_name, status, __FILE__, __LINE__, p_ret); else fprintf(stdout, "Function: %s \nStatus: %s \nFile: %s \nLine: # %d \nReturn: %d\n", \
t_name, status, __FILE__, __LINE__, ret);

#define puts_s(t_name, status, p_ret, ret) if (p_ret) fprintf(stdout, "Function: %s \nStatus: %s \nFile: %s \nReturn: %s\n", \
t_name, status, __FILE__, p_ret); else fprintf(stdout, "Function: %s \nStatus: %s \nFile: %s \nReturn: %d\n", \
t_name, status, __FILE__, ret);

#define SUCESS "Sucess"
#define FAILED "Failed"
#define FALSE "False"
#define TRUE "True"

#define putsout fputs("============================\n\n", stdout);
