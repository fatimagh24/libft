/* This function is a recreation of the main function "memcmp" which is compaire between two strings within size of characters and return the defferance*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (n)
	{
		if (*ss1 != *ss2)
		{
			return (*ss1 - *ss2);
		}
		--n;
		++ss1;
		++ss2;
	}
	if (n)
	{
		return (*ss1 - *ss2);
	}
	else
		return (0);
}