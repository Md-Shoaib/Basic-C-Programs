/*Author: Md Shoaib
  Purpose: Write a program to take 7 numbers from user and then print the 7 numbers 
  Date: 07/07/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int num[7];
    //Inpur from user
    printf("Please enter 7 numbers.\n");
    //loop for enter 7 numbers
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &num[i]);
    }
    //loop for print 7 numbers
    for (int i = 0; i < 7; i++)
    {
        printf("Your numbers are:%d\n", num[i]);
    }

    return 0;
}
