# Variables:- Name of memory location used to store data.
Rules:-
a. case sensitive
b. 1st character is alphabet or '_'
c. no comma/blank space
d. No other symbol other than'_'
e. Keywords cannot be used as variable names

# Data Types:- Defines the type of data a variable can store. (Note:- Size may vary depending on compiler/system.)
Data types                       Size in Bytes        
Char or signed char                  1
unsigned char                        1
int or signed int                    2
unsigned int                         2
short or unsigned short int          2
signed short int                     2
long int or signed long int          4
unsigned long int                    4
float                                4
double                               8
long double                          10/12/16

# Constant:- Values that do not change (fixed values).
Types
a. Integer Constants    (1, 2, 3, 0, -1, -2)
b. Real Constants       (1.0, 2.0, 3.14, -2.3)
c. Character Constants  ('a', 'b', 'A', '#', '&')

# Keywords:- Reserved words that have special meaning to the compiler (32 Keywords in C)
auto        double      int         struct
break       else        long        switch
case        enum        register    typedef
char        extern      return      union
continue    for         signed      void
do          if          static      while
default     goto        sizeof      volatile
const       float       short       unsigned

# Program Structure 
#include<stdio.h>               // Preprocessor directive
int main(){                     // Starting point of the program
    printf("Hello World");      // Print statement
    return 0;                   // Program executed successfully
}                               // End of program

# Comments:- Used to explain code. Compiler ignores comments.
a. Single Line     // Mahesh
b. Multiple Line   /* My name is 
                     Mahesh */

# Output:- printf() → Used to print output on screen.
printf("Hello World");

//New line
printf("Hello World\n");

# Format specifiers:- Used in printf() and scanf() to define data type. (%d, %f, %c, %s)

Examples:- 
a. integers
printf("age is %d", age);

b. real numbers
printf("value of pi %f",pi);

// %.2f → Prints float value up to 2 decimal places.

c. characters
printf("star look like this %c",star);

# Input:- scanf() → Used to take input from user.
scanf("%d",&age);

# Compilation:- Process of converting C code into machine code and checking errors.