/*Author:Md Shoaib
  Purpose:Program to reverse number
  Date:18/08/2019 */
#include <stdio.h>

int main()
{
	//Variable declaration
	int revNum = 0, rem, num, dummy;
	//Input from user
	printf("Please enter number:\n");
	scanf("%d", &num);
	dummy = num;
	//loop to get reversed number
	while(num !=0 )
	{
		rem = num % 10;
		revNum = revNum * 10 + rem;
		num = num / 10;
	}
	//Print to user
	printf("\nYour: %d number reversed is: %d\n", dummy,revNum);
	

  return 0;
}


