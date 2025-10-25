#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *a)
{
	size_t  i;

	i = 0;
	while(a[i])
		i++;
	return (i);

}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t  i;
	size_t	offset;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	
	offset = d;
    i = 0;
    if(size <= d)
        return(size +s);
	while( *(src+i) != '\0')
	{
		*(dst+offset) = *(src+i);
		offset++;
		i++;
		if(offset == size - 1)
		    break;
	}
	*(dst + offset) = '\0';
	return(s+d);
}

int main(void)
{
    const char *src = "Alex";
    char dst[20] = "Hello ";
    size_t size = 0;
    printf("Starting numbers: src is %s, dest is %s\n", src,dst);
    printf("Output: %li\n", ft_strlcat(dst,src,size));
    printf("Catted string: %s", dst);
    return (0);
}
