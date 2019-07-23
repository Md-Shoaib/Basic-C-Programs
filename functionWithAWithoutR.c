/*Author: Md Shoaib
  Purpose: function with arguments and without return value
  Date: 05/07/2019 */
#include <stdio.h>
//function
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
//main program start here
int main()
{
    printstar(5);

    return 0;
}
