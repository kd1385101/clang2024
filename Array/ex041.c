#include <stdio.h>
main()
{
	float sum = 0, a[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("��������� : ");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("���v : %.2f\n���� : %.2f\n", sum, sum / 3);
}