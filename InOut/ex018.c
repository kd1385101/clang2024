#include <stdio.h>
main()
{
	int s1, s2, s3, g;	//g�͍��v
	printf("������3���� : ");
	scanf("%d%d%d", &s1,&s2,&s3);
	g = s1 + s2 + s3;
	printf("���v= %d", g);
	printf("  ����= %.2f\n", (float)g / 3); //(float)�E�E�E�L���X�g(���̎�����)SS
}