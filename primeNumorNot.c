/*Author: Md Shoaib
  Purpose: Check a number is prime numbeer or not
  Date: 06/07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int usernum, result, limit, prime;
    //input from user
    printf("Please enter a number:");
    scanf("%d", &usernum);
    //first logic
    result = usernum / 2;
    //second logic
    for (limit = 2; limit <= result; limit++)
    {
        prime = usernum % limit;
        //check condition for prime or not
        if (prime == 0)
        {
            printf("This %d number is not a prime number.", usernum);
            goto end;
        }
    }

    printf("This %d is a prime number", usernum);
end:
    return 0;
}
