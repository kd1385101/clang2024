#include <stdio.h>
main()
{
	int data, i, cnt;
	float a;

	i = 0;
	cnt = 0;

	printf("数は？");
	scanf("%d", &data);
	for (; data != -999;) {
		i += data;
		cnt++;
		printf("数は？");
		scanf("%d", &data);
	}

	a = (float)i / cnt;
	printf("合計= %d\t 平均= %.2f", i, a);
}