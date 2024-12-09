/* This function is a recreation of the main function "memset"  it's fill the string s with character c within size of characters n*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}
/*
int main()
{
	char	test[] = "Hello";
	char	*r = ft_memset(test, 'a', sizeof(test) - 1);
	printf ("%s\n", r);

	char	*p = memset(test, '$', sizeof(test) - 1);
	printf("%s", p);
	return (0);

}*/
