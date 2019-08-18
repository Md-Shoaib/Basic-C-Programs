/*Author:Md Shoaib
  Purpose:Program to check wheather number is Palindrom or not.
  Date:18/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int revNum = 0, rem, num, dummy;
    //Input from user
    printf("Please enter number:\n");
    scanf("%d", &num);
    dummy = num;
    //loop to get reversed number
    while (num != 0)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num = num / 10;
    }
    
    //Check number is palindrom or not
    if (revNum == dummy)
    {
        printf("\nYour: %d number is palindrom.\n", revNum);
    }
    else
    {
        printf("\nYour: %d number is not palindrom.\n", dummy);
    }

    return 0;
}

