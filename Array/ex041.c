#include <stdio.h>
main()
{
	float sum = 0, a[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í : ");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("‡Œv : %.2f\n•½‹Ï : %.2f\n", sum, sum / 3);
}