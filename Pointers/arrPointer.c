/*Author: Md Shoaib
  Purpose: Arrays and pointers
  Date: 08/07/2019 */
#include <stdio.h>

int main()
{
  //variable declaration
  int arr[] = {1, 2, 3, 4, 5, 6, 67};
  //print the values
  printf("array at position 3 of the array is %d\n", arr[3]);
  printf("The adddress of first element of the array is %d\n", &arr[0]);
  printf("The adddress of first element of the array is %d\n", arr);
  printf("The adddress of second element of the array is %d\n", &arr[1]);
  printf("The adddress of second element of the array is %d\n", arr + 1);

  printf("\n\n");

  printf("The value at adddress of first element of the array is %d\n", *(&arr[0]));
  printf("The value at adddress of first element of the array is %d\n", arr[0]);
  printf("The value at adddress of first element of the array is %d\n", *(arr));
  printf("The value at adddress of second element of the array is %d\n", *(&arr[1]));
  printf("The value at adddress of second element of the array is %d\n", arr[1]);
  printf("The value at adddress of second element of the array is %d\n", *(arr + 1));

  return 0;
}
