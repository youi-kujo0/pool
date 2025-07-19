#include <stdio.h>

void	ft_rev_int_tab(int	*tab,int	size)
{
	int	i;
	i = 0;
	while(size >= 0 && tab[i] != '\0')
	{
		tab[size] = tab[i];
		printf("%i", tab[size]);
		size--;
		i++;
	}
}

int main()
{
	int x = 012345;
	ft_rev_int_tab(&x, 5);

}
