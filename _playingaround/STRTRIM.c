#include "libft.h"

/* static int	find_end(char *s1, char const *set); */
static int	find_start(char *s1, char const *set);

static int	is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}


static int	find_start(char *s1, char const *set)
{
	int	i;

	i = 0;
	while (*s1 && is_in_set(*s1, set))
	{
		s1++;
		i++;
	}
	return (i);
}

int main (void)
{
	char *s1 = "x x xtripouille   xxx";
	char *set = " x";

	int i = find_start(s1,set);
	printf("Start value for SUBSTR is %d\n",i);
	return (0);

}
