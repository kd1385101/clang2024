#include <stdio.h>
main()
{
	char mo1, mo2, mo3, mo4, mo5, mo6, mo7, mo8, mo9, mo10;
	mo1 = 'A';
	mo2 = 'B';
	mo3 = 'C';
	mo4 = 'a';
	mo5 = 'b';
	mo6 = 'c';
	mo7 = '0';
	mo8 = '1';
	mo9 = '2';
	mo10 = ' ';
	printf("%c: %d 0x%x %c: %d 0x%x\n", mo1, mo1, mo1, mo2, mo2, mo2);
	printf("%c: %d 0x%x %c: %d 0x%x\n", mo3, mo3, mo3, mo4, mo4, mo4);
	printf("%c: %d 0x%x %c: %d 0x%x\n", mo5, mo5, mo5, mo6, mo6, mo6);
	printf("%c: %d 0x%x %c: %d 0x%x\n", mo7, mo7, mo7, mo8, mo8, mo8);
	printf("%c: %d 0x%x %c: %d 0x%x\n", mo9, mo9, mo9, mo10, mo10, mo10);
}