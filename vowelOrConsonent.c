/*Author:Md Shoaib
  Purpose:Program to Check whether an Alphabet is Vowel or Consonant
  Date:27/08/2019 */
#include <stdio.h>

int main()
{
    //Variable declaration
    char alpha;
    //Input from user
    printf("Please enter an Alphabet:\n");
    scanf("%c", &alpha);
    //Logic to check whether vowel or not.
    if (alpha == 'a' || alpha == 'A' || alpha == 'e' || alpha == 'E' || alpha == 'i' || alpha == 'I' || alpha == 'o' || alpha == 'O' || alpha == 'u' || alpha == 'U')
    {
        printf("%c is vowel.\n", alpha);
    }
    else
    {
        printf("%c is consonent.\n", alpha);
    }

    return 0;
}
