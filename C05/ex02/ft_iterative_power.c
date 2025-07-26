int ft_iterative_power(int nb, int power)
{
	int	c;
	int	v;

	v = nb;
	c = 1;
	if(power < 0)
		return 0;
	if(nb == 0 && power == 0)
		return 1;
	while(power >= 1)
	{
		c = c * nb;
		power --;
	}
	return c;
}

#include <stdio.h>

int main()
{
	int	p = 3;
	int res = ft_iterative_power(p, 4);
	printf("%d", res);

}
