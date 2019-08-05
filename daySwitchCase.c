/*Author:Md Shoaib
  Purpose:Program to display the name of the day, depending upon the number entered from the keyboard using the switch case loop.
  Date:05/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int day;
    //Input from user
    printf("Please enter a number between 1 to 7:\n");
    scanf("%d", &day);
    //logic using switch case
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    case 6:
        printf("Sataurday\n");
        break;

    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("You entered invalid number.\n");
        break;
    }

    return 0;
}

