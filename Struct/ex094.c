#include<stdio.h>
#include<string.h>

//#define NIN 5
//
//struct ptofile {
//	char name[20];
//	int birth[3];
//	char blood[5];
//};
//main()
//{
//	struct profile data[NIN];
//	struct profile *p;
//	p = data;
//	int i;
//	struct profile* p;
//	for (i = 0; i < NIN; i++, p++) {
//		printf("%d人目（名前）: ", i + 1);
//		scanf("%s", p->name);
//		printf("%d人目（生年月日）; ", i + 1);
//		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
//		printf("%d人目（血液型）: ", i + 1);
//		scanf("%s", p->blood);
//	}
//	for (p = data, i = 0; i < NIN; i++, p++) {
//		if (strcmp(p->blood, "A") == 0) {
//			printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%型\n",
//				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
//		}
//	}
//}
#define NIN 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[NIN];
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++, p++) {
		printf("%d人目(名前):", i + 1);
		scanf("%s", p->name);
		printf("%d人目(生年月日):", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d人目(血液型):", i + 1);
		scanf("%s", p->blood);
	}
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}