/* This function is a recreation of the main function "strdup" it returns a duplicated copy from the string s*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	if (*s)
		ft_memcpy(copy, s, len);
	copy[len] = '\0';
	return (copy);
}
/*
int main()
{
	char	s[] = "Fatima Ghanem";
	char	*s2 = ft_strdup(s);
	printf("%s",s2);
	free(s2);
	return(0);
}*/
