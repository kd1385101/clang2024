#include <stdio.h>
main()
{
	char m;
	printf("��������� : ");
	scanf("%c", &m);
	if (m >= 'A' && m <= 'Z') {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}