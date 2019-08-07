/*Author:Md Shoaib
  Purpose:Program that reads seven different temperature values, stores them in an array and then calculates the average temperature.
  Date:07/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    int temperature[7], avg, sum;
    //Input from user.
    for (int i = 0; i < 7; i++)
    {
        printf("Please enter temperature for Day %d: ", i);
        scanf("%d", &temperature[i]);
    }
    //add the values into sum
    for (int i = 0; i < 7; i++)
    {
        sum += temperature[i];
    }
    //Calculate the average temperature.
    avg = sum / 7;
    printf("The average temperature is: %d", avg);
    
	return 0;
}

