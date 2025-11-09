
#include "../libft.h"

int main(void)
{
	char t[] = "ALEX";
	char t2[] = "ALEX";
	int c = 'A';
	size_t n = strlen(t);
	printf(" Before: %s \n", t);
	ft_memset(t,c,n);
	memset(t2, c, n);
	printf(" After: %s \n", t);
	printf("%d \n", memcmp(t, t2, n));
}
