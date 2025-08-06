#include <stdio.h>
#include <unistd.h>
int main(int ac, char **av)
{
	int	i = 0;
	char	*str = av[1];
	if(ac == 2)
	{
		while(str[i])
		{
			if(i % 5 == 0 && i % 3 == 0)
				str[i] = '5';
			else if(i % 3 == 0)
				str[i] = '5';	
			else if(i % 5 == 0)
				str[i] = '3';
			i++;
		}
	}
	write(1, "\n", 1);
	printf("%s", str);
}
