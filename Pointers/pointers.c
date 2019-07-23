/*Author: Md Shoaib
  Purpose: Pointers
  Date: 08/07/2019 */
#include <stdio.h>

int main()
{
  //variable declaration
  int a = 10;
  int *ptra;
  //assign adress of a in ptra
  ptra = &a;
  //print the address of a variable.
  printf("The address of pointer a is:%p\n", ptra);
  printf("The value of pointer ptra is:%d\n", *ptra);

  return 0;
}
