/*Author: Md Shoaib
  Purpose: factorial program using recursion(Not done by myself)
  Date: /07/2019 */
#include <stdio.h>
//recursion
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    //variable declaration
    int num;
    printf("Enter the number you want the factorial of:");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));

    return 0;
}
