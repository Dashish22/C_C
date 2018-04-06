#include <stdio.h>

int main(void) {
	int binary ( int a, int mass[] )
	{
	
	int low, high, middle;
	low = 0;
	high = 5;
	while ( low <= high)
	{
		middle = (low + high) / 2;
		if (a < mass[middle])
		    high = middle - 1;
		else if (a > mass[middle])
		    low = middle + 1;
		else
		    return middle;
	}
	return -1;
}
}