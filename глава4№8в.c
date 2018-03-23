#include <stdio.h>
int main(void)
{
	int i = 996;
	int j = 4;
	int Next_multiple = i + j - i % j;
 
printf(" i + j - i %% j = %i\n", i + j - i % j, i, j);
 
  return 0;
}