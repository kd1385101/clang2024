#include <stdio.h>
main()
{
	int s1, s2, s3, g;	//gは合計
	printf("整数を3個入力 : ");
	scanf("%d%d%d", &s1,&s2,&s3);
	g = s1 + s2 + s3;
	printf("合計= %d", g);
	printf("  平均= %.2f\n", (float)g / 3); //(float)・・・キャスト(この時だけ)SS
}