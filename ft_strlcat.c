/* This function is a recreation of the main function "strlcat" which is take 2 string parameters and size_t ,
it's copy from src into dest within size and returns the size of the two strings*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;
	size_t	sp;

	i = 0;
	dl = ft_strlen((const char *)dest);
	sl = ft_strlen(src);
	if (sl == 0)
		return (dl);
	if (dl >= size)
	{
		return (size + sl);
	}
	sp = size - dl - 1;
	while (i < sp && src[i] != '\0')
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
/*
int main()
{
	char d[] = "sara";
	char s[] = "fatoom ";
	printf("%ld\n",ft_strlcat(d,s,40));
	printf("%s", d);
	return(0);

}*/
