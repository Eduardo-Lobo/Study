## Programming Projects

Book: 
* The Art of assembly language.

1) Write to functions, toupper and tolower, that take a single character as their parameter and
convert this character to upper case (if it was lowercase) or to lowercase (if it was uppercase) 
respectively. Use the logical operations to do the conversion. Pascal users may need to use the 
chr() and ord() functions to successfully complete this assignment.

2) Write a function “CharToInt” that you pass a string of characters and it returns the corresponding
integer value. Do not use a built-in library routine like atoi (C) or strtoint (Pascal) to do this 
conversion. You are to process each character passed in the input string, convert it from a character 
to an integer using the logical operations, and accumulate the result until you reach the end of the 
string. An easy algorithm for this task is to multiply the accumulated result by 10 and then add in 
the next digit. Repeat this until you reach the end of the string. Pascal users will probably need to 
use the ord() function in this assignment.

3) Write a ToDate function that accepts three parameters, a month, day, and year value. This function
should return the 16-bit packed date value using the format given in this chapter (see “Bit Fields and 
Packed Data” on page 28). Write three corresponding functions ExtractMonth, ExtractDay, and ExtractYear 
that expect a 16-bit date value and return the corresponding month, day, or year value. 
The ToDate function should automatically convert dates in the range 1900-1999 to the range 0..99.

4) Write a “CntBits” function that counts the number of one bits in a 16-bit integer value. Do
not use any built-in functions in your language’s library to count these bits for you.

5) Write a “TestBit” function. This function requires two 16-bit integer parameters. The first parameter 
is a 16-bit value to test; the second parameter is a value in the range 0..15 describing which bit to test. 
The function should return true if the corresponding bit contains a one, the function should return false 
if that bit position contains a zero. The function should always return false if the second parameter holds 
a value outside the range 0..15.

6) Pascal and C/C++ provide shift left and shift right operators (SHL/SHR in Pascal, “<<“ and “>>” in C/C++). 
However, they do not provide rotate right and rotate left operators. Write a pair of functions, ROL and ROR, 
that perform the rotate tasks. Hint: use the function from exercise five to test the H.O. bit. Then use the 
corresponding shift operation and the logical OR operation to perform the rotate.

## To clone this repository:

```bash
# Clone this repository:
$ git clone https://github.com/Eduardo-Lobo/Study.git

# Go into the repository
$ cd Study
```
