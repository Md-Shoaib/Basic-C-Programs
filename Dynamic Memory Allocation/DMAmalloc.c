/*Author: Md Shoaib
  Purpose: DMA(using of malloc)
  Date: 14/07/2019 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int *ptr;
    //use of malloc
    ptr = (int *)malloc(3 * sizeof(int));
    //inserting values
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value no %d of this array:\n", i);
        scanf("%d", &ptr[i]);
    }
    //Printing values
    for (int i = 0; i < 3; i++)
    {
        printf("The value at %d of this array is:%d\n", i, ptr[i]);
    }

    return 0;
}
