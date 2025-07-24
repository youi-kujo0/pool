#include <unistd.h>

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb > 9)
		ft_putnbr(nb / 10);
	write(1, &(unsigned char){nb % 10 + '0'}, 1);
}

int main()
{
	ft_putnbr(-214748349);
}
