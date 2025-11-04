#include "../libft.h"

int main(void)
{
/* 	char d[] = "0123";
	char *s = d + 2;
	int i = 0;
	printf("||SOURCE BEFORE is: %s\n", s);
	printf("||DEST BEFORE is: %s\n", d);
	printf("||SRC after of DST - copy forward||\n");
	printf("AFTER\n");
	while (i < 8)
	{
		char d1[] = "0123";
		char *s1 = d1 + 2;
		printf("i = %d\n", i);
		memmove(d1, s1, i);
		printf("Src after is: %s\n", s1);
		printf("Dst after is: %s\n___________\n", d1);
		i++;
	} */

	char ss[] = "0123";
	char *dd = ss + 2;
	int j = 0;
	printf("~~~~~~~~~~~~\n||SOURCE is:    %s\n", ss);
	printf("||DEST BEFORE is: %s\n", dd);
	printf("||DST after of SRC -- copy backward||\n");
	printf("AFTER\n");
	while (j < 8)
	{
		char ss1[] = "0123";
		char *dd1 = "2345";
		printf("i = %d\n", j);
		memmove(dd1, ss1, j);
		printf("Src after is: %s\n", ss1);
		printf("Dst after is: %s\n___________\n", dd1);
		j++;
	}

	return 0;
}
