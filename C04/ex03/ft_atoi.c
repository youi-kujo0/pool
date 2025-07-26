#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while((str[i] >= 9 && str[i] <= 12 && str[i]) || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;

	}
	return nbr * sign;
}

int main()
{
	int nbr;
	char	str[] = "	  ---+--+1234ab567";
	nbr = ft_atoi(str);
	printf("%i", nbr);
}
