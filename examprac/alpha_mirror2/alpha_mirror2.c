#include <unistd.h>
int main(int ac, char **av)
{
	int	i = 0;
	char	*str = av[1];
	if(ac == 2){
		while(str[i]){
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'z' - str[i] + 'a';
			else if(str[i] >= 'A' && str[i] <= 'Z')
                                str[i] = 'Z' - str[i] + 'A';
			write(1, &str[i++], 1);
		}
	}
	write(1, "\n", 1);
}
