/* This function is a recreation of main functiion "isprint" that take 1 integer parameter and implement it as ascii code to check if it's printable or not*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}
