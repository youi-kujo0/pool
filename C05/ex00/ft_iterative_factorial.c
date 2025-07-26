int ft_iterative_factorial(int nb)
{
	int	result;
	result = 1;
	while(nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return result;
}
#include <stdio.h>
int main()
{
	int 	n;
	n = 12;
	int result = ft_iterative_factorial(n);
	printf("%d", result);
}
