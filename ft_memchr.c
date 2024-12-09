/* This function is a recreation of the main function "memchr" which is return a pointer to the position of specific character in the string*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *ss != c)
	{
		++ss;
		--n;
	}
	if (n)
		return ((void *)ss);
	else
		return (NULL);
}
/*
int main()
{
	char	c[]= "abcds";
	char	*r = ft_memchr(c,'c',sizeof(c));
	char	*t = memchr(c,'c',sizeof(c));
	printf("%s\n",r);
	printf("%s",t);
	return(0);

}*/
