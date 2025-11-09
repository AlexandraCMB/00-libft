
#include "../libft.h"

int main(void)
{
	const char *src = "HelloAlex";
	char dst[50];
	size_t n = 4;

	printf("Ft_strlcpy output is: %lu\n", ft_strlcpy(dst,src,n));
	printf("Dest has changed to: %s\n", dst);
	return 0;
}
