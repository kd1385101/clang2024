#include <stdio.h>
main()
{
	int g, i;
	printf("数を入れて:");
	scanf("%d", &g);
	for (i = 1; i <= 5; i++) {
		printf("%d ", g * i);
	}
}