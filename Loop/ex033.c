#include <stdio.h>
main()
{
	int data, i, cnt;
	float a;

	i = 0;
	cnt = 0;

	printf("���́H");
	scanf("%d", &data);
	for (; data != -999;) {
		i += data;
		cnt++;
		printf("���́H");
		scanf("%d", &data);
	}

	a = (float)i / cnt;
	printf("���v= %d\t ����= %.2f", i, a);
}