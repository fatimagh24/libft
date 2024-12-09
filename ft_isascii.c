/* This function is a recreation of main functiion "isalpha" that take 1 integer parameter and check if it's ascii code or not */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
