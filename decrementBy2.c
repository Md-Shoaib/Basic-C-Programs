/*Author:Md Shoaib
  Purpose:Program which prints the series decrementing by 2 each time using for loop.
  Date:05/08/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int user;
    //Input from user
    printf("Please enter a number:\n");
    scanf("%d", &user);
    //Decrementing by 2 using for loop
    for (int i = 1; i <= user; i++)
    {
        printf("%d\n", user = user - 2);
    }

    return 0;
}

