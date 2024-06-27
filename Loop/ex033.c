#include <stdio.h>
main()
{
	int data, i, cnt;
	float a;

	i = 0;
	cnt = 0;

	printf("”‚ÍH");
	scanf("%d", &data);
	for (; data != -999;) {
		i += data;
		cnt++;
		printf("”‚ÍH");
		scanf("%d", &data);
	}

	a = (float)i / cnt;
	printf("‡Œv= %d\t •½‹Ï= %.2f", i, a);
}