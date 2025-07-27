#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long nbr = (long)nb;
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if(nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1 ,&c, 1);
}

int main()
{
	ft_putnbr(-2147483648);
}

