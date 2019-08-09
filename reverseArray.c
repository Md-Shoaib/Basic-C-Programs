/*Author:Md Shoaib
  Purpose:Program to reverse an array.
  Date:09/08/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int n, arr[10], i, d, tempArr[10];
    //insert elements from user
    printf("Please enter how many elements you want to enter.\n");
    scanf("%d", &n);

    printf("\n\nPlease enter %d elements.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Store the array into tempArr starting from end
    for (i = n - 1, d = 0; i >= 0; i--, d++)
    {
        tempArr[d] = arr[i];
    }
    
    //Printing reversed array using tempArr not changing original arr.
    printf("\n\n Resultant array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tempArr[i]);
    }

    return 0;
}

