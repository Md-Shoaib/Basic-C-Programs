/*Author: Md Shoaib
  Purpose: Program for print address of a variable and address of a pointer then print value of variable and 
  then print value of a variable using pointer
  Date: 08/07/2019 */
#include <stdio.h>

int main()
{
  //variable declaration
  int a = 100;
  int *p;
  //assign address of a in our p pointer
  p = &a;
  //Now print values and addresses.
  printf("value of a is:%d\n", a);
  printf("value of a using pointer is:%d\n", *p);
  printf("address of a is:%p\n", &a); //here using %p format specifiers because it's specific for print addresses
  printf("address of a using pointer is:%p\n", p);
  printf("address of p pointer is:%p\n", &p);
  return 0;
}
