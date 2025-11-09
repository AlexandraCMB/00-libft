
int main(void)
{
	char s[] = "Bisous";

	printf("~~ Real funct. ~~\n");
	char *a = strdup(s);
	printf("Input: %s, output: %p\n\n", s, a);

	printf("~~ My funct. ~~\n");
	char *b = ft_strdup(s);
	printf("Input: %s, output: %p\n", s, b);
	return (0);
}
