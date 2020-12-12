/*                <b>To test bits.c</b<                                        */
#define is_zero   "Number: %d in position %d have bit 0"
#define is_one    "Number: %d in position %d have bit 1"
#define is_16bit  "Number: %d\n is not a value 16-bit"
#define is_n16bit "Number: %d\n is a value 16-bit"
#define is_nrange "Number: %d is outside range 0..15"
#define is_range  "Number: %d is within range 0..15"

unsigned int test_cnt_bits(unsigned int n);
unsigned int test_test_bit(unsigned int n, unsigned int p);
unsigned int test_range(unsigned int n, unsigned int r);

/*               <b>To test bitwise.c<\b>                                   */ 
#define lower "Expect that only first character convert to lowercase. \
Word: %s result %s"
#define tolower "Expect that all characters convert to lowercase. \
Word: %s result %s"
#define upper "Expect that only first character convert to uppercase. \
Word: %s result %s"
#define toupper "Expect that all characters convert to uppercase. \
Word: %s result %s"

void test_lower_f(void);
void test_tolower_f(void);
void test_upper_f(void);
void test_toupper_f(void);
