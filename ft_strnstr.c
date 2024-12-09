/* This function is a recreation of the main function "strnstr"
 this function searches for the substring 'little' within large string 'big' within number of characters len */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*s;
	char		*c;
	size_t		in;
	size_t		i;
	size_t		j;

	s = (char *)big;
	c = (char *)little;
	i = 0;
	if (c[0] == '\0')
		return ((char *)&s[i]);
	while (s[i] != '\0' && i < len)
	{
		if (s[i] == c[0])
		{
			in = i;
			j = 0;
			while (j + i < len && c[j] != '\0' && s[i + j] == c[j])
				j++;
			if (c[j] == '\0')
				return ((char *)&s[in]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char big[] = "hello world fatima";
	char small[]="";

	char *str = ft_strnstr(big, small, sizeof(big));
	printf("%s",str);
	return (0);
}*/