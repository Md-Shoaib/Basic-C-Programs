/*Author:Md Shoaib
  Purpose: Program to accept two integers and check if they are equal on not
  Date:17/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int firstNo, secondNo;
    //message to user
    printf("Please enter your first integer no:\n");
    scanf("%d", &firstNo);
    printf("Please enter your second integer no:\n");
    scanf("%d", &secondNo);
    //before calculate message to user
    printf("\n*****We accept your two integers now we check if they are equal or not*****\n\n");
    //logic for check that two integers are equal or not
    if (firstNo == secondNo)
    {
        printf("Your two integers are equal.\n");
    }
    else
    {
        printf("Your two integers are not equal\n");
    }

    return 0;
}
