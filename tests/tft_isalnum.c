# include "libft.h"


int main (void)
{
	int a = 's';
	int b = 'S';
	int c = '*';
	int d = 1;
	int e = '7';
	printf("Yes = 1, No = 0\n");
	printf(" Is %c alpha?:%d \n", a, ft_isalnum(a));
	printf(" Is %c alpha?:%d \n", b, ft_isalnum(b));
	printf(" Is %c alpha?:%d \n", c, ft_isalnum(c));
	printf(" Is %c alpha?:%d \n", d, ft_isalnum(d));
	printf(" Is %c alpha?:%d \n", e, ft_isalnum(e));
	return 0;
}
