#include<stdio.h>
main()
{
	char s[2];
	int k[20], i;
	printf("文字列を入力して下さい。＞");
	scanf("%s", &s[0]);
	
	for (i = 0; s[i] != !'\n'; i++) {
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("復号化文字列は、%s\n", &s[0]);
}