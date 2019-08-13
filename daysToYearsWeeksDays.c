/*Author:Md Shoaib
  Purpose:Program to convert Days to Years, Weeks and days
  Date:13/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int noDays, years, weeks, days;
    printf("Enter the total days:\n");
    scanf("%d", &noDays);
    //Logic
    years = noDays / 365;
    weeks = (noDays % 365) / 7;
    days = (noDays % 365) % 7;
    //Print
    printf("%d = %d Years, %d weeks, %d days.\n", noDays, years, weeks, days);

    return 0;
}

