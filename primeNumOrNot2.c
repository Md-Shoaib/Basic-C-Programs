/*Author: EasyTuts4You
  Purpose: Check a prime no or not
  Date: /07/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int no, i, ans;
    //input from user
    printf("Please enter a number:");
    scanf("%d", &no);
    //first logic
    //result = usernum / 2;
    //second logic
    for (i = 2; i <= no / 2; i++)
    {
        ans = no % i;
        //check condition for prime or not
        if (ans == 0)
        {
            printf("This %d number is not a prime number.", no);
            goto end;
        }
    }

    printf("This %d is a prime number", no);
end:
    return 0;
}
