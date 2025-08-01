#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	int	i;
	int	y;

	i = 0;
	if(ac == 3)
	{
		y = 0;
		while(av[2][y])
		{
			if(av[1][i] == av[2][y])
				i++;
			y++;
		}
		if(av[1][i] == 0)
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
