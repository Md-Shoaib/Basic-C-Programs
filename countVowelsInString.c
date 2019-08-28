/* Author: Md Shoaib
 * Purpose: Count vowels in string.
 * Date: 28/08/2019 
 */
#include <stdio.h>

int main()
{
	//Variable declaration
	char str[50];
	int i, count = 0;
	//Input from user
	printf("Please enter a string:\n");
	scanf("%s", str);
	//Logic to get vowels from string
	for (i = 0; i < str[i]; i++)
	{
		if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
		{
			count++;
		}
	}
	//Print to user
	printf("There are %d vowels in string.\n", count);

	return 0;
}

