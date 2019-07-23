/*Author:Md Shoaib
  Purpose:Void Pointer
  Date:16/07/2019 */
#include <stdio.h>

int main()
{
  //variable declaration
  int a = 540;
  float b = 20.41;
  //void pointer
  void *ptr;
  ptr = &a;
  //printing the void pointer with typecasted
  printf("The value at void pointer is:%d\n", *(int *)ptr);

  return 0;
}
