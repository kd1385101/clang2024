#include <stdio.h>
main()
{
	char m;
	printf("文字を入力 : ");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
}