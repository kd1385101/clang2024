#include<stdio.h>
int saidai(int* array, int size);
int saisyo(int* array, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l = %d\n", saidai(data, 8));
	printf("Å¬’l = %d\n", saisyo(data, 8));
}
int saidai(int* array, int size) {
	int i, saidai;
	for (saidai = *array, i = 1; i < size; i++) {
		if (saidai < *(array + i)) {
			saidai = *(array + i);
		}
	}
	return saidai;
}
int saisyo(int* array, int size) {
	int i, saisyo;
	for (saisyo = *array, i = 1; i < size; i++) {
		if (saisyo > *(array + i)) {
			saisyo = *(array + i);
		}
	}
	return saisyo;
}