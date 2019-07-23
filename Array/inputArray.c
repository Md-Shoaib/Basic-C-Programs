/*Author: Md Shoaib
  Purpose: 10 numbers input from user then print only odd numbers using array
  Date: 07/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int odd[10];
    //print for user
    printf("Please enter 10 numbers to get ODD numbers from your 10 numbers\n");
    //loop for input 10 numbers
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &odd[i]);
    }
    //loop for output even numbers
    for (int i = 0; i < 10; i++)
    {
        if (odd[i] % 2 != 0)
        {
            printf("Your %d number is an ODD number\n", odd[i]);
        }
    }

    return 0;
}
