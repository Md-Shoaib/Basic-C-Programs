/*Author: Md Shoaib
  Purpose: Experiment with variables (static, local, globbal)
  Date: 13/07/2019 */
#include <stdio.h>
//gloabal variable
//int g = 250;
//variable declaration
func1()
{
  static int statVar = 0;
  statVar++;
  return statVar;
}
int main()
{
  //variable declaration
  //int g = 45;
  //static variable declaration

  printf("Value of a is = %d", func1());
  printf("Value of a is = %d", func1());
  return 0;
}
