#include <stdio.h>
main()
{
	char m;
	printf("��������� : ");
	scanf("%c", &m);
	if ((m >= 'A' && m <= 'Z') || (m >= 'a' && m <= 'z')) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (m >= '0' && m <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}