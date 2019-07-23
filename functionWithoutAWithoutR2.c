/*Author: Md Shoaib
  Purpose: function without arguments  without return value
  Date: 05/07/2019 */
#include <stdio.h>
//function
void printstar()
{
    int star;
    for (star = 0; star < 5; star++)
    {
        printf("%c", '*');
    }
}
//main start here
int main()
{
    printstar();

    return 0;
}
