#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char	**av)
{
	int	av1;
	int	av2;
	av1 = atoi(av[1]);
	av2 = atoi(av[3]);
	if (ac != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	if (av[2][0] == '+')
		printf("%d\n", av1 + av2);
}
