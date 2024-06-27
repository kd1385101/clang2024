#include <stdio.h>
main()
{
	int su, i;
	printf("”‚ğ“ü‚ê‚Ä : ");
	scanf("%d", &su);
	i = 0;
	while (i <= 100) {
		printf("%d+%d\n", su, i, su + 1);
		i++;
	}
}