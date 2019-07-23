/*Author: Md Shoaib
  Purpose: Swap program using call by reference method
  Date: 09/07/2019 */
#include <stdio.h>
//Fucnction definition to swap the value
void swap(int *x, int *y)
{
  int temp;
  temp = *x; //Put x into temp
  *x = *y;   //put y into x
  *y = temp; //put temp into y

  return;
}

int main()
{
  //variable declaration
  int a = 34, b = 74;
  //print the values of a and b
  printf("Value of a = %d and value of b = %d\n", a, b);
  //now swap by swap function
  swap(&a, &b); //Call by Reference
  //print after swapping
  printf("After swapping values are:\nValue of a = %d and value of b = %d\n", a, b);

  return 0;
}
