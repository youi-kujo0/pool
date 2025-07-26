#include <unistd.h>

void ft_putnbr(int nb)
{
	long nbr = (long)nb;
	char	c;
	if(nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}

	if(nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int main()
{
	int	n;
	n = 58;
	ft_putnbr(n);

}


