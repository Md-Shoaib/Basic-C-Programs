/*Author:Md Shoaib
  Purpose:DMA(Using free)
  Date:14/07/2019 */
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
        printf("Enter the value no %d of this array is:\n", i);
        scanf("%d", &ptr[i]);
    }
    //printing the values
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is:%d\n", i, ptr[i]);
    }

    printf("\n");

    //print to user
    printf("Enter the size of the new array you want to create:\n");
    scanf("%d", &n);
    //using  of realloc
    ptr = (int *)realloc(ptr, n * sizeof(int));
    //entering the values from user
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array is:\n", i);
        scanf("%d", &ptr[i]);
    }
    //printing the values
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is:%d\n", i, ptr[i]);
    }
    //free memory using free
    free(ptr);

    return 0;
}
