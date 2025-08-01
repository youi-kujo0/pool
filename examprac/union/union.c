#include <unistd.h>

static char arr[255];

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(arr[str[i]] == 0)
		{
			arr[str[i]] = 1;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{

	if(ac == 3)
	{
		ft_putstr(av[1]);
		ft_putstr(av[2]);
	}
	write(1, "\n", 1);
}
