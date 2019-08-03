/*Author:Md Shoaib
  Purpose:Program to check if a given Integer is Positive or Negative
  Date:03/08/2019 */

#include <stdio.h>

int main()
{
    //Variable declaration
    int num;
    //Input from user
    printf("Please enter a Integer value\n");
    scanf("%d", &num);
    //Logic to check + or -
    if (num < 0)
    {
        printf("You entered a Negetive Integer.\n");
    }
    else
    {
        printf("You entered a Positive Integer.\n");
    }

    return 0;
}

