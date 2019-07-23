/*Author:Md Shoaib
  Purpose:Dangling Pointer
  Date:17/07/2019 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Case 1: De Allocation of a memory block
  int *ptr = (int *)malloc(6 * sizeof(int));
  ptr[0] = 25;
  ptr[1] = 35;
  ptr[2] = 65;
  free(ptr);
  // now our ptr point something that gone from our program that means now our ptr is a dandling pointer
  printf("Value at ptr[0] is %d\n", ptr[0]);

  return 0;
}
