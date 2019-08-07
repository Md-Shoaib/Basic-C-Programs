/*Author:Md Shoaib
  Purpose:Program which finds the sum of five positive integers. If a negetive number is entered, the sum is not performed.
  Date:07/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int num, sum = 0;
    //Input from user
    for (int i = 1; i <= 5; i++)
    {
        printf("Please enter number %d\n", i);
        scanf("%d", &num);
        //check if num is negetive skips the next portion of code.
        if (num < 0)
        {
            printf("You entered a negetive number.\n");
            continue;
        }
        sum += num;
    }
    printf("The sum of the positive numbers are = %d\n", sum);
    return 0;
}

