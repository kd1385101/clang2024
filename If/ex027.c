#include <stdio.h>
main()
{
	char ch;
	printf("文字を入力:");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z') {
		printf("変換すると%c\n", ch + 0x20);
	}
	else {
		if (ch >= 'a' && ch <= 'z') { 
			printf("変換すると%c\n", ch - 0x20);
		}
		else { 
			printf("エラー:アルファベットを入力してください\n");
		}
	}
}