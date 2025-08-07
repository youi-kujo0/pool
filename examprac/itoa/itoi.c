#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int nbr)
{	
	int len = 0;
	if(nbr < 0){
		len++;
		nbr *= -1;
	}
	while(nbr > 0){
		len++;
		nbr = nbr / 10;
	}
	return len;
}
char	*ft_itoa(int nbr)
{
	long nb = (long)nbr;
	int i = 0;
	int len = ft_strlen(nb);
	char *str = malloc(len + 1);

	str[len--] = 0;
	if(nb < 0){
		str[i++] = '-';
		nb *= -1;
	}
	while(len >= i){
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return str;
}


int main()
{
	printf("%s", ft_itoa(45));	
}

