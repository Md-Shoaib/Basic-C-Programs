/*Author:Md Shoaib
  Purpose:Program to multiply using addition
  Date:16/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int multi, num, sum = 0;
    //Input first num from user
    printf("Enter first num:\n");
    scanf("%d", &num);
    //Input first num from user
    printf("Enter second num:\n");
    scanf("%d", &multi);
    //multiply using loop by addition same number
    for (int i = 0; i < num; i++)
    {
        sum = sum + multi;
    }
    //Output to user
    printf("Your multiplication is:%d", sum);

    return 0;
}

