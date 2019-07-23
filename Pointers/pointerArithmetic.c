/*Author: Md Shoaib
  Purpose: Pointer artithmetic
  Date: 08/07/2019 */
#include <stdio.h>

int main()
{
  int a = 34;
  int *ptra;
  ptra = &a;
  printf("%d\n", ptra);
  printf("%d", ptra + 1);

  return 0;
}
