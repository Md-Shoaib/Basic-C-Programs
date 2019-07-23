/*Author: Md Shoaib
  Purpose: Strings
  Date: 10/07/2019 */
#include <stdio.h>
//creating function for string
void printString(char str[])
{
    //variable declaration
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    //variable  declaratin
    //char str[] = {'s', 'h', 'o', 'a', 'i', 'b', '\0'}; //  Old technique
    //char str[] = "Shoaib"; //New technique
    char str[10];

    gets(str); // function(stdio.h) for input from user
    //printf("Using printf:%s", str); // print string using printf

    puts(str); //function(stdio.h) alternative of printf

    //call function for print our string
    //printString(str);

    return 0;
}
