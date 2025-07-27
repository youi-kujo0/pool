int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while(i < nb)
	{
		if(nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(7));
	 printf("%d\n", ft_is_prime(13));
	  printf("%d\n", ft_is_prime(4));
	   printf("%d\n", ft_is_prime(9));
	    printf("%d\n", ft_is_prime(21));
	 printf("%d\n", ft_is_prime(30));




}
