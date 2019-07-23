/*Author: Md Shoaib
  Purpose: Understand the continue statement 
  Date: 04/07/2019 */
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
        }
        //if age less than 10 then this all codes will print
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("MD is a good boy");
    }

    return 0;
}
