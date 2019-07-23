/*Author:Md Shoaib
  Purpose:Callback Functions
  Date:22/07/2019 */
#include <stdio.h>
//function for add two integers
int sum(int a, int b)
{
    return a + b;
}
//function for greet Hello and execute
void greetHelloAndExecute(int (*funcPtr)(int, int))
{
    printf("Hello User.\n");
    printf("The sum of 5 and 7 is %d\n", funcPtr(5, 7));
}
//function for greet Good Morning and execute
void greetGmAndExecute(int (*funcPtr)(int, int))
{
    printf("Good Morning User.\n");
    printf("The sum of 8 and 9 is %d\n", funcPtr(8, 9));
}

int main()
{
    //Declaring a function pointer
    int (*ptr)(int, int);
    //funcPtr points to sum function
    ptr = &sum;
    //call greetHelloAndExecute function
    greetHelloAndExecute(ptr);

    return 0;
}
