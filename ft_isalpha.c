/* This function is a recreation of main functiion "isalpha" that take 1 integer parameter and implement it as ascii code to check if it's alphabatical*/


#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1024);
	}
	return (0);
}
/*
int main()
{
	char x = 'l';

	printf("%d\n", ft_isalpha(x));
	printf("%d", isalpha(x));
	return(0);
}*/
