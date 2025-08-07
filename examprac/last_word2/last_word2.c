#include <unistd.h>
int main(int ac, char	**av)
{
	int	i;
	char	*str = av[1];
	if(ac == 2){
		while(str[i + 1])
			i++;
		while((str[i] == '	' || str[i] == ' ') && str[i])
			i--;
		while(str[i - 1] != '	' && str[i - 1] != ' ' && i - 1 >= 0)
			i--;
		while(str[i] != '	' && str[i] != ' ' && str[i])
			write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}
