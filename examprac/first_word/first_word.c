#include <unistd.h>
int main(int ac, char **av)
{
	int	i = 0;
	char	*str = av[1];
	if(ac == 2){
		if(str[i]){
			while(str[i] == '	' || str[i] == ' ')
				i++;
			while(str[i] != '	' && str[i] != ' '){
				write(1, &str[i++], 1);
			}
			return 0;
		}
	}
	write(1, "\n", 1);
}
