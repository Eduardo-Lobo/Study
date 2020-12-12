/*                <b>To test bits.c</b<                                        */
#define is_zero   "Number: %d in position %d have bit 0\n"
#define is_one    "Number: %d in position %d have bit 1\n"
#define larger_or_outside "Number: %d is not a 16-bit value or %d is outside range 0..15\n"
#define is_n16bit "Number: %d is not a 16-bit value\n"
#define is_16bit  "Number: %d is a 16-bit value\n"
#define is_nrange "Number: %d is outside range 0..15\n"
#define is_range  "Number: %d is within range 0..15\n"
#define tobin     "Converting %d to binary:\n"

unsigned int test_cnt_bits(unsigned int n);
unsigned int test_test_bit(unsigned int n, unsigned int p);
unsigned int test_range(unsigned int n, unsigned int r);
unsigned int *test_tobin(unsigned int n);
void test_main_bits(void);

/*               <b>To test bitwise.c<\b>                                   */ 
#define lower "Expect that only first character convert to lowercase. Word: %s result %s\n"
#define tolower "Expect that all characters convert to lowercase. Word: %s result %s\n"
#define upper "Expect that only first character convert to uppercase. Word: %s result %s\n"
#define toupper "Expect that all characters convert to uppercase. Word: %s result %s\n"

void test_lower_f(void);
void test_tolower_f(void);
void test_upper_f(void);
void test_toupper_f(void);
