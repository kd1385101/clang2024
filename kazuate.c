#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int ans, bum, cnt;

	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("数当てゲーム\n");
	printf("1〜100までの数を〜\n\n");
	cnt = 0;
	while (1) {
		printf("数(1〜100)を入力 : ");
		scanf("%d", &bum);
		cnt++;
	if (ans > bum) {
		printf("%dよりも大きいです\n\n", bum);
	}
	else if (ans < bum) {
		printf("%dよりも小さいです\n\n", bum);
	}
	else {
		printf("当たり！%d回で当たりました\n", cnt);
		break;
		}
	}
}