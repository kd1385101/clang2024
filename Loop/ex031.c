#include <stdio.h>
main()
{
	int i, g;
	g = 0;
	for (i = 1; i <= 10; i++) {
		g += i;
			printf("1 から %d までの和 = %d\n", i, g);
	}
}