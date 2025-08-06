#include <unistd.h>
void	put_nbr(int nb)
{
	long nbr = (long)nb;
	if(nbr < 0){
		write(1, "-", 1);
		nbr = -nbr;
	}
	if(nbr > 9)
		put_nbr(nbr / 10);
	write(1, &(char){nbr % 10 + '0'}, 1);
}

int main()
{
	put_nbr(-2147483699);
}
