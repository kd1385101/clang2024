#include <stdio.h>
main()
{
	char m;
	printf("小文字を入力 : ");
	scanf("%c", &m);
	printf("小文字に変換して%c\n", m - 0x20);
}