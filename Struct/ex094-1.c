#include<stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[NIN] = { {"A��", 2000,2,11,"A"},
		{"B��",1999,12,31,"O"},{"C��",1999,2,25,"AB"},
		{"D��",2000,3,1,"A"},{"E��",1999,5,10,"B"} };
	struct profile* p;
	p = data;
	int i;
//	printf("���Ō������܂����H(1:���܂�N 2:���܂ꌎ 3:���t�^:");
//	scanf("%d", &j);
//	if (j == 1) {
//		printf("���܂ꂽ�N�����>")
//			scanf("%d", &k)
//	}
	for (i = 0; i < NIN; i++) {
//			if(j == 2){
//			printf("���܂ꂽ�������>");
//			scanf("%d", &k);
				if ((p + 1)->date.tuki == 2) {
					printf("%s -- %d�N%d��%d�����܂� ���t�^ - %s�^\n",
						(p + 1)->name, (p + 1)->date.nen, (p + 1)->date.tuki,
						(p + 1)->date.hi, (p + 1)->blood);
			}
		}
			
//	}
}