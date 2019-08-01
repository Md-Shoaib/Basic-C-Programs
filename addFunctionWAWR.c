/*Author:Md Shoaib
  Purpose:Without Arguments with return value. print the value given by add function, without any extra variable.
  Date:01/08/2019 */

#include <stdio.h>
//Add function declaration
int add();

int main()
{
    //Call add function and print the value given by add function, without any extra variable.
    printf("Sum is %d", add());

    return 0;
}

//Add function
int add()
{
    int a, b, c;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);

    c = a + b;
    return c;
}

