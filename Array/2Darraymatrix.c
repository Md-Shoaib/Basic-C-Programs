/*Author: Md Shoaib
  Purpose: Program for write 2 matrix 3x3 input from user then addition two matrix
  Date: 07/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int a[3][3], b[3][3], c[3][3], i, j;
    //input from user(message)
    printf("Please enter numbers for first 3x3 matrix\n");
    //loop for first matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //loop for show the matrix to user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Please enter numbers for second 3x3 matrix\n");
    //loop for second matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    //loop for show the matrix to user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    //loop for addition two matrix and then store in our third matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    //print to user
    printf("Your answer is:\n");
    //loop for print to the user final answer
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
