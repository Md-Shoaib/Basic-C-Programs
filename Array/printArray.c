/*Author: Md Shoaib
  Purpose: 10 numbers input from user then print only even numbers using array
  Date: 07/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int even[10];
    //print for user
    printf("Please enter 10 numbers to get EVEN numbers from your 10 numbers\n");
    //loop for input 10 numbers
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &even[i]);
    }
    //loop for output even numbers
    for (int i = 0; i < 10; i++)
    {
        if (even[i] % 2 == 0)
        {
            printf("Your %d number is an EVEN number\n", even[i]);
        }
    }

    return 0;
}
