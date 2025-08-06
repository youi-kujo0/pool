int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	nbr = 0;
	if(!str[i])
		return 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] == '+' || str[i] == '-')
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
#include <stdio.h>
int main()
{
	printf("%d\n",ft_atoi(" 	-4596hfks"));
	printf("%d", ft_atoi("    +735rew65"));
}
