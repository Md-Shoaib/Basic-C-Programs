/*Author:Md Shoaib
  Purpose:Program to find the greatest number between 3 numbers
  Date:20/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int firstNum, secondNum, thirdNum, final;
    //Input from user
    printf("Please enter your first number:\n");
    scanf("%d", &firstNum);

    printf("Please enter your second number:\n");
    scanf("%d", &secondNum);

    printf("Please enter your third number:\n");
    scanf("%d", &thirdNum);
    //logic for find the the greatest number between 3 numbers
    if (firstNum > secondNum && firstNum > thirdNum)
    {
        printf("The greatest num is %d", firstNum);
    }

    else if (secondNum > firstNum && secondNum > thirdNum)
    {
        printf("The greatest num is %d", secondNum);
    }

    else if (thirdNum > firstNum && thirdNum > secondNum)
    {
        printf("The greatest num is %d", thirdNum);
    }
    else
    {
        printf("An unknown error occurd!");
    }

    return 0;
}
