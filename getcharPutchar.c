/*Author:Md Shoaib
  Purpose:Program for involving both getchar and putchar
  Date:04/08/2019 */

#include <stdio.h>

int main()
{
    //Variable declaration
    char c;
    //Input from user
    printf("Please enter a character: ");
    c = getchar();
    //Print to user
    printf("You entered: ");
    putchar(c);

    return 0;
}

