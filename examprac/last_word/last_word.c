#include <unistd.h>

void	ft_putstr(char	*str, int save)
{
	while(str[save] && str[save] != 32 && str[save] != '\t')
		write(1, &str[save++], 1);
}
int main(int ac, char **av)
{
	int	i;
	char	*str;
	int	save;
	str = av[1];
	i = 0;
	save = 0;
	if(ac == 2)
	{
		while (str[i])
		{
			if ((str[i] == 32 || str[i] == '\t') && str[i + 1] != 0 
			&& str[i + 1] != 32 && str[i + 1] = 't')
				save = i + 1;
			i++;
		}
	       ft_putstr(str , save);	
	}
	write (1, "\n", 1);
}

