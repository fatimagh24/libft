/* This function is a recreation of the main function "strlcpy" which is take 2 string parameters and size_t , it's copy from src into dest within size 
and returns the size of the src*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	i;

	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
/*
int main()
{
	char s[9] = "";
	char d[10];
	printf("%ld\n", ft_strlcpy(d,s,4));
	return (0);
}*/
