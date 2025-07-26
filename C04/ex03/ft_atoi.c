#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nbr;

	i = 0;
	while((str[i] < '0' || str[i] > '9') && str[i])
	{
		if(str[i] == '-')
			nbr = -nbr;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = str[i] - '0';
		//if(str[i + 1] != 0 && str[i + 1] >= '0' && str[i + 1] <= '9')
			//nbr = nbr * 10 + (str[i] - '0');

	}
	return nbr;
}

int main()
{
	int nbr;
	char	str[] = "-2";
	nbr = ft_atoi(str);
	printf("%i", nbr);
}
