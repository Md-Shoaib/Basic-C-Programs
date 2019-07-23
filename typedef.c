/*Author: Md Shoaib
  Purpose: program to change existing data type name into user define data type name using typedef keyword
  Date: 12/07/2019 */
#include <stdio.h>

int main()
{
  //variable  declaration without any changes
  //   int marks = 85, roolNo = 6;
  //chang int data type into user define data type using typedef
  typedef int in;
  //new variable declaration using our custom define data type
  in marks = 85, rollNo = 6;

  //print to user
  printf("Student marks is %d, and roolNo is %d.\n", marks, rollNo);

  return 0;
}
