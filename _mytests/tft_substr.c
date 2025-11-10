int main (void)
{
	char *str = "lorem ipsum dolor sit amet";
	int x = 7;
	int y = 10;
	printf("Substring of '%s' between %d and %d:\n",str,x,y);
	char *ss = ft_substr(str,x,y);
	printf("Answer is: %s",ss);
	return (0);
} 