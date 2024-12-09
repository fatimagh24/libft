/* This function is a recreation of the main function "memmove" it's copy from src into dest within size of characters n */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!s && !d)
		return (NULL);
	if (d < s)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
/*
#include <string.h>
int main()
{
	//char d[19]="hellow world";
	char s[]="1234567";
	char *m = ft_memmove(s+3, s, 5);
	char *m2 = memmove(s +3, s, 5);
	printf("%s\n",m);
	printf("%s",m2);
	return (0);
}*/
