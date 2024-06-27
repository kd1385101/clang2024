#include <stdio.h>
main()
{
	int ope;
	printf("整数を入力 : ");
	scanf("%d", &ope);
	if (ope >= 10 && ope <= 49) {
		switch (ope / 10) {
		case 1:printf("10点台です\n");
			break;
		case 2:printf("20点台です\n");
			break;
		case 3:printf("30点台です\n");
			break;
		case 4:printf("40点台です\n");
			break;
		}
	}
	else {
		printf("エラー\n");
	}
}