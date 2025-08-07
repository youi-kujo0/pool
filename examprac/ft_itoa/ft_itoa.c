#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(long nb){
	int	len = 1;
	if(nb < 0){
		nb *= -1;
		len++;
	}
	while(nb > 9){
		nb = nb / 10;
		len++;
	}
	printf(len)
	return len;
}
char	*ft_itoa(int nbr){
	long	nb = (long)nbr;
	int	i = 0;
	int 	len = ft_strlen(nb); 
	char	*str = malloc(len + 1);

	str[len--] = 0;
	if(nb < 0){
		str[i] = '0';
		nb *= -1;
		i++;
	}
	while(len >= i){
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return str;
}

int main(){
	printf("%s",ft_itoa(235));
}
