# Functions:- Block of code that performs a particular task.

# Use:-
a. Can be used multiple times
b. Increases code reusability


Syntax 1
Function Prototype      > Tells the compiler

void printHello();

Syntax 2
Function Definition     > Does the work

void printHello() {
    printf("Hello");
}

Syntax 3
Function Call           > Uses the function

int main() {
    printHello();
    return 0;
}

# Properties:-
- Execution always starts from main()
- A function gets called directly or indirectly from main()
- There can be multiple functions in a program

# Function Types:-
a. Library Function:- Special functions inbuilt in C. (scanf(), printf())
b. User Defined:- Declared & defined by programmer.

# Passing Arguments:-
Functions can take values (parameters) & return value.

void printHello();
void printTable(int n);
int sum(int a, int b);

# Argument                                          v/s                            Parameter
Values passed during function call                          Values received in function definition
used to send value                                                used to receive value
actual parameter                                                  formal parameters

# NOTE
a. Function can return only one value at a time.
b. Changes to parameters in function do not change values in calling function.
   (Because a copy of argument is passed)

# Recursion:- When a function calls itself, it is called recursion.

# Properties of Recursion
a. Anything that can be done with Iteration, can be done with recursion and vice-versa.
b. Recursion can sometimes give the most simple solution.
c. Base Case is the condition which stops recursion.
d. Iteration may cause infinite loop & recursion may cause stack overflow.