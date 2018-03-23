#include <stdio.h>
int main(void)
{
	int i = 12258;
	int j = 23;
	int Next_multiple = i + j - i % j;
 
printf(" i + j - i %% j = %i\n", i + j - i % j, i, j);
 
  return 0;
}