#include <stdio.h>
main()
{
	float sum = 0, a[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("実数を入力 : ");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("合計 : %.2f\n平均 : %.2f\n", sum, sum / 3);
}