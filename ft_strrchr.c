/* This function is a recreation of the main function "strrchr"
it is returns a pointer to the position of character c in the string s with the rest of string*/


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*d;
	char		ch;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	ch = (char)c;
	d = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			j = i;
			d = (char *)&s[j];
		}
		i++;
	}
	if (s[i] == ch)
		d = (char *)&s[i];
	return (d);
}
/*
int main() {
    const char *str = "Hello, world!";
    char ch = 'l';
    char *ptr = ft_strrchr(str, ch);

    if (ptr != NULL)
    {
	    printf("Found '%c' at position %ld\n", ch , ptr - str);
	    printf("%s",ptr);
    }
    else 
    {
	    printf("Character '%c' not found\n", ch);
    }
    return 0;
}*/
