#include <stdio.h>
#include <limits.h>

int main(void)
{
	
int d, m, dm;
for ( d = 1; d <= 10; ++d ) {
            
            dm = 1;

	for ( m = 1; m <= d; ++m ) {

		dm*= m;

	}

	printf("%i! = %i\n", d, dm);

}

return 0;

}