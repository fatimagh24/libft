/* This function is a recreation of main functiion "isalnum" that take 1 integer parameter and implement it as ascii code to check if it's alphabatical or integer*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
