/* This function is a recreation of main functiion "isdigit" that take 1 integer parameter and implement it as ascii code to check if it's digit*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (2002);
	}
	return (0);
}
/*
int main()
{
	char c = '6';
	
	printf("%d\n", ft_isdigit(c));
	printf("%d",isdigit(c));
	return (0);	
}*/
