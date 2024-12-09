/* This function is a recreation of the main function "strncmp" which is compaire between two strings within size of characters and return the defferance*/


#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && n > 0 && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		n--;
		s1++;
		s2++;
	}
	if (n > 0)
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
/*
#include <string.h>
int main()
{
	char s1[] = "abcd l";
	char s2[] = "abcd k";

	printf("%d\n",ft_strncmp(s1,s2,5));
	printf("%d",strncmp(s1,s2,5));
	return (0);
}*/
