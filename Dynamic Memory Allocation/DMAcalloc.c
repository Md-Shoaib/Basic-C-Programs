/*Author: Md Shoaib
  Purpose: DMA(using of calloc)
  Date: 14/07/2019 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int *ptr;
    int n;
    //print to user
    printf("Enter the size of the array you want to create:\n");
    scanf("%d", &n);
    //using  of calloc
    ptr = (int *)calloc(n, sizeof(int));
    //entering the values from user
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array is:", i);
        scanf("%d", &ptr[i]);
    }
    //printing the values
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is:%d\n", i, ptr[i]);
    }

    return 0;
}
