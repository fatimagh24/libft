/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	size_t			end;

	start = 0;
	len = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	if (len == 0)
		len = end;
	return (ft_substr(s1, start, len));
}
/*
int main()
{
	char s[] = "\tabcds";
	char set[] ="\t";
	char	*c = ft_strtrim(s, set);

	printf("%s" ,c);

	return(0);
}*/
