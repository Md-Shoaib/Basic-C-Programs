/*Author:Md Shoaib
  Purpose:Program that will accept weight(Kg) and height(cm) of a person. If the weight is less than 50 and height is greater than 170 
  display the message you are selected for Indian Army else display you are not fit.
  Date:05/08/2019 */
#include <stdio.h>

int main()
{
    //variable declaration
    int weight, height;
    //Print to user
    printf("*****Selection of INDIAN ARMY*****\n\n");
    //Input from user
    printf("Plese enter your weight in Kg:\n");
    scanf("%d", &weight);

    printf("Please enter your height in cm:\n");
    scanf("%d", &height);
    //Logic
    if (weight < 50 && height > 170)
    {
        printf("You are selected for Indian Army.\n");
    }
    else
    {
        printf("You are not fit.\n");
    }

    return 0;
}

