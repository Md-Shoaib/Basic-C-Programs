/*Author:Md Shoaib
  Purpose:Function Pointer
  Date:22/07/2019 */
#include <stdio.h>
//function for add two integers
int sum(int a, int b)
{
  return a + b;
}

int main()
{
  //variable declaration
  int F;
  //Testing the sum function
  printf("The sum of 1 and 2 is %d\n", sum(1, 2));
  //Declaring a function pointer
  int (*funcPtr)(int, int);
  //funcPtr points to sum function
  funcPtr = &sum;
  //Assigning values into function pointer
  //Dereferencing a function pointer
  F = (*funcPtr)(4, 6);
  //Print
  printf("The value of F is %d\n", F);

  return 0;
}
