/*Author:Md Shoaib
  Purpose:Memory Leak concept
  Date:23/07/2019 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int a, i = 0;
    int *i2;
    while (i < 455545)
    {
        printf("Welcome Md Shoaib!\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        //Here we not use here free() so this progam goes to memory leak.
    }

    return 0;
}
