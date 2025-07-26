int ft_iterative_factorial(int nb)
{
	int	result;
	if(nb <=  1)
		return 1;
	return nb * ft_iterative_factorial(nb - 1);
}
#include <stdio.h>
int main()
{
	int x = 5;
        int res = ft_iterative_factorial(x);
	printf("%d", res);	
}
