#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	int	nbr;

	nbr = 1;
	while(nbr < n)
		nbr *= 2;
	if(nbr == n)
		return 1;
	return 0;
}

int main()
{
	printf("%d", is_power_of_2(4));
}
