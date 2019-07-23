/*Author:Md Shoaib
  Purpose:Write a program to input 2D array from the user of size 3x5. Then display the matrix 
  Date:07/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int matrix[3][5];
    int i, j;
    //Input from user(messege for user)
    printf("Please enter the Elements.\n");
    //loop for input elements
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            scanf("%d\n", &matrix[i][j]);
        }
    }
    //loop for print the matrix
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
