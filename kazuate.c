#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int ans, bum, cnt;

	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("”“–‚ÄƒQ[ƒ€\n");
	printf("1`100‚Ü‚Å‚Ì”‚ð`\n\n");
	cnt = 0;
	while (1) {
		printf("”(1`100)‚ð“ü—Í : ");
		scanf("%d", &bum);
		cnt++;
	if (ans > bum) {
		printf("%d‚æ‚è‚à‘å‚«‚¢‚Å‚·\n\n", bum);
	}
	else if (ans < bum) {
		printf("%d‚æ‚è‚à¬‚³‚¢‚Å‚·\n\n", bum);
	}
	else {
		printf("“–‚½‚èI%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½\n", cnt);
		break;
		}
	}
}