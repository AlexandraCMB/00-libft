#include "libft.h"

static int	find_end(char *s1, char const *set);

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




static int	find_end(char *s1, char const *set)
{
	int		j;
	char	*end;

	j = ft_strlen(s1);
	end = s1 + j -1;
	while (*s1 && is_in_set(*s1, set))
	{
		end--;
		j--;
		s1++;
	}
	return (j);
}

int main (void)
{
	char *s2 = "x x xtripouille   xxx";
	char *set = " x";

	int j = find_end(s2,set);
	printf("Len value for SUBSTR is %d\n",j);
	return (0);

}
