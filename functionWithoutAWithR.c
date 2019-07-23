/*Author: Md Shoaib
  Purpose: function without arguments and with return value
  Date: 05/07/2019 */
#include <stdio.h>
//function
int takenumber()
{
  int i;
  printf("Enter a number:");
  scanf("%d", &i);
  return i;
}

int main()
{
  int num;
  num = takenumber();

  printf("The number entered is:%d", num);
  return 0;
}
