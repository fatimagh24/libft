/* This function is a recreation of the main function "memcpy" which is take 2 string parameters and size_t , it's copy from src into dest within size of characters n*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}
/*
int main(){
char d[10];
char s[] = "hallow my world";

char *c = ft_memcpy(d ,s, sizeof(s)-1);
char *v = memcpy(d, s, sizeof(s)-1);
printf("%s\n\n",v);
printf("%s",c);
return(0);
}*/
