#include <unistd.h>
int main(int ac, char **av)
{
	int	i = 1;
	int	j;
	if(ac > 1){
		i = 1;
		while(i < ac){
			j = 0;
			while(av[i][j]){
				if((j == 0 && av[i][j] >= 'a' && av[i][j] <= 'z')
				|| (av[i][j] >= 'a' && av[i][j] <= 'z')
				&& (av[i][j- 1] == '\t' ||  av[i][j - 1] == 32)) {
					av[i][j] -= 32;
				}
				j++;
			}
			i++;
		}
		i = 1;
		while(i < ac){
			j = 0;
			while(av[i][j])
				write(1, &av[i][j++], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
