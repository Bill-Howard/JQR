/* MAPPING 6.9
   Demonstrate the ability to create and implement functions to meet a 
   requirement:
   - Proper declaration for created functions
   - A function that does not return a value (i.e is declared void)
   - A function that is passed an argument by value
   - A function that takes a pointer argument
   - A function that returns a value using a return statement
   - A function that modifies an output parameter through a pointer
   - A function that receives input from a user
   - A function pointer
   - A recursive function
*/

#include <stdio.h>

void multiplication(const int, const int, int *);
int addition(const int x, const int y);
void user_input();
int calc(const int, const int, int(*func_p)(int, int));
void recursion(int num);

int main(void)
{
    int output = 0;
    const int a = 5;
    const int b = 5;
    int x = 5;

    multiplication(a, b, &output);
    printf("The result of 5 x 5: %d\n", output);

    output = addition(a, b);
    printf("The result of 5 + 5: %d\n", output);

    user_input();

    output = calc(a, b, addition);
    printf("The result of the function pointer: %d\n", output);

    recursion(x);

    return 0;
}

void multiplication(const int x, xonst int y, int *result)
{
    *result = x * y;
}

int addition(const int x, const int y)
{
    int result = 0;
    result = x + y;
    return result;
}

void user_input()
{
    
}