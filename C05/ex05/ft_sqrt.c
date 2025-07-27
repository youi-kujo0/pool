int ft_sqrt(int nb)
{
	int	i;
	int	y;

	y = 1;
	i = 1;
	while(i <= nb)
	{
		i = y * y;
		if(i == nb)
			return y;
		y++;
	}
	return 0;
}
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(9));
}
