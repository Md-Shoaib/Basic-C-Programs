/*Author: Md Shoaib
  Purpose: function with arguments and with return value
  Date: 05/07/2019 */
#include <stdio.h>
//function
int sum(int a, int b)
{
  return a + b;
}
//main function start here
int main()
{
  int a, b, c;
  a = 8;
  b = 85;
  c = sum(a, b);
  printf("The sum of our numbers is: %d", c);

  return 0;
}
