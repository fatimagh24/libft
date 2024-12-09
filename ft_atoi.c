/* This function is a recreation of the main function "atoi" which is take 1 string parameter and convert it to integer*/
#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c[] = "-2345jkdf";
	printf("%d\n",ft_atoi(c));
	printf("%d", atoi(c));
	return (0);
}*/
