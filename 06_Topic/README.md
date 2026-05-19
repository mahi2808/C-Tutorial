# Pointers:- A variable that stores the memory address of another variable.
# Syntax
int age = 22;
int *ptr = &age;
int _age = *ptr;

# Declaring Pointers
int *ptr;
char *ptr;
float *ptr;

# Format Specifier:-
printf("%p", &age);
printf("%p", ptr);
printf("%p", &ptr);

# Pointer to Pointer:- A variable that stores address of another pointer.
# Pointer to Pointer Syntax
int **pptr;
char **pptr;
float **pptr;

# Pointers in Function Call:-
a. Call by Value:- We pass value of variable as argument.
b. Call by Reference:- We pass address of variable as argument.
