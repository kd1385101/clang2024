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
	struct profile data[NIN] = { {"AŽ", 2000,2,11,"A"},
		{"BŽ",1999,12,31,"O"},{"CŽ",1999,2,25,"AB"},
		{"DŽ",2000,3,1,"A"},{"EŽ",1999,5,10,"B"} };
	struct profile* p;
	p = data;
	int i;
//	printf("‰½‚ÅŒŸõ‚µ‚Ü‚·‚©H(1:¶‚Ü‚ê”N 2:¶‚Ü‚êŒŽ 3:ŒŒ‰tŒ^:");
//	scanf("%d", &j);
//	if (j == 1) {
//		printf("¶‚Ü‚ê‚½”N‚ð“ü—Í>")
//			scanf("%d", &k)
//	}
	for (i = 0; i < NIN; i++) {
//			if(j == 2){
//			printf("¶‚Ü‚ê‚½ŒŽ‚ð“ü—Í>");
//			scanf("%d", &k);
				if ((p + 1)->date.tuki == 2) {
					printf("%s -- %d”N%dŒŽ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^ - %sŒ^\n",
						(p + 1)->name, (p + 1)->date.nen, (p + 1)->date.tuki,
						(p + 1)->date.hi, (p + 1)->blood);
			}
		}
			
//	}
}