#include <stdio.h>
main()
{
	float x[3][2];
	int i, j;
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 1; j++) {
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
		}
		printf("%d�s�ڂ̕���=%.2f\n\n", i, (x[i][0] + x[i][1]) / 2.0);
	}
}