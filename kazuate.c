#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int ans, bum, cnt;

	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("�����ăQ�[��\n");
	printf("1�`100�܂ł̐����`\n\n");
	cnt = 0;
	while (1) {
		printf("��(1�`100)����� : ");
		scanf("%d", &bum);
		cnt++;
	if (ans > bum) {
		printf("%d�����傫���ł�\n\n", bum);
	}
	else if (ans < bum) {
		printf("%d�����������ł�\n\n", bum);
	}
	else {
		printf("������I%d��œ�����܂���\n", cnt);
		break;
		}
	}
}