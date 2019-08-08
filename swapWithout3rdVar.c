/*Author:Md Shoaib
  Purpose:Swap two numbers without using 3rd variable. 
  Date:08/08/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int a, b;
    //Input from user
    printf("Please enter first Number:\n");
    scanf("%d", &a);

    printf("Please enter second Number:\n");
    scanf("%d", &b);

    //Swaping
    printf("Before swaping first Number: %d, second Number: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping first Number: %d, second Number: %d\n", a, b);

    return 0;
}

