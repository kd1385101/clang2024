#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("�\�[�g�O");
	for (i = 0; i < N; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	printf("\n");
	for (i = N - 1; i > 0; i--) {
		printf("�\�[�g�͈�:d[0]�`d[%d]\n", i);
		for (j = 0; j < i; j++){
			printf("d[%d]:%2d��[%d]:%2d�̔�r\n", j, d[j], j + 1, d[j + 1]);
			if (d[i] > d[j + 1]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	printf("\n�\�[�g��\n");
	for (i = 0; i < N; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}