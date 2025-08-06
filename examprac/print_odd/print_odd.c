#include <unistd.h>
int main(int ac, char **av)
{
	int	i = 1;
	int	j;
	while(av[i])
	{
		j = 0;
		while(av[i][j])
		{
			if(j % 2 == 1)
				write(1, &av[i][j], 1);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
