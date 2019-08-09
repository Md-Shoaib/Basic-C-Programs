/*Author:Md Shoaib
  Purpose:Program to find whether a given year is leap year or not.
  Date:09/08/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int year;
    //Input from user
    printf("Please enter year to check whether leap year or not.\n");
    scanf("%d", &year);
    //Algorithm
    if ((year % 400) == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if ((year % 100) == 0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if ((year % 4) == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

