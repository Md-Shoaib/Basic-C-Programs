/*Author: Md Shoaib
  Purpose: Example program for understand break statement
  Date: 04/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int i, age;
    //loop for print no and know the age
    for (i = 0; i <= 18; i++)
    {
        printf("%d\n Enter you age:\n", i);
        scanf("%d", &age);
        //if for check the age
        if (age >= 18)
        {
            break;
        }
    }

    return 0;
}
