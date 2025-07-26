int ft_iterative_power(int nb, int power)
{
	int	c;

	c = 1;
	if(power < 0)
		return 0;
	if(power == 0)
		return 1;
	return nb * ft_iterative_power(nb, power - 1 );
}

#include <stdio.h>

int main()
{
	int	p = 3;
	int res = ft_iterative_power(p, 4);
	printf("%d", res);

}

