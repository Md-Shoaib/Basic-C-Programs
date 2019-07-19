/*Author:Md Shoaib
  Purpose:Macros in C
  Date:18/06/2019 */

#include <stdio.h>

int main()
{
	char FILE, DATE, TIME;
	int LINE, STDC;

	printf("%s\n", __FILE__); //Output our filename path
	printf("%s\n", __DATE__); //Output date in Day,Month,Year
	printf("%s\n", __TIME__); //Output time in Hour,Min,Sec
	printf("%d\n", __LINE__); //Output Line no code
	printf("%d\n", __STDC__); //Output 1 when compiler complies with ANSI standard otherwise it wil be 0

	return 0;
}
