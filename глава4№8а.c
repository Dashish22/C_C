#include <stdio.h>
int main(void)
{
	int i = 365;
	int j = 7;
	int Next_multiple = i + j - i % j;

printf(" i + j - i %% j = %i\n", i + j - i % j, i, j);
  
  return 0;
}

