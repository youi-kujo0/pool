#include<unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	arr[256];

	if(ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	i = 0;
	while(arr[i])
		arr[i++] = 0;

	i = 0;
	while(av[2][i])
	{
		arr[av[2][i]] = 1;
		i++;
	}

	i = 0;
	while(av[1][i])
	{
		if(arr[av[1][i]] == 1)
		{
			write(1, &av[1][i], 1);
			arr[av[1][i]] = 0;
		}
		i++;
	}
	write(1, "\n", 1);

}
